#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class ShapeDefinition; }

#define MX_CORE_PHYSICS2D_BODIES_BODYDEFINITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1026C00)

namespace MX::Core::Physics2D::Bodies
{
	inline static constexpr unsigned int BodyDefinition_TypeDefinitionIndex = 12810;

	class BodyDefinition : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* Position; // 0x10
		::UnityEngine::Vector2* Heading; // 0x18
		::System::Single MaxSpeed; // 0x20
		::System::Single MaxAngularSpeed; // 0x24
		::MX::Core::Physics2D::Shapes::ShapeDefinition* ShapeDefinition; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODYDEFINITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

