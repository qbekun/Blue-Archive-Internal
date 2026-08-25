#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_PATHCONSTRAINTSPACINGTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x9599E20)
#define SPINE_PATHCONSTRAINTSPACINGTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x9599E30)
#define SPINE_PATHCONSTRAINTSPACINGTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9599F50)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintSpacingTimeline_TypeDefinitionIndex = 34981;

	class PathConstraintSpacingTimeline : public Il2CppObject
	{
	public:
		::System::Int32 constraintIndex; // 0x28

		::System::Int32 get_PathConstraintIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTSPACINGTIMELINE_GET_PATHCONSTRAINTINDEX_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTSPACINGTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTSPACINGTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

