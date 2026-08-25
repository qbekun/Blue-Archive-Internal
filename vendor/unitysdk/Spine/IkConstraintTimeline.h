#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_IKCONSTRAINTTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9598BE0)
#define SPINE_IKCONSTRAINTTIMELINE_GET_IKCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x9598CF0)
#define SPINE_IKCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x9598D00)
#define SPINE_IKCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x9598D10)
#define SPINE_IKCONSTRAINTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x9599130)

namespace Spine
{
	inline static constexpr unsigned int IkConstraintTimeline_TypeDefinitionIndex = 34978;

	class IkConstraintTimeline : public Il2CppObject
	{
	public:
		::System::Int32 ENTRIES; // 0x0
		::System::Int32 MIX; // 0x0
		::System::Int32 SOFTNESS; // 0x0
		::System::Int32 BEND_DIRECTION; // 0x0
		::System::Int32 COMPRESS; // 0x0
		::System::Int32 STRETCH; // 0x0
		::System::Int32 constraintIndex; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_IkConstraintIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_GET_IKCONSTRAINTINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_FrameEntries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_SETFRAME_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

