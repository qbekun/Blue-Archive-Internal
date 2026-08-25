#pragma once
#include "../unitysdk.h"

namespace Spine { class IHasTextureRegion; }
namespace Spine { class Attachment; }
namespace Spine { class SequenceMode; }
namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_SEQUENCETIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x959B500)
#define SPINE_SEQUENCETIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x959B8B0)
#define SPINE_SEQUENCETIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x959B930)
#define SPINE_SEQUENCETIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x959B940)
#define SPINE_SEQUENCETIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x959B950)
#define SPINE_SEQUENCETIMELINE_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x959BCE0)

namespace Spine
{
	inline static constexpr unsigned int SequenceTimeline_TypeDefinitionIndex = 34992;

	class SequenceTimeline : public Il2CppObject
	{
	public:
		::System::Int32 ENTRIES; // 0x0
		::System::Int32 MODE; // 0x0
		::System::Int32 DELAY; // 0x0
		::System::Int32 slotIndex; // 0x20
		::Spine::IHasTextureRegion* attachment; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::Spine::Attachment* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Spine::Attachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::Spine::SequenceMode* arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::Spine::SequenceMode*, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_SETFRAME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_FrameEntries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_GET_FRAMEENTRIES_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Spine::Attachment* get_Attachment()
		{
			return (return (::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_GET_ATTACHMENT_OFFSET))(nullptr);
		}

	};
}

