#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::IO::Csv { class MissingFieldAction; }

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int MissingFieldAction_TypeDefinitionIndex = 12851;

	class MissingFieldAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::IO::Csv::MissingFieldAction* ParseError; // 0x0
		::MX::Core::IO::Csv::MissingFieldAction* ReplaceByEmpty; // 0x0
		::MX::Core::IO::Csv::MissingFieldAction* ReplaceByNull; // 0x0

	};
}

