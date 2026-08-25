#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_TRANSLATEXTIMELINE_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0x9592E80)
#define SPINE_TRANSLATEXTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9592E90)
#define SPINE_TRANSLATEXTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x9592F20)

namespace Spine
{
	inline static constexpr unsigned int TranslateXTimeline_TypeDefinitionIndex = 34960;

	class TranslateXTimeline : public Il2CppObject
	{
	public:
		::System::Int32 boneIndex; // 0x28

		::System::Int32 get_BoneIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSLATEXTIMELINE_GET_BONEINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSLATEXTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSLATEXTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

