#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AreaShapeType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int AreaShapeType_TypeDefinitionIndex = 14271;

	class AreaShapeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::AreaShapeType* Rect; // 0x0
		::MX::Logic::Battles::AreaShapeType* Circle; // 0x0

	};
}

