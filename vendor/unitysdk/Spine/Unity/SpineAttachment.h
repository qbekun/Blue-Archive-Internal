#pragma once
#include "../../unitysdk.h"

namespace Spine { class Attachment; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class SkeletonDataAsset; }

#define SPINE_UNITY_SPINEATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x961E870)
#define SPINE_UNITY_SPINEATTACHMENT_GETHIERARCHY_OFFSET UNITYSDK_OFFSET(0x961E9A0)
#define SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x961EBC0)
#define SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x961EC70)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAttachment_TypeDefinitionIndex = 35374;

	class SpineAttachment : public Il2CppObject
	{
	public:
		::System::Boolean returnAttachmentPath; // 0x30
		::System::Boolean currentSkinOnly; // 0x31
		::System::Boolean placeholdersOnly; // 0x32
		::System::String* skinField; // 0x38
		::System::String* slotField; // 0x40

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_.CTOR_OFFSET))(arg, arg, arg, str, str, str, arg, arg, nullptr);
		}

		Hierarchy* GetHierarchy(::System::String* str)
		{
			return (return (Hierarchy*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_GETHIERARCHY_OFFSET))(str, nullptr);
		}

		::Spine::Attachment* GetAttachment(::System::String* str, ::Spine::SkeletonData* arg)
		{
			return (return (::Spine::Attachment*(*)(::System::String*, ::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_OFFSET))(str, arg, nullptr);
		}

		::Spine::Attachment* GetAttachment(::System::String* str, ::Spine::Unity::SkeletonDataAsset* arg)
		{
			return (return (::Spine::Attachment*(*)(::System::String*, ::Spine::Unity::SkeletonDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTACHMENT_GETATTACHMENT_OFFSET))(str, arg, nullptr);
		}

	};
}

