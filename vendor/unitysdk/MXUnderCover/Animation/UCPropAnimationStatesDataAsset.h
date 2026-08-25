#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPROPANIMATIONSTATESDATAASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3270)
#define MXUNDERCOVER_ANIMATION_UCPROPANIMATIONSTATESDATAASSET_GET_STATES_OFFSET UNITYSDK_OFFSET(0xDD32B0)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCPropAnimationStatesDataAsset_TypeDefinitionIndex = 10089;

	class UCPropAnimationStatesDataAsset : public ::UnityEngine::InputSystem::HID::HIDSupport
	{
	public:
		Il2CppObject* PropStates; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROPANIMATIONSTATESDATAASSET_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_States()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROPANIMATIONSTATESDATAASSET_GET_STATES_OFFSET))(nullptr);
		}

	};
}

