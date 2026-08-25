#pragma once
#include "../unitysdk.h"

namespace Spine { class PhysicsConstraintData; }
namespace Spine { class PhysicsConstraint; }

#define SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_GLOBAL_OFFSET UNITYSDK_OFFSET(0x959AA70)
#define SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x959AA90)
#define SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_SETUP_OFFSET UNITYSDK_OFFSET(0x959AB20)
#define SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_GET_OFFSET UNITYSDK_OFFSET(0x959AB50)
#define SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_SET_OFFSET UNITYSDK_OFFSET(0x959AB70)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintStrengthTimeline_TypeDefinitionIndex = 34985;

	class PhysicsConstraintStrengthTimeline : public Il2CppObject
	{
	public:
		::System::Boolean Global(::Spine::PhysicsConstraintData* arg)
		{
			return (return (::System::Boolean(*)(::Spine::PhysicsConstraintData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_GLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Setup(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Single Get(::Spine::PhysicsConstraint* arg)
		{
			return (return (::System::Single(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::Spine::PhysicsConstraint* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::PhysicsConstraint*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTSTRENGTHTIMELINE_SET_OFFSET))(arg, arg, nullptr);
		}

	};
}

