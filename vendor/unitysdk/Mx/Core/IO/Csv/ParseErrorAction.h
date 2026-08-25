#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::IO::Csv { class ParseErrorAction; }

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int ParseErrorAction_TypeDefinitionIndex = 12852;

	class ParseErrorAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::IO::Csv::ParseErrorAction* RaiseEvent; // 0x0
		::MX::Core::IO::Csv::ParseErrorAction* AdvanceToNextLine; // 0x0
		::MX::Core::IO::Csv::ParseErrorAction* ThrowException; // 0x0

	};
}

