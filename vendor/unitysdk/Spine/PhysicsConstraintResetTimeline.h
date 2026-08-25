#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }

#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x959B150)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x959B230)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x959B430)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x959B460)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x959B480)
#define SPINE_PHYSICSCONSTRAINTRESETTIMELINE_GET_PHYSICSCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x959B4F0)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintResetTimeline_TypeDefinitionIndex = 34991;

	class PhysicsConstraintResetTimeline : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* propertyIds; // 0x0
		::System::Int32 constraintIndex; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetFrame(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_SETFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_FrameCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_GET_FRAMECOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_PhysicsConstraintIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTRESETTIMELINE_GET_PHYSICSCONSTRAINTINDEX_OFFSET))(nullptr);
		}

	};
}

