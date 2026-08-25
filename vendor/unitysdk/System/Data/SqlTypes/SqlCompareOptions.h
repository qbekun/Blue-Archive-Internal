#pragma once
#include "../../../unitysdk.h"

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlCompareOptions_TypeDefinitionIndex = 32340;

	class SqlCompareOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::SqlTypes::SqlCompareOptions* None; // 0x0
		::System::Data::SqlTypes::SqlCompareOptions* IgnoreCase; // 0x0
		::System::Data::SqlTypes::SqlCompareOptions* IgnoreNonSpace; // 0x0
		::System::Data::SqlTypes::SqlCompareOptions* IgnoreKanaType; // 0x0
		::System::Data::SqlTypes::SqlCompareOptions* IgnoreWidth; // 0x0
		::System::Data::SqlTypes::SqlCompareOptions* BinarySort; // 0x0
		::System::Data::SqlTypes::SqlCompareOptions* BinarySort2; // 0x0

	};
}

