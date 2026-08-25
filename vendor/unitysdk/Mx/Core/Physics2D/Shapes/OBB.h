#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class OBB; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class Circle; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Core::Physics2D::Shapes { class LineSegment; }
namespace MX::Core::Physics2D::Shapes { class Fan; }
namespace UnityEngine { class Rect; }

#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x10209E0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0x1020A30)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1020A40)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1020AA0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1020AB0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1020AE0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1020AF0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_CIRCUMCIRCLERADIUS_OFFSET UNITYSDK_OFFSET(0x1020B00)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_SET_CIRCUMCIRCLERADIUS_OFFSET UNITYSDK_OFFSET(0x1020B10)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_HALFWIDTHS_OFFSET UNITYSDK_OFFSET(0x1020B20)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_RIGHTANGLE_OFFSET UNITYSDK_OFFSET(0x1020B50)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1020B60)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1020B90)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1020E30)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1020E60)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_CIRCUMCIRCLE_OFFSET UNITYSDK_OFFSET(0x1020F20)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_SET_CIRCUMCIRCLE_OFFSET UNITYSDK_OFFSET(0x1020F30)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_TOPLEFT_OFFSET UNITYSDK_OFFSET(0x101DC90)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_TOPRIGHT_OFFSET UNITYSDK_OFFSET(0x101DCF0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_BOTTOMLEFT_OFFSET UNITYSDK_OFFSET(0x101DD50)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GET_BOTTOMRIGHT_OFFSET UNITYSDK_OFFSET(0x101DDC0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1020F40)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1021050)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_SETANGLE_OFFSET UNITYSDK_OFFSET(0x1020C60)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1021260)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_COLLIDE_OFFSET UNITYSDK_OFFSET(0x10216A0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1019C10)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x101F4A0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x10218F0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1021810)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1021860)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1021FB0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_TOUNITYRECT_OFFSET UNITYSDK_OFFSET(0x10228D0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1022A10)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1022AB0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1022D10)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1022D50)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1022AE0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1022DF0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1022EA0)
#define MX_CORE_PHYSICS2D_SHAPES_OBB_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1023200)

namespace MX::Core::Physics2D::Shapes
{
	inline static constexpr unsigned int OBB_TypeDefinitionIndex = 12805;

	class OBB : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Shapes::OBB* _Empty_k__BackingField; // 0x0
		::UnityEngine::Vector2* center; // 0x10
		::System::Single _Width_k__BackingField; // 0x18
		::System::Single _Height_k__BackingField; // 0x1C
		::System::Single _CircumcircleRadius_k__BackingField; // 0x20
		::System::Single rightAngleInRadian; // 0x24
		::MX::Core::Physics2D::Shapes::Circle* _CircumCircle_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* axis; // 0x30

		::MX::Core::Physics2D::Shapes::OBB* get_Empty()
		{
			return ((::MX::Core::Physics2D::Shapes::OBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_EMPTY_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::ShapeType* get_ShapeType()
		{
			return ((::MX::Core::Physics2D::Shapes::ShapeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_SHAPETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Size()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_SIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Center()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_Center(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_CircumcircleRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_CIRCUMCIRCLERADIUS_OFFSET))(nullptr);
		}

		::System::Void set_CircumcircleRadius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_SET_CIRCUMCIRCLERADIUS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_HalfWidths()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_HALFWIDTHS_OFFSET))(nullptr);
		}

		::System::Single get_RightAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_RIGHTANGLE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Right()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Right(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Circle* get_CircumCircle()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_CIRCUMCIRCLE_OFFSET))(nullptr);
		}

		::System::Void set_CircumCircle(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_SET_CIRCUMCIRCLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_TopLeft()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_TOPLEFT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_TopRight()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_TOPRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_BottomLeft()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_BOTTOMLEFT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_BottomRight()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GET_BOTTOMRIGHT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_SETANGLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Collide(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_COLLIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::LineSegment* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::LineSegment* arg, ::System::Object[]&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::OBB* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::Fan* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Fan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::OBB* arg, ::MX::Core::Physics2D::Shapes::OBB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::OBB*, ::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_INTERSECTS_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Rect* ToUnityRect()
		{
			return ((::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_TOUNITYRECT_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* Clone()
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Physics2D::Shapes::OBB* arg, ::MX::Core::Physics2D::Shapes::OBB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::OBB*, ::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Physics2D::Shapes::OBB* arg, ::MX::Core::Physics2D::Shapes::OBB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::OBB*, ::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Core::Physics2D::Shapes::OBB* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_OBB_.CCTOR_OFFSET))(nullptr);
		}

	};
}

