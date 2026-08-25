#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Spine::Unity { class SkeletonUtility; }
namespace Spine { class Bone; }

#define SPINE_UNITY_SKELETONUTILITYBONE_GET_INCOMPATIBLETRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0x96189B0)
#define SPINE_UNITY_SKELETONUTILITYBONE_ADDBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x96189C0)
#define SPINE_UNITY_SKELETONUTILITYBONE_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x9616DF0)
#define SPINE_UNITY_SKELETONUTILITYBONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9618A70)
#define SPINE_UNITY_SKELETONUTILITYBONE_RESET_OFFSET UNITYSDK_OFFSET(0x9618510)
#define SPINE_UNITY_SKELETONUTILITYBONE_HANDLEONRESET_OFFSET UNITYSDK_OFFSET(0x9618A90)
#define SPINE_UNITY_SKELETONUTILITYBONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9618AA0)
#define SPINE_UNITY_SKELETONUTILITYBONE_BONETRANSFORMMODEINCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x9618A40)
#define SPINE_UNITY_SKELETONUTILITYBONE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9618C60)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtilityBone_TypeDefinitionIndex = 35338;

	class SkeletonUtilityBone : public Il2CppObject
	{
	public:
		::System::String* boneName; // 0x18
		::UnityEngine::Transform* parentReference; // 0x20
		Mode* mode; // 0x28
		::System::Boolean position; // 0x2C
		::System::Boolean rotation; // 0x2D
		::System::Boolean scale; // 0x2E
		::System::Boolean zPosition; // 0x2F
		::System::Single overrideAlpha; // 0x30
		::Spine::Unity::SkeletonUtility* hierarchy; // 0x38
		::Spine::Bone* bone; // 0x40
		::System::Boolean transformLerpComplete; // 0x48
		::System::Boolean valid; // 0x49
		::UnityEngine::Transform* cachedTransform; // 0x50
		::UnityEngine::Transform* skeletonTransform; // 0x58
		::System::Boolean incompatibleTransformMode; // 0x60

		::System::Boolean get_IncompatibleTransformMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_GET_INCOMPATIBLETRANSFORMMODE_OFFSET))(nullptr);
		}

		::System::Void AddBoundingBox(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_ADDBOUNDINGBOX_OFFSET))(str, str, str, nullptr);
		}

		::System::Void DoUpdate(UpdatePhase* arg)
		{
			((::System::Void(*)(UpdatePhase*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_DOUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_RESET_OFFSET))(nullptr);
		}

		::System::Void HandleOnReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_HANDLEONRESET_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean BoneTransformModeIncompatible(::Spine::Bone* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_BONETRANSFORMMODEINCOMPATIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITYBONE_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

