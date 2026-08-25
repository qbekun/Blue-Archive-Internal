#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Physics2D { class Direction; }
namespace UnityEngine { class Vector2; }

#define MX_CORE_PHYSICS2D_DIRECTION_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x10180C0)
#define MX_CORE_PHYSICS2D_DIRECTION_SET_ANGLE_OFFSET UNITYSDK_OFFSET(0x10180D0)
#define MX_CORE_PHYSICS2D_DIRECTION_GET_HEADING_OFFSET UNITYSDK_OFFSET(0x1018190)
#define MX_CORE_PHYSICS2D_DIRECTION_SET_HEADING_OFFSET UNITYSDK_OFFSET(0x10183A0)
#define MX_CORE_PHYSICS2D_DIRECTION_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x1018520)
#define MX_CORE_PHYSICS2D_DIRECTION_SET_DEGREE_OFFSET UNITYSDK_OFFSET(0x10187C0)
#define MX_CORE_PHYSICS2D_DIRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1018840)
#define MX_CORE_PHYSICS2D_DIRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10188A0)
#define MX_CORE_PHYSICS2D_DIRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1018940)
#define MX_CORE_PHYSICS2D_DIRECTION_ROTATE_OFFSET UNITYSDK_OFFSET(0x1018A70)
#define MX_CORE_PHYSICS2D_DIRECTION_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1018AD0)
#define MX_CORE_PHYSICS2D_DIRECTION_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1018BD0)
#define MX_CORE_PHYSICS2D_DIRECTION_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1018C20)
#define MX_CORE_PHYSICS2D_DIRECTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1018D30)
#define MX_CORE_PHYSICS2D_DIRECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1018F10)
#define MX_CORE_PHYSICS2D_DIRECTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1018F70)
#define MX_CORE_PHYSICS2D_DIRECTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1019090)
#define MX_CORE_PHYSICS2D_DIRECTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1018E60)
#define MX_CORE_PHYSICS2D_DIRECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1019210)

namespace MX::Core::Physics2D
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 12798;

	class Direction : public Il2CppObject
	{
	public:
		::System::Single angle; // 0x10
		::MX::Core::Physics2D::Direction* default; // 0x0

		::System::Single get_Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_GET_ANGLE_OFFSET))(nullptr);
		}

		::System::Void set_Angle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_SET_ANGLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Heading()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_GET_HEADING_OFFSET))(nullptr);
		}

		::System::Void set_Heading(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_SET_HEADING_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Degree()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_GET_DEGREE_OFFSET))(nullptr);
		}

		::System::Void set_Degree(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_SET_DEGREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Rotate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_ROTATE_OFFSET))(arg, nullptr);
		}

		::System::Single Distance(::MX::Core::Physics2D::Direction* arg)
		{
			return ((::System::Single(*)(::MX::Core::Physics2D::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_DISTANCE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Direction* get_Default()
		{
			return ((::MX::Core::Physics2D::Direction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Double Distance(::MX::Core::Physics2D::Direction* arg, ::MX::Core::Physics2D::Direction* arg2)
		{
			return ((::System::Double(*)(::MX::Core::Physics2D::Direction*, ::MX::Core::Physics2D::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Physics2D::Direction* arg, ::MX::Core::Physics2D::Direction* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Direction*, ::MX::Core::Physics2D::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Physics2D::Direction* arg, ::MX::Core::Physics2D::Direction* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Direction*, ::MX::Core::Physics2D::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Core::Physics2D::Direction* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_DIRECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

