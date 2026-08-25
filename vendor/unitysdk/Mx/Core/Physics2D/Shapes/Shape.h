#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }

#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_COLLIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10194E0)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x101E750)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x101E760)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x101E770)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x101E7B0)

namespace MX::Core::Physics2D::Shapes
{
	inline static constexpr unsigned int Shape_TypeDefinitionIndex = 12803;

	class Shape : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* get_Center()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Boolean Collide(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_COLLIDE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* Clone()
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_CLONE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Size()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_SIZE_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::ShapeType* get_ShapeType()
		{
			return ((::MX::Core::Physics2D::Shapes::ShapeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_SHAPETYPE_OFFSET))(nullptr);
		}

		::System::Void set_Center(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_Right(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_CONTAINS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Right()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPE_GET_RIGHT_OFFSET))(nullptr);
		}

	};
}

