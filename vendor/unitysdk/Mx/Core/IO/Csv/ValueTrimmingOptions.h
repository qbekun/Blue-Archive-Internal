#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::IO::Csv { class ValueTrimmingOptions; }

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int ValueTrimmingOptions_TypeDefinitionIndex = 12853;

	class ValueTrimmingOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::IO::Csv::ValueTrimmingOptions* None; // 0x0
		::MX::Core::IO::Csv::ValueTrimmingOptions* UnquotedOnly; // 0x0
		::MX::Core::IO::Csv::ValueTrimmingOptions* QuotedOnly; // 0x0
		::MX::Core::IO::Csv::ValueTrimmingOptions* All; // 0x0

	};
}

