#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions::Domain { class ValueType; }

namespace MX::Core::Expressions::Domain
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 12897;

	class ValueType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::Expressions::Domain::ValueType* Integer; // 0x0
		::MX::Core::Expressions::Domain::ValueType* String; // 0x0
		::MX::Core::Expressions::Domain::ValueType* DateTime; // 0x0
		::MX::Core::Expressions::Domain::ValueType* Float; // 0x0
		::MX::Core::Expressions::Domain::ValueType* Boolean; // 0x0

	};
}

