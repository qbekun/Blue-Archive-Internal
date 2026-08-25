#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_TRANSFORMCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x9599290)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x95992A0)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x95995C0)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x9599A20)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9599A30)
#define SPINE_TRANSFORMCONSTRAINTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x9599B40)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintTimeline_TypeDefinitionIndex = 34979;

	class TransformConstraintTimeline : public Il2CppObject
	{
	public:
		::System::Int32 ENTRIES; // 0x0
		::System::Int32 ROTATE; // 0x0
		::System::Int32 X; // 0x0
		::System::Int32 Y; // 0x0
		::System::Int32 SCALEX; // 0x0
		::System::Int32 SCALEY; // 0x0
		::System::Int32 SHEARY; // 0x0
		::System::Int32 constraintIndex; // 0x28

		::System::Int32 get_TransformConstraintIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_TRANSFORMCONSTRAINTINDEX_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetCurveValue(float&* arg, float&* arg, float&* arg, float&* arg, float&* arg, float&* arg, ::System::Single arg)
		{
			((::System::Void(*)(float&*, float&*, float&*, float&*, float&*, float&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GETCURVEVALUE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_FrameEntries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTTIMELINE_SETFRAME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

