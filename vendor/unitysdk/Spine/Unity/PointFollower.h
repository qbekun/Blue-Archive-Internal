#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonRenderer; }
namespace UnityEngine { class Transform; }
namespace Spine { class PointAttachment; }
namespace Spine { class Bone; }
namespace Spine::Unity { class ISkeletonComponent; }

#define SPINE_UNITY_POINTFOLLOWER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x95F36F0)
#define SPINE_UNITY_POINTFOLLOWER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x95F37B0)
#define SPINE_UNITY_POINTFOLLOWER_HANDLEREBUILDRENDERER_OFFSET UNITYSDK_OFFSET(0x95F37C0)
#define SPINE_UNITY_POINTFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95F3870)
#define SPINE_UNITY_POINTFOLLOWER_GET_SKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x95F3FF0)
#define SPINE_UNITY_POINTFOLLOWER_UPDATEREFERENCES_OFFSET UNITYSDK_OFFSET(0x95F3D90)
#define SPINE_UNITY_POINTFOLLOWER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95F37D0)
#define SPINE_UNITY_POINTFOLLOWER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95F4000)
#define SPINE_UNITY_POINTFOLLOWER_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x95F4010)

namespace Spine::Unity
{
	inline static constexpr unsigned int PointFollower_TypeDefinitionIndex = 35294;

	class PointFollower : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::System::String* slotName; // 0x20
		::System::String* pointAttachmentName; // 0x28
		::System::Boolean followRotation; // 0x30
		::System::Boolean followSkeletonFlip; // 0x31
		::System::Boolean followSkeletonZPosition; // 0x32
		::UnityEngine::Transform* skeletonTransform; // 0x38
		::System::Boolean skeletonTransformIsParent; // 0x40
		::Spine::PointAttachment* point; // 0x48
		::Spine::Bone* bone; // 0x50
		::System::Boolean valid; // 0x58

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void HandleRebuildRenderer(::Spine::Unity::SkeletonRenderer* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_HANDLEREBUILDRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_LATEUPDATE_OFFSET))(nullptr);
		}

		::Spine::Unity::ISkeletonComponent* get_SkeletonComponent()
		{
			return (return (::Spine::Unity::ISkeletonComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_SKELETONCOMPONENT_OFFSET))(nullptr);
		}

		::System::Void UpdateReferences()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_UPDATEREFERENCES_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_.CTOR_OFFSET))(nullptr);
		}

		::Spine::Unity::SkeletonRenderer* get_SkeletonRenderer()
		{
			return (return (::Spine::Unity::SkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_POINTFOLLOWER_GET_SKELETONRENDERER_OFFSET))(nullptr);
		}

	};
}

