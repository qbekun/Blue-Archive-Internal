#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }
namespace Spine { class Slot; }

#define SPINE_ATTACHMENTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x9596B40)
#define SPINE_ATTACHMENTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x9596D10)
#define SPINE_ATTACHMENTTIMELINE_GET_ATTACHMENTNAMES_OFFSET UNITYSDK_OFFSET(0x9596DA0)
#define SPINE_ATTACHMENTTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9596DB0)
#define SPINE_ATTACHMENTTIMELINE_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x9596CB0)
#define SPINE_ATTACHMENTTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9596ED0)

namespace Spine
{
	inline static constexpr unsigned int AttachmentTimeline_TypeDefinitionIndex = 34974;

	class AttachmentTimeline : public Il2CppObject
	{
	public:
		::System::Int32 slotIndex; // 0x20
		::Il2CppArray<::System::Object*>* attachmentNames; // 0x28

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_SETFRAME_OFFSET))(arg, arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AttachmentNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_GET_ATTACHMENTNAMES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetAttachment(::Spine::Skeleton* arg, ::Spine::Slot* arg, ::System::String* str)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::Spine::Slot*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_SETATTACHMENT_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_GET_SLOTINDEX_OFFSET))(nullptr);
		}

	};
}

