#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_RGBTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9594DE0)
#define SPINE_RGBTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9594EF0)
#define SPINE_RGBTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x9594F00)
#define SPINE_RGBTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x9594F10)
#define SPINE_RGBTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x9594FA0)

namespace Spine
{
	inline static constexpr unsigned int RGBTimeline_TypeDefinitionIndex = 34970;

	class RGBTimeline : public Il2CppObject
	{
	public:
		::System::Int32 ENTRIES; // 0x0
		::System::Int32 R; // 0x0
		::System::Int32 G; // 0x0
		::System::Int32 B; // 0x0
		::System::Int32 slotIndex; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_FrameEntries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE_GET_FRAMEENTRIES_OFFSET))(nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE_SETFRAME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

