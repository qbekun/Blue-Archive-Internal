#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class Circle; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Core::Physics2D::Shapes { class OBB; }
namespace MX::Core::Physics2D::Shapes { class LineSegment; }
namespace MX::Core::Physics2D::Shapes { class Fan; }

#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x10192A0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x10192F0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0x1019340)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1019350)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x10193B0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x10193C0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x10193D0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x10193E0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x10193F0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1019410)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1019450)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1019460)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10194F0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1019540)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x10196C0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_COLLIDE_OFFSET UNITYSDK_OFFSET(0x1019920)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1019A60)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1019BB0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1019B80)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1019BE0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_CLONE_OFFSET UNITYSDK_OFFSET(0x101A420)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_SWEPTCIRCLE_OFFSET UNITYSDK_OFFSET(0x101A4F0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x101A660)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x101A810)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x101A850)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x101A690)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x101A9C0)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x101AA30)
#define MX_CORE_PHYSICS2D_SHAPES_CIRCLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x101AAE0)

namespace MX::Core::Physics2D::Shapes
{
	inline static constexpr unsigned int Circle_TypeDefinitionIndex = 12800;

	class Circle : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Shapes::Circle* _Empty_k__BackingField; // 0x0
		::MX::Core::Physics2D::Shapes::Circle* _Default_k__BackingField; // 0x8
		::UnityEngine::Vector2* _Center_k__BackingField; // 0x10
		::System::Single _Radius_k__BackingField; // 0x18
		::UnityEngine::Vector2* forward; // 0x1C

		::MX::Core::Physics2D::Shapes::Circle* get_Empty()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_EMPTY_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Circle* get_Default()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_DEFAULT_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::ShapeType* get_ShapeType()
		{
			return ((::MX::Core::Physics2D::Shapes::ShapeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_SHAPETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Size()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_SIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Center()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_Center(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Void set_Radius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Right()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Right(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Collide(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_COLLIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::OBB* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::LineSegment* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::Fan* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Fan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* Clone()
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean SweptCircle(::MX::Core::Physics2D::Shapes::Circle* arg, ::MX::Core::Physics2D::Shapes::Circle* arg2, ::MX::Core::Physics2D::Shapes::Circle* arg3, ::MX::Core::Physics2D::Shapes::Circle* arg4)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::MX::Core::Physics2D::Shapes::Circle*, ::MX::Core::Physics2D::Shapes::Circle*, ::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_SWEPTCIRCLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Physics2D::Shapes::Circle* arg, ::MX::Core::Physics2D::Shapes::Circle* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Physics2D::Shapes::Circle* arg, ::MX::Core::Physics2D::Shapes::Circle* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_CIRCLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

