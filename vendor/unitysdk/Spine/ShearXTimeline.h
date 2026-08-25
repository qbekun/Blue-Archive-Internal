#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_SHEARXTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x9593FE0)
#define SPINE_SHEARXTIMELINE_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0x9594100)
#define SPINE_SHEARXTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9594110)

namespace Spine
{
	inline static constexpr unsigned int ShearXTimeline_TypeDefinitionIndex = 34966;

	class ShearXTimeline : public Il2CppObject
	{
	public:
		::System::Int32 boneIndex; // 0x28

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SHEARXTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_BoneIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SHEARXTIMELINE_GET_BONEINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SHEARXTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

