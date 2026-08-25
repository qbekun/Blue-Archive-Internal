#pragma once
#include "../unitysdk.h"

namespace Spine { class PhysicsConstraint; }
namespace Spine { class Skeleton; }
namespace Spine { class MixBlend; }
namespace Spine { class MixDirection; }
namespace Spine { class PhysicsConstraintData; }
namespace Spine { class Property; }

#define SPINE_PHYSICSCONSTRAINTTIMELINE_SETUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_PHYSICSCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x959A5A0)
#define SPINE_PHYSICSCONSTRAINTTIMELINE_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_PHYSICSCONSTRAINTTIMELINE_GLOBAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_PHYSICSCONSTRAINTTIMELINE_GET_PHYSICSCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x959A8B0)
#define SPINE_PHYSICSCONSTRAINTTIMELINE_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_PHYSICSCONSTRAINTTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x959A8C0)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintTimeline_TypeDefinitionIndex = 34983;

	class PhysicsConstraintTimeline : public Il2CppObject
	{
	public:
		::System::Int32 constraintIndex; // 0x28

		::System::Single Setup(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTTIMELINE_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::Spine::Skeleton* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg, ::Spine::MixBlend* arg, ::Spine::MixDirection* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Single, ::System::Single, Il2CppObject*, ::System::Single, ::Spine::MixBlend*, ::Spine::MixDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTTIMELINE_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Set(::Spine::PhysicsConstraint* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::PhysicsConstraint*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTTIMELINE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Global(::Spine::PhysicsConstraintData* arg)
		{
			return (return (::System::Boolean(*)(::Spine::PhysicsConstraintData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTTIMELINE_GLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PhysicsConstraintIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTTIMELINE_GET_PHYSICSCONSTRAINTINDEX_OFFSET))(nullptr);
		}

		::System::Single Get(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTTIMELINE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Spine::Property* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Spine::Property*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTTIMELINE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

