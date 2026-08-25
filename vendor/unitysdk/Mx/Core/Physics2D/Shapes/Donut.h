#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class Fan; }
namespace MX::Core::Physics2D::Shapes { class Donut; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class Shape; }

#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x101ACA0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0x101ACF0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x101AD00)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x101AD70)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x101ADA0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_OUTERRADIUS_OFFSET UNITYSDK_OFFSET(0x101AE00)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_INNERRADIUS_OFFSET UNITYSDK_OFFSET(0x101AE20)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x101AE40)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x101AEA0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x101AF60)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x101AFA0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x101AE70)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x101AF00)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_STARTANGLEINRADIAN_OFFSET UNITYSDK_OFFSET(0x101B010)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_SWEEPANGLEINRADIAN_OFFSET UNITYSDK_OFFSET(0x101B030)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_SWEEPANGLEINRADIAN_OFFSET UNITYSDK_OFFSET(0x101B050)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x101B100)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x101B130)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x101B4B0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_COLLIDE_OFFSET UNITYSDK_OFFSET(0x101B820)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_CONTAINS_OFFSET UNITYSDK_OFFSET(0x101BF90)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_CLONE_OFFSET UNITYSDK_OFFSET(0x101BFF0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x101C0D0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x101C1A0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_EQUALS_OFFSET UNITYSDK_OFFSET(0x101C210)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_EQUALS_OFFSET UNITYSDK_OFFSET(0x101C140)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x101C510)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x101C5B0)
#define MX_CORE_PHYSICS2D_SHAPES_DONUT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x101C8A0)

namespace MX::Core::Physics2D::Shapes
{
	inline static constexpr unsigned int Donut_TypeDefinitionIndex = 12801;

	class Donut : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Shapes::Fan* OuterFan; // 0x10
		::MX::Core::Physics2D::Shapes::Fan* InnerFan; // 0x18
		::MX::Core::Physics2D::Shapes::Donut* _Empty_k__BackingField; // 0x0

		::MX::Core::Physics2D::Shapes::Donut* get_Empty()
		{
			return ((::MX::Core::Physics2D::Shapes::Donut*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_EMPTY_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::ShapeType* get_ShapeType()
		{
			return ((::MX::Core::Physics2D::Shapes::ShapeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_SHAPETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Size()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_SIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Center()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_Center(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Single get_OuterRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_OUTERRADIUS_OFFSET))(nullptr);
		}

		::System::Single get_InnerRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_INNERRADIUS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Right()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Right(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_Direction(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Single get_StartAngleInRadian()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_STARTANGLEINRADIAN_OFFSET))(nullptr);
		}

		::System::Single get_SweepAngleInRadian()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GET_SWEEPANGLEINRADIAN_OFFSET))(nullptr);
		}

		::System::Void set_SweepAngleInRadian(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_SET_SWEEPANGLEINRADIAN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Int32 arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean Collide(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_COLLIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_CONTAINS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* Clone()
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Physics2D::Shapes::Donut* arg, ::MX::Core::Physics2D::Shapes::Donut* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Donut*, ::MX::Core::Physics2D::Shapes::Donut*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Physics2D::Shapes::Donut* arg, ::MX::Core::Physics2D::Shapes::Donut* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Donut*, ::MX::Core::Physics2D::Shapes::Donut*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Core::Physics2D::Shapes::Donut* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Donut*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_DONUT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

