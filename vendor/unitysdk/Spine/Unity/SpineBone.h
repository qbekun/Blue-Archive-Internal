#pragma once
#include "../../unitysdk.h"

namespace Spine { class BoneData; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine { class Bone; }
namespace Spine::Unity { class SkeletonRenderer; }

#define SPINE_UNITY_SPINEBONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x961E220)
#define SPINE_UNITY_SPINEBONE_GETBONEDATA_OFFSET UNITYSDK_OFFSET(0x961E2D0)
#define SPINE_UNITY_SPINEBONE_GETBONE_OFFSET UNITYSDK_OFFSET(0x961E310)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineBone_TypeDefinitionIndex = 35365;

	class SpineBone : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEBONE_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		::Spine::BoneData* GetBoneData(::System::String* str, ::Spine::Unity::SkeletonDataAsset* arg)
		{
			return (return (::Spine::BoneData*(*)(::System::String*, ::Spine::Unity::SkeletonDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEBONE_GETBONEDATA_OFFSET))(str, arg, nullptr);
		}

		::Spine::Bone* GetBone(::System::String* str, ::Spine::Unity::SkeletonRenderer* arg)
		{
			return (return (::Spine::Bone*(*)(::System::String*, ::Spine::Unity::SkeletonRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEBONE_GETBONE_OFFSET))(str, arg, nullptr);
		}

	};
}

