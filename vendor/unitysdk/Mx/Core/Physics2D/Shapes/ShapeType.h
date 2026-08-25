#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Shapes { class ShapeType; }

namespace MX::Core::Physics2D::Shapes
{
	inline static constexpr unsigned int ShapeType_TypeDefinitionIndex = 12808;

	class ShapeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::Physics2D::Shapes::ShapeType* None; // 0x0
		::MX::Core::Physics2D::Shapes::ShapeType* Circle; // 0x0
		::MX::Core::Physics2D::Shapes::ShapeType* Donut; // 0x0
		::MX::Core::Physics2D::Shapes::ShapeType* Fan; // 0x0
		::MX::Core::Physics2D::Shapes::ShapeType* LineSegment; // 0x0
		::MX::Core::Physics2D::Shapes::ShapeType* OBB; // 0x0

	};
}

