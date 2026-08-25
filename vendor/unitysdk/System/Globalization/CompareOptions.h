#pragma once
#include "../../unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int CompareOptions_TypeDefinitionIndex = 24951;

	class CompareOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Globalization::CompareOptions* None; // 0x0
		::System::Globalization::CompareOptions* IgnoreCase; // 0x0
		::System::Globalization::CompareOptions* IgnoreNonSpace; // 0x0
		::System::Globalization::CompareOptions* IgnoreSymbols; // 0x0
		::System::Globalization::CompareOptions* IgnoreKanaType; // 0x0
		::System::Globalization::CompareOptions* IgnoreWidth; // 0x0
		::System::Globalization::CompareOptions* OrdinalIgnoreCase; // 0x0
		::System::Globalization::CompareOptions* StringSort; // 0x0
		::System::Globalization::CompareOptions* Ordinal; // 0x0

	};
}

