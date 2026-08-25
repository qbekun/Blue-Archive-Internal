#pragma once
#include "../unitysdk.h"

namespace Spine { class BoneData; }

#define SPINE_PHYSICSCONSTRAINTDATA_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x95B3ED0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_STEP_OFFSET UNITYSDK_OFFSET(0x95B3EE0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_INERTIA_OFFSET UNITYSDK_OFFSET(0x95B3EF0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x95B3F00)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_STEP_OFFSET UNITYSDK_OFFSET(0x95B3F10)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_WIND_OFFSET UNITYSDK_OFFSET(0x95B3F20)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_MIXGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B3F30)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_MASSINVERSE_OFFSET UNITYSDK_OFFSET(0x95B3F40)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_WINDGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B3F50)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_MIX_OFFSET UNITYSDK_OFFSET(0x95B3F60)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x95B3F70)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_LIMIT_OFFSET UNITYSDK_OFFSET(0x95B3F80)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x95B3F90)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x95B3FA0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_MIXGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B3FB0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x95B3FC0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_WIND_OFFSET UNITYSDK_OFFSET(0x95B3FD0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x95B3FE0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_STRENGTHGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B3FF0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_INERTIA_OFFSET UNITYSDK_OFFSET(0x95B4000)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_INERTIAGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B4010)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x95B4020)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_DAMPING_OFFSET UNITYSDK_OFFSET(0x95B4030)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_DAMPINGGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B4040)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x95B4050)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_WINDGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B4060)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_MIX_OFFSET UNITYSDK_OFFSET(0x95B4070)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_MASSGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B4080)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_INERTIAGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B4090)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_ROTATE_OFFSET UNITYSDK_OFFSET(0x95B40A0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_ROTATE_OFFSET UNITYSDK_OFFSET(0x95B40B0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_GRAVITYGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B40C0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_DAMPINGGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B40D0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_BONE_OFFSET UNITYSDK_OFFSET(0x95B40E0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x95B40F0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x95B4100)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x95B4110)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_MASSINVERSE_OFFSET UNITYSDK_OFFSET(0x95B4120)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x95B4130)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_STRENGTHGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B4140)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x95B4150)
#define SPINE_PHYSICSCONSTRAINTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x95B4160)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_MASSGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B4170)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_GRAVITYGLOBAL_OFFSET UNITYSDK_OFFSET(0x95B4180)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintData_TypeDefinitionIndex = 35052;

	class PhysicsConstraintData : public Il2CppObject
	{
	public:
		::Spine::BoneData* bone; // 0x20
		::System::Single x; // 0x28
		::System::Single y; // 0x2C
		::System::Single rotate; // 0x30
		::System::Single scaleX; // 0x34
		::System::Single shearX; // 0x38
		::System::Single limit; // 0x3C
		::System::Single step; // 0x40
		::System::Single inertia; // 0x44
		::System::Single strength; // 0x48
		::System::Single damping; // 0x4C
		::System::Single massInverse; // 0x50
		::System::Single wind; // 0x54
		::System::Single gravity; // 0x58
		::System::Single mix; // 0x5C
		::System::Boolean inertiaGlobal; // 0x60
		::System::Boolean strengthGlobal; // 0x61
		::System::Boolean dampingGlobal; // 0x62
		::System::Boolean massGlobal; // 0x63
		::System::Boolean windGlobal; // 0x64
		::System::Boolean gravityGlobal; // 0x65
		::System::Boolean mixGlobal; // 0x66

		::System::Void set_Gravity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_GRAVITY_OFFSET))(arg, nullptr);
		}

		::System::Single get_Step()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_STEP_OFFSET))(nullptr);
		}

		::System::Void set_Inertia(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_INERTIA_OFFSET))(arg, nullptr);
		}

		::System::Single get_Y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_Step(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_STEP_OFFSET))(arg, nullptr);
		}

		::System::Void set_Wind(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_WIND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MixGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_MIXGLOBAL_OFFSET))(nullptr);
		}

		::System::Single get_MassInverse()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_MASSINVERSE_OFFSET))(nullptr);
		}

		::System::Void set_WindGlobal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_WINDGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_Mix()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_MIX_OFFSET))(nullptr);
		}

		::System::Single get_ShearX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_SHEARX_OFFSET))(nullptr);
		}

		::System::Void set_Limit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_LIMIT_OFFSET))(arg, nullptr);
		}

		::System::Single get_Gravity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_GRAVITY_OFFSET))(nullptr);
		}

		::System::Single get_Strength()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_STRENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MixGlobal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_MIXGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_Damping()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_DAMPING_OFFSET))(nullptr);
		}

		::System::Single get_Wind()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_WIND_OFFSET))(nullptr);
		}

		::System::Void set_ScaleX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_SCALEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StrengthGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_STRENGTHGLOBAL_OFFSET))(nullptr);
		}

		::System::Single get_Inertia()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_INERTIA_OFFSET))(nullptr);
		}

		::System::Boolean get_InertiaGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_INERTIAGLOBAL_OFFSET))(nullptr);
		}

		::System::Void set_ShearX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_SHEARX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Damping(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_DAMPING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DampingGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_DAMPINGGLOBAL_OFFSET))(nullptr);
		}

		::System::Single get_ScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_SCALEX_OFFSET))(nullptr);
		}

		::System::Boolean get_WindGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_WINDGLOBAL_OFFSET))(nullptr);
		}

		::System::Void set_Mix(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_MIX_OFFSET))(arg, nullptr);
		}

		::System::Void set_MassGlobal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_MASSGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_InertiaGlobal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_INERTIAGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_Rotate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_ROTATE_OFFSET))(nullptr);
		}

		::System::Void set_Rotate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_ROTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_GravityGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_GRAVITYGLOBAL_OFFSET))(nullptr);
		}

		::System::Void set_DampingGlobal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_DAMPINGGLOBAL_OFFSET))(arg, nullptr);
		}

		::Spine::BoneData* get_Bone()
		{
			return (return (::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_BONE_OFFSET))(nullptr);
		}

		::System::Void set_X(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Void set_Y(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Void set_Strength(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_STRENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_MassInverse(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_MASSINVERSE_OFFSET))(arg, nullptr);
		}

		::System::Single get_X()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_StrengthGlobal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_STRENGTHGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_Limit()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_LIMIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean get_MassGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_MASSGLOBAL_OFFSET))(nullptr);
		}

		::System::Void set_GravityGlobal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_GRAVITYGLOBAL_OFFSET))(arg, nullptr);
		}

	};
}

