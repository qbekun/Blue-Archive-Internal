#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class LineSegment; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Core::Physics2D::Shapes { class Circle; }
namespace MX::Core::Physics2D::Shapes { class OBB; }

#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_INVALID_OFFSET UNITYSDK_OFFSET(0x101E7E0)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0x101E830)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x101E840)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x101E930)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x101E940)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_DEST_OFFSET UNITYSDK_OFFSET(0x101E950)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_SET_DEST_OFFSET UNITYSDK_OFFSET(0x101E960)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_TODEST_OFFSET UNITYSDK_OFFSET(0x101E970)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x101E9A0)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x101E9D0)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x101EA00)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x101EA40)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x101E900)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_LENGTHSQUARED_OFFSET UNITYSDK_OFFSET(0x101EA50)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x101A610)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_DISTANCE_OFFSET UNITYSDK_OFFSET(0x101EB60)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_CONTAINS_OFFSET UNITYSDK_OFFSET(0x101ED60)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_COLLIDE_OFFSET UNITYSDK_OFFSET(0x101EF40)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x1019F30)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x101F070)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x101F040)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x101A640)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x101F9A0)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_DIRECTIONBETWEENLINEANDPOINT_OFFSET UNITYSDK_OFFSET(0x101FDC0)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_ISSINGULARPOINTONLINE_OFFSET UNITYSDK_OFFSET(0x101FE20)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_FINDLINECIRCLEINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x10200E0)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_CLONE_OFFSET UNITYSDK_OFFSET(0x10203D0)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_CLOSESTPOINTONLINE_OFFSET UNITYSDK_OFFSET(0x1020440)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1020520)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x10206F0)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1020730)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1020550)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10207D0)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1020850)
#define MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x10208E0)

namespace MX::Core::Physics2D::Shapes
{
	inline static constexpr unsigned int LineSegment_TypeDefinitionIndex = 12804;

	class LineSegment : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Shapes::LineSegment* _Invalid_k__BackingField; // 0x0
		::UnityEngine::Vector2* _Origin_k__BackingField; // 0x10
		::UnityEngine::Vector2* _Dest_k__BackingField; // 0x18

		::MX::Core::Physics2D::Shapes::LineSegment* get_Invalid()
		{
			return ((::MX::Core::Physics2D::Shapes::LineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_INVALID_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::ShapeType* get_ShapeType()
		{
			return ((::MX::Core::Physics2D::Shapes::ShapeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_SHAPETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Size()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_SIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Origin()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_ORIGIN_OFFSET))(nullptr);
		}

		::System::Void set_Origin(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_SET_ORIGIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Dest()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_DEST_OFFSET))(nullptr);
		}

		::System::Void set_Dest(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_SET_DEST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_ToDest()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_TODEST_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_FORWARD_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Right()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_RIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Center()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_Center(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Single get_LengthSquared()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GET_LENGTHSQUARED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single Distance(::UnityEngine::Vector2* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_DISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Collide(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_COLLIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::Circle* arg, ::System::Object[]&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::OBB* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::LineSegment* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::MX::Core::Physics2D::Shapes::LineSegment* arg, ::UnityEngine::Vector2&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_INTERSECTS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single DirectionBetweenLineAndPoint(::MX::Core::Physics2D::Shapes::LineSegment* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Single(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_DIRECTIONBETWEENLINEANDPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSingularPointOnLine(::MX::Core::Physics2D::Shapes::LineSegment* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_ISSINGULARPOINTONLINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 FindLineCircleIntersections(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			return ((::System::Int32(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_FINDLINECIRCLEINTERSECTIONS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* Clone()
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_CLONE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* ClosestPointOnLine(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_CLOSESTPOINTONLINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::Physics2D::Shapes::LineSegment* arg, ::MX::Core::Physics2D::Shapes::LineSegment* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::Physics2D::Shapes::LineSegment* arg, ::MX::Core::Physics2D::Shapes::LineSegment* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Core::Physics2D::Shapes::LineSegment* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::LineSegment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_LINESEGMENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

