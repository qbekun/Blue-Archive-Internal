#pragma once
#include "../../unitysdk.h"

namespace Spine { class SkeletonData; }

#define SPINE_UNITY_SKELETONDATAMODIFIERASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x95ECAB0)
#define SPINE_UNITY_SKELETONDATAMODIFIERASSET_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonDataModifierAsset_TypeDefinitionIndex = 35283;

	class SkeletonDataModifierAsset : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAMODIFIERASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAMODIFIERASSET_APPLY_OFFSET))(arg, nullptr);
		}

	};
}

