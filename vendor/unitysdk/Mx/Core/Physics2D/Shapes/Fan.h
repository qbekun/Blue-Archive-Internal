#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class Fan; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Core::Physics2D::Shapes { class Circle; }
namespace MX::Core::Physics2D::Shapes { class OBB; }

#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x101C960)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0x101C9B0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x101C9C0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x101CA20)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x101CA30)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x101CB20)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x101B810)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x101CB30)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x101CD30)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x101CE70)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x101CF70)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x101CC30)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x101CD40)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_SWEEPANGLEINRADIAN_OFFSET UNITYSDK_OFFSET(0x101CFA0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_SET_SWEEPANGLEINRADIAN_OFFSET UNITYSDK_OFFSET(0x101B0D0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_AXISANGLEINRADIAN_OFFSET UNITYSDK_OFFSET(0x101CF80)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_STARTANGLEINRADIAN_OFFSET UNITYSDK_OFFSET(0x101CFB0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_ARCSTART_OFFSET UNITYSDK_OFFSET(0x101CFC0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_SET_ARCSTART_OFFSET UNITYSDK_OFFSET(0x101CFD0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GET_ARCEND_OFFSET UNITYSDK_OFFSET(0x101CFE0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_SET_ARCEND_OFFSET UNITYSDK_OFFSET(0x101CFF0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x101D000)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x101B340)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x101B750)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_COLLIDE_OFFSET UNITYSDK_OFFSET(0x101D080)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_CONTAINS_OFFSET UNITYSDK_OFFSET(0x101D5A0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x101A150)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x101D170)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x101D400)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_CALCARCPOINTS_OFFSET UNITYSDK_OFFSET(0x101CA40)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_CLONE_OFFSET UNITYSDK_OFFSET(0x101E130)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x101E250)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x101E280)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x101E2C0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x101C2E0)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x101E360)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x101E400)
#define MX_CORE_PHYSICS2D_SHAPES_FAN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x101E660)

namespace MX::Core::Physics2D::Shapes
{
	inline static constexpr unsigned int Fan_TypeDefinitionIndex = 12802;

	class Fan : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Shapes::Fan* _Empty_k__BackingField; // 0x0
		::UnityEngine::Vector2* center; // 0x10
		::System::Single radius; // 0x18
		::System::Single sweepAngle; // 0x1C
		::System::Single startAngle; // 0x20
		::UnityEngine::Vector2* _ArcStart_k__BackingField; // 0x24
		::UnityEngine::Vector2* _ArcEnd_k__BackingField; // 0x2C

		::MX::Core::Physics2D::Shapes::Fan* get_Empty()
		{
			return ((::MX::Core::Physics2D::Shapes::Fan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_EMPTY_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::ShapeType* get_ShapeType()
		{
			return ((::MX::Core::Physics2D::Shapes::ShapeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_SHAPETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Size()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_SIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Center()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_Center(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Void set_Radius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Right()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Right(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_Direction(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Single get_SweepAngleInRadian()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_SWEEPANGLEINRADIAN_OFFSET))(nullptr);
		}

		::System::Void set_SweepAngleInRadian(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_SET_SWEEPANGLEINRADIAN_OFFSET))(arg, nullptr);
		}

		::System::Single get_AxisAngleInRadian()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_AXISANGLEINRADIAN_OFFSET))(nullptr);
		}

		::System::Single get_StartAngleInRadian()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_STARTANGLEINRADIAN_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_ArcStart()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_ARCSTART_OFFSET))(nullptr);
		}

		::System::Void set_ArcStart(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_SET_ARCSTART_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_ArcEnd()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GET_ARCEND_OFFSET))(nullptr);
		}

		::System::Void set_ArcEnd(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_SET_ARCEND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean Collide(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_COLLIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::OBB* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::Fan* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Fan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Void CalcArcPoints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_CALCARCPOINTS_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* Clone()
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Physics2D::Shapes::Fan* arg, ::MX::Core::Physics2D::Shapes::Fan* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Fan*, ::MX::Core::Physics2D::Shapes::Fan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Physics2D::Shapes::Fan* arg, ::MX::Core::Physics2D::Shapes::Fan* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Fan*, ::MX::Core::Physics2D::Shapes::Fan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Core::Physics2D::Shapes::Fan* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Fan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_FAN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

