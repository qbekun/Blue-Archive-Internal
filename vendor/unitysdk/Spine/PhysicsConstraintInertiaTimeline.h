#pragma once
#include "../unitysdk.h"

namespace Spine { class PhysicsConstraintData; }
namespace Spine { class PhysicsConstraint; }

#define SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x959A950)
#define SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_GLOBAL_OFFSET UNITYSDK_OFFSET(0x959A9E0)
#define SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_SETUP_OFFSET UNITYSDK_OFFSET(0x959AA00)
#define SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_GET_OFFSET UNITYSDK_OFFSET(0x959AA30)
#define SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_SET_OFFSET UNITYSDK_OFFSET(0x959AA50)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintInertiaTimeline_TypeDefinitionIndex = 34984;

	class PhysicsConstraintInertiaTimeline : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Global(::Spine::PhysicsConstraintData* arg)
		{
			return (return (::System::Boolean(*)(::Spine::PhysicsConstraintData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_GLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Single Setup(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Single Get(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::Spine::PhysicsConstraint* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::PhysicsConstraint*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_SET_OFFSET))(arg, arg, nullptr);
		}

	};
}

