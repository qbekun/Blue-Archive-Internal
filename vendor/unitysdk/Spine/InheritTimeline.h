#pragma once
#include "../unitysdk.h"

namespace Spine { class Inherit; }
namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_INHERITTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x9594360)
#define SPINE_INHERITTIMELINE_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0x95943B0)
#define SPINE_INHERITTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95943C0)
#define SPINE_INHERITTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x95944C0)
#define SPINE_INHERITTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x95944D0)

namespace Spine
{
	inline static constexpr unsigned int InheritTimeline_TypeDefinitionIndex = 34968;

	class InheritTimeline : public Il2CppObject
	{
	public:
		::System::Int32 ENTRIES; // 0x0
		::System::Int32 INHERIT; // 0x0
		::System::Int32 boneIndex; // 0x20

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::Spine::Inherit* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::Spine::Inherit*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE_SETFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_BoneIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE_GET_BONEINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_FrameEntries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE_GET_FRAMEENTRIES_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

