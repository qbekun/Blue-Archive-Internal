#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonRenderer; }
namespace Spine { class Bone; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_BONEFOLLOWER_AWAKE_OFFSET UNITYSDK_OFFSET(0x95EEDC0)
#define SPINE_UNITY_BONEFOLLOWER_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x95EEDE0)
#define SPINE_UNITY_BONEFOLLOWER_HANDLEREBUILDRENDERER_OFFSET UNITYSDK_OFFSET(0x95EEDF0)
#define SPINE_UNITY_BONEFOLLOWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x95EEE10)
#define SPINE_UNITY_BONEFOLLOWER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EEED0)
#define SPINE_UNITY_BONEFOLLOWER_SETBONE_OFFSET UNITYSDK_OFFSET(0x95EEEF0)
#define SPINE_UNITY_BONEFOLLOWER_SET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x95EEFD0)
#define SPINE_UNITY_BONEFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95EF010)
#define SPINE_UNITY_BONEFOLLOWER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95EF830)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoneFollower_TypeDefinitionIndex = 35290;

	class BoneFollower : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::System::String* boneName; // 0x20
		::System::Boolean followXYPosition; // 0x28
		::System::Boolean followZPosition; // 0x29
		::System::Boolean followBoneRotation; // 0x2A
		::System::Boolean followSkeletonFlip; // 0x2B
		::System::Boolean followLocalScale; // 0x2C
		::System::Boolean followParentWorldScale; // 0x2D
		AxisOrientation* maintainedAxisOrientation; // 0x30
		::System::Boolean initializeOnAwake; // 0x34
		::System::Boolean valid; // 0x35
		::Spine::Bone* bone; // 0x38
		::UnityEngine::Transform* skeletonTransform; // 0x40
		::System::Boolean skeletonTransformIsParent; // 0x48

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_AWAKE_OFFSET))(nullptr);
		}

		::Spine::Unity::SkeletonRenderer* get_SkeletonRenderer()
		{
			return (return (::Spine::Unity::SkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_GET_SKELETONRENDERER_OFFSET))(nullptr);
		}

		::System::Void HandleRebuildRenderer(::Spine::Unity::SkeletonRenderer* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_HANDLEREBUILDRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean SetBone(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_SETBONE_OFFSET))(str, nullptr);
		}

		::System::Void set_SkeletonRenderer(::Spine::Unity::SkeletonRenderer* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_SET_SKELETONRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BONEFOLLOWER_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

