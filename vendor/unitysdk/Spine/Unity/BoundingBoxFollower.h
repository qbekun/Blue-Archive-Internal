#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonRenderer; }
namespace Spine { class Slot; }
namespace Spine { class BoundingBoxAttachment; }
namespace UnityEngine { class PolygonCollider2D; }
namespace Spine { class Skin; }
namespace Spine { class Attachment; }

#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95F0580)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x95F05C0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET UNITYSDK_OFFSET(0x95F05D0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x95F06A0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95F0870)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x95F0940)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x95F0950)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_ADDCOLLIDERSFORSKIN_OFFSET UNITYSDK_OFFSET(0x95F0960)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95F0E30)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95F0E40)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95F1430)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_MATCHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95F1450)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x95F17E0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_START_OFFSET UNITYSDK_OFFSET(0x95F18F0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x95F1900)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTCOLLIDER_OFFSET UNITYSDK_OFFSET(0x95F1A10)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWER_HANDLEREBUILD_OFFSET UNITYSDK_OFFSET(0x95F1A20)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoundingBoxFollower_TypeDefinitionIndex = 35292;

	class BoundingBoxFollower : public Il2CppObject
	{
	public:
		::System::Boolean DebugMessages; // 0x0
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::System::String* slotName; // 0x20
		::System::Boolean isTrigger; // 0x28
		::System::Boolean usedByEffector; // 0x29
		::System::Boolean usedByComposite; // 0x2A
		::System::Boolean clearStateOnDisable; // 0x2B
		::Spine::Slot* slot; // 0x30
		::Spine::BoundingBoxAttachment* currentAttachment; // 0x38
		::System::String* currentAttachmentName; // 0x40
		::UnityEngine::PolygonCollider2D* currentCollider; // 0x48
		Il2CppObject* colliderTable; // 0x50
		Il2CppObject* nameTable; // 0x58

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTrigger()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_ISTRIGGER_OFFSET))(nullptr);
		}

		::System::Void DisposeExcessCollidersAfter(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET))(arg, nullptr);
		}

		::System::Void ClearState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_CLEARSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_CurrentAttachmentName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTATTACHMENTNAME_OFFSET))(nullptr);
		}

		::Spine::Slot* get_Slot()
		{
			return (return (::Spine::Slot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_SLOT_OFFSET))(nullptr);
		}

		::System::Void AddCollidersForSkin(::Spine::Skin* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Spine::Skin*, ::System::Int32, ::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_ADDCOLLIDERSFORSKIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Spine::BoundingBoxAttachment* get_CurrentAttachment()
		{
			return (return (::Spine::BoundingBoxAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTATTACHMENT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void MatchAttachment(::Spine::Attachment* arg)
		{
			((::System::Void(*)(::Spine::Attachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_MATCHATTACHMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::PolygonCollider2D* get_CurrentCollider()
		{
			return (return (::UnityEngine::PolygonCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_GET_CURRENTCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void HandleRebuild(::Spine::Unity::SkeletonRenderer* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWER_HANDLEREBUILD_OFFSET))(arg, nullptr);
		}

	};
}

