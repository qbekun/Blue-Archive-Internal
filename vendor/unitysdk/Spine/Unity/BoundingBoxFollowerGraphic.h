#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine { class Slot; }
namespace Spine { class BoundingBoxAttachment; }
namespace UnityEngine { class PolygonCollider2D; }
namespace Spine { class Skin; }
namespace Spine { class Attachment; }

#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x95F1A30)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTCOLLIDER_OFFSET UNITYSDK_OFFSET(0x95F1C00)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95F1C10)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x95F2D10)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x95F2D20)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_HANDLEREBUILD_OFFSET UNITYSDK_OFFSET(0x95F2D30)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95F2D40)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x95F2D50)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95F2E20)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET UNITYSDK_OFFSET(0x95F2C40)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_START_OFFSET UNITYSDK_OFFSET(0x95F31D0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x95F31E0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ADDCOLLIDERSFORSKIN_OFFSET UNITYSDK_OFFSET(0x95F2770)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x95F3520)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x95F36A0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95F36B0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_MATCHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95F2E40)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoundingBoxFollowerGraphic_TypeDefinitionIndex = 35293;

	class BoundingBoxFollowerGraphic : public Il2CppObject
	{
	public:
		::System::Boolean DebugMessages; // 0x0
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x18
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

		::System::Void ClearState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CLEARSTATE_OFFSET))(nullptr);
		}

		::UnityEngine::PolygonCollider2D* get_CurrentCollider()
		{
			return (return (::UnityEngine::PolygonCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::Spine::Slot* get_Slot()
		{
			return (return (::Spine::Slot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_SLOT_OFFSET))(nullptr);
		}

		::System::String* get_CurrentAttachmentName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENTNAME_OFFSET))(nullptr);
		}

		::System::Void HandleRebuild(::Spine::Unity::SkeletonGraphic* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonGraphic*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_HANDLEREBUILD_OFFSET))(arg, nullptr);
		}

		::Spine::BoundingBoxAttachment* get_CurrentAttachment()
		{
			return (return (::Spine::BoundingBoxAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void DisposeExcessCollidersAfter(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void AddCollidersForSkin(::Spine::Skin* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, int32_t&* arg)
		{
			((::System::Void(*)(::Spine::Skin*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Single, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ADDCOLLIDERSFORSKIN_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTrigger()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_ISTRIGGER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void MatchAttachment(::Spine::Attachment* arg)
		{
			((::System::Void(*)(::Spine::Attachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_MATCHATTACHMENT_OFFSET))(arg, nullptr);
		}

	};
}

