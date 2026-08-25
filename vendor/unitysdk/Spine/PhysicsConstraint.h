#pragma once
#include "../unitysdk.h"

namespace Spine { class PhysicsConstraintData; }
namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace Spine { class PhysicsConstraint; }

#define SPINE_PHYSICSCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95B2AD0)
#define SPINE_PHYSICSCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95B2C50)
#define SPINE_PHYSICSCONSTRAINT_RESET_OFFSET UNITYSDK_OFFSET(0x95B2CC0)
#define SPINE_PHYSICSCONSTRAINT_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x95B2D10)
#define SPINE_PHYSICSCONSTRAINT_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x95B2D70)
#define SPINE_PHYSICSCONSTRAINT_ROTATE_OFFSET UNITYSDK_OFFSET(0x95B2D90)
#define SPINE_PHYSICSCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x95B2E80)
#define SPINE_PHYSICSCONSTRAINT_GET_BONE_OFFSET UNITYSDK_OFFSET(0x95B3D80)
#define SPINE_PHYSICSCONSTRAINT_SET_BONE_OFFSET UNITYSDK_OFFSET(0x95B3D90)
#define SPINE_PHYSICSCONSTRAINT_GET_INERTIA_OFFSET UNITYSDK_OFFSET(0x95B3DA0)
#define SPINE_PHYSICSCONSTRAINT_SET_INERTIA_OFFSET UNITYSDK_OFFSET(0x95B3DB0)
#define SPINE_PHYSICSCONSTRAINT_GET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x95B3DC0)
#define SPINE_PHYSICSCONSTRAINT_SET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x95B3DD0)
#define SPINE_PHYSICSCONSTRAINT_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x95B3DE0)
#define SPINE_PHYSICSCONSTRAINT_SET_DAMPING_OFFSET UNITYSDK_OFFSET(0x95B3DF0)
#define SPINE_PHYSICSCONSTRAINT_GET_MASSINVERSE_OFFSET UNITYSDK_OFFSET(0x95B3E00)
#define SPINE_PHYSICSCONSTRAINT_SET_MASSINVERSE_OFFSET UNITYSDK_OFFSET(0x95B3E10)
#define SPINE_PHYSICSCONSTRAINT_GET_WIND_OFFSET UNITYSDK_OFFSET(0x95B3E20)
#define SPINE_PHYSICSCONSTRAINT_SET_WIND_OFFSET UNITYSDK_OFFSET(0x95B3E30)
#define SPINE_PHYSICSCONSTRAINT_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x95B3E40)
#define SPINE_PHYSICSCONSTRAINT_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x95B3E50)
#define SPINE_PHYSICSCONSTRAINT_GET_MIX_OFFSET UNITYSDK_OFFSET(0x95B3E60)
#define SPINE_PHYSICSCONSTRAINT_SET_MIX_OFFSET UNITYSDK_OFFSET(0x95B3E70)
#define SPINE_PHYSICSCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x95B3E80)
#define SPINE_PHYSICSCONSTRAINT_GETDATA_OFFSET UNITYSDK_OFFSET(0x95B3E90)
#define SPINE_PHYSICSCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95B3EA0)
#define SPINE_PHYSICSCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95B3EB0)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraint_TypeDefinitionIndex = 35051;

	class PhysicsConstraint : public Il2CppObject
	{
	public:
		::Spine::PhysicsConstraintData* data; // 0x10
		::Spine::Bone* bone; // 0x18
		::System::Single inertia; // 0x20
		::System::Single strength; // 0x24
		::System::Single damping; // 0x28
		::System::Single massInverse; // 0x2C
		::System::Single wind; // 0x30
		::System::Single gravity; // 0x34
		::System::Single mix; // 0x38
		::System::Boolean reset; // 0x3C
		::System::Single ux; // 0x40
		::System::Single uy; // 0x44
		::System::Single cx; // 0x48
		::System::Single cy; // 0x4C
		::System::Single tx; // 0x50
		::System::Single ty; // 0x54
		::System::Single xOffset; // 0x58
		::System::Single xVelocity; // 0x5C
		::System::Single yOffset; // 0x60
		::System::Single yVelocity; // 0x64
		::System::Single rotateOffset; // 0x68
		::System::Single rotateVelocity; // 0x6C
		::System::Single scaleOffset; // 0x70
		::System::Single scaleVelocity; // 0x74
		::System::Boolean active; // 0x78
		::Spine::Skeleton* skeleton; // 0x80
		::System::Single remaining; // 0x88
		::System::Single lastTime; // 0x8C

		::System::Void .ctor(::Spine::PhysicsConstraintData* arg, ::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::PhysicsConstraintData*, ::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Spine::PhysicsConstraint* arg, ::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::PhysicsConstraint*, ::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_RESET_OFFSET))(nullptr);
		}

		::System::Void SetToSetupPose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SETTOSETUPPOSE_OFFSET))(nullptr);
		}

		::System::Void Translate(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_TRANSLATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Rotate(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_ROTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(Physics* arg)
		{
			((::System::Void(*)(Physics*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_UPDATE_OFFSET))(arg, nullptr);
		}

		::Spine::Bone* get_Bone()
		{
			return (return (::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_BONE_OFFSET))(nullptr);
		}

		::System::Void set_Bone(::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SET_BONE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Inertia()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_INERTIA_OFFSET))(nullptr);
		}

		::System::Void set_Inertia(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SET_INERTIA_OFFSET))(arg, nullptr);
		}

		::System::Single get_Strength()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_STRENGTH_OFFSET))(nullptr);
		}

		::System::Void set_Strength(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SET_STRENGTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_Damping()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_DAMPING_OFFSET))(nullptr);
		}

		::System::Void set_Damping(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SET_DAMPING_OFFSET))(arg, nullptr);
		}

		::System::Single get_MassInverse()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_MASSINVERSE_OFFSET))(nullptr);
		}

		::System::Void set_MassInverse(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SET_MASSINVERSE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Wind()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_WIND_OFFSET))(nullptr);
		}

		::System::Void set_Wind(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SET_WIND_OFFSET))(arg, nullptr);
		}

		::System::Single get_Gravity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_GRAVITY_OFFSET))(nullptr);
		}

		::System::Void set_Gravity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SET_GRAVITY_OFFSET))(arg, nullptr);
		}

		::System::Single get_Mix()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_MIX_OFFSET))(nullptr);
		}

		::System::Void set_Mix(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SET_MIX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_ACTIVE_OFFSET))(nullptr);
		}

		::Spine::PhysicsConstraintData* getData()
		{
			return (return (::Spine::PhysicsConstraintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GETDATA_OFFSET))(nullptr);
		}

		::Spine::PhysicsConstraintData* get_Data()
		{
			return (return (::Spine::PhysicsConstraintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

