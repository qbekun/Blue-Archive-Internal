#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Core::Physics2D::Shapes { class ShapeDefinition; }
namespace UnityEngine { class Vector2; }

#define MX_CORE_PHYSICS2D_SHAPES_SHAPEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x10236E0)

namespace MX::Core::Physics2D::Shapes
{
	inline static constexpr unsigned int ShapeFactory_TypeDefinitionIndex = 12807;

	class ShapeFactory : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Shapes::Shape* Create(::MX::Core::Physics2D::Shapes::ShapeDefinition* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::System::Single arg4)
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::MX::Core::Physics2D::Shapes::ShapeDefinition*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_SHAPES_SHAPEFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

