#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPLAYERANIMATIONSTATESDATAASSET_GET_STATES_OFFSET UNITYSDK_OFFSET(0xDD2E90)
#define MXUNDERCOVER_ANIMATION_UCPLAYERANIMATIONSTATESDATAASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD2FC0)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCPlayerAnimationStatesDataAsset_TypeDefinitionIndex = 10080;

	class UCPlayerAnimationStatesDataAsset : public HIDPageUsage
	{
	public:
		Il2CppObject* PlayerStates; // 0x18

		Il2CppObject* get_States()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANIMATIONSTATESDATAASSET_GET_STATES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERANIMATIONSTATESDATAASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

