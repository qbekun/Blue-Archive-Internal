#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 32252;

	class ValueType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::ValueType* Unknown; // 0x0
		::System::Data::ValueType* Null; // 0x0
		::System::Data::ValueType* Bool; // 0x0
		::System::Data::ValueType* Numeric; // 0x0
		::System::Data::ValueType* Str; // 0x0
		::System::Data::ValueType* Float; // 0x0
		::System::Data::ValueType* Decimal; // 0x0
		::System::Data::ValueType* Object; // 0x0
		::System::Data::ValueType* Date; // 0x0

	};
}

