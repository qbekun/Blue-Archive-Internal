#pragma once
#include "../unitysdk.h"

namespace Spine { class PhysicsConstraint; }
namespace Spine { class PhysicsConstraintData; }

#define SPINE_PHYSICSCONSTRAINTMASSTIMELINE_SET_OFFSET UNITYSDK_OFFSET(0x959ACB0)
#define SPINE_PHYSICSCONSTRAINTMASSTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x959ACE0)
#define SPINE_PHYSICSCONSTRAINTMASSTIMELINE_SETUP_OFFSET UNITYSDK_OFFSET(0x959AD70)
#define SPINE_PHYSICSCONSTRAINTMASSTIMELINE_GET_OFFSET UNITYSDK_OFFSET(0x959ADA0)
#define SPINE_PHYSICSCONSTRAINTMASSTIMELINE_GLOBAL_OFFSET UNITYSDK_OFFSET(0x959ADD0)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintMassTimeline_TypeDefinitionIndex = 34987;

	class PhysicsConstraintMassTimeline : public Il2CppObject
	{
	public:
		::System::Void Set(::Spine::PhysicsConstraint* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::PhysicsConstraint*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTMASSTIMELINE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTMASSTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Setup(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTMASSTIMELINE_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Single Get(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTMASSTIMELINE_GET_OFFSET))(arg, nullptr);
		}

		::System::Boolean Global(::Spine::PhysicsConstraintData* arg)
		{
			return (return (::System::Boolean(*)(::Spine::PhysicsConstraintData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTMASSTIMELINE_GLOBAL_OFFSET))(arg, nullptr);
		}

	};
}

