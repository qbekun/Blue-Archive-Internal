#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class ParseResult; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ParseResult_TypeDefinitionIndex = 31818;

	class ParseResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Utilities::ParseResult* None; // 0x0
		::Newtonsoft::Json::Utilities::ParseResult* Success; // 0x0
		::Newtonsoft::Json::Utilities::ParseResult* Overflow; // 0x0
		::Newtonsoft::Json::Utilities::ParseResult* Invalid; // 0x0

	};
}

