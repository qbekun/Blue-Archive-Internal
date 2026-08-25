#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCANIMATIONSTATESDATAASSET`1_GET_STATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCANIMATIONSTATESDATAASSET`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCAnimationStatesDataAsset`1_TypeDefinitionIndex = 10069;

	class UCAnimationStatesDataAsset`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_States()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCANIMATIONSTATESDATAASSET`1_GET_STATES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCANIMATIONSTATESDATAASSET`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

