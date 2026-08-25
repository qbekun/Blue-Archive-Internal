#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine { class Bone; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95EFA20)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95EFBB0)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_SET_SKELETONGRAPHIC_OFFSET UNITYSDK_OFFSET(0x95F04F0)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_GET_SKELETONGRAPHIC_OFFSET UNITYSDK_OFFSET(0x95F0530)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_AWAKE_OFFSET UNITYSDK_OFFSET(0x95F0540)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_SETBONE_OFFSET UNITYSDK_OFFSET(0x95F0410)
#define SPINE_UNITY_BONEFOLLOWERGRAPHIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x95F0560)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoneFollowerGraphic_TypeDefinitionIndex = 35291;

	class BoneFollowerGraphic : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x18
		::System::Boolean initializeOnAwake; // 0x20
		::System::String* boneName; // 0x28
		::System::Boolean followBoneRotation; // 0x30
		::System::Boolean followSkeletonFlip; // 0x31
		::System::Boolean followLocalScale; // 0x32
		::System::Boolean followParentWorldScale; // 0x33
		::System::Boolean followXYPosition; // 0x34
		::System::Boolean followZPosition; // 0x35
		AxisOrientation* maintainedAxisOrientation; // 0x38
		::Spine::Bone* bone; // 0x40
		::UnityEngine::Transform* skeletonTransform; // 0x48
		::System::Boolean skeletonTransformIsParent; // 0x50
		::System::Boolean valid; // 0x51

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_SkeletonGraphic(::Spine::Unity::SkeletonGraphic* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonGraphic*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_SET_SKELETONGRAPHIC_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::SkeletonGraphic* get_SkeletonGraphic()
		{
			return (return (::Spine::Unity::SkeletonGraphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_GET_SKELETONGRAPHIC_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean SetBone(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_SETBONE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWERGRAPHIC_.CTOR_OFFSET))(nullptr);
		}

	};
}

