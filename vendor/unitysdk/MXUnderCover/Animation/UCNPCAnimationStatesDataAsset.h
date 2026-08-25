#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCNPCANIMATIONSTATESDATAASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD2AB0)
#define MXUNDERCOVER_ANIMATION_UCNPCANIMATIONSTATESDATAASSET_GET_STATES_OFFSET UNITYSDK_OFFSET(0xDD2AF0)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCNPCAnimationStatesDataAsset_TypeDefinitionIndex = 10071;

	class UCNPCAnimationStatesDataAsset : public ::UnityEngine::InputSystem::HID::HIDParser
	{
	public:
		Il2CppObject* NPCStates; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCANIMATIONSTATESDATAASSET_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_States()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCANIMATIONSTATESDATAASSET_GET_STATES_OFFSET))(nullptr);
		}

	};
}

