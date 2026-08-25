#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_PATHCONSTRAINTMIXTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x9599FE0)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x959A3E0)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x959A4F0)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x959A580)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x959A590)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintMixTimeline_TypeDefinitionIndex = 34982;

	class PathConstraintMixTimeline : public Il2CppObject
	{
	public:
		::System::Int32 ENTRIES; // 0x0
		::System::Int32 ROTATE; // 0x0
		::System::Int32 X; // 0x0
		::System::Int32 Y; // 0x0
		::System::Int32 constraintIndex; // 0x28

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_SETFRAME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_PathConstraintIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_FrameEntries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_GET_FRAMEENTRIES_OFFSET))(nullptr);
		}

	};
}

