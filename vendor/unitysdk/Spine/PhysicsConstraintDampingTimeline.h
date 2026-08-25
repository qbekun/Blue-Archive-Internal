#pragma once
#include "../unitysdk.h"

namespace Spine { class PhysicsConstraint; }
namespace Spine { class PhysicsConstraintData; }

#define SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_GET_OFFSET UNITYSDK_OFFSET(0x959AB90)
#define SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_GLOBAL_OFFSET UNITYSDK_OFFSET(0x959ABB0)
#define SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_SET_OFFSET UNITYSDK_OFFSET(0x959ABD0)
#define SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x959ABF0)
#define SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_SETUP_OFFSET UNITYSDK_OFFSET(0x959AC80)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintDampingTimeline_TypeDefinitionIndex = 34986;

	class PhysicsConstraintDampingTimeline : public Il2CppObject
	{
	public:
		::System::Single Get(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_GET_OFFSET))(arg, nullptr);
		}

		::System::Boolean Global(::Spine::PhysicsConstraintData* arg)
		{
			return (return (::System::Boolean(*)(::Spine::PhysicsConstraintData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_GLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::Spine::PhysicsConstraint* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::PhysicsConstraint*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Setup(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDAMPINGTIMELINE_SETUP_OFFSET))(arg, nullptr);
		}

	};
}

