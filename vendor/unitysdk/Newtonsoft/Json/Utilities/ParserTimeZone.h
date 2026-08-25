#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class ParserTimeZone; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ParserTimeZone_TypeDefinitionIndex = 31822;

	class ParserTimeZone : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Utilities::ParserTimeZone* Unspecified; // 0x0
		::Newtonsoft::Json::Utilities::ParserTimeZone* Utc; // 0x0
		::Newtonsoft::Json::Utilities::ParserTimeZone* LocalWestOfUtc; // 0x0
		::Newtonsoft::Json::Utilities::ParserTimeZone* LocalEastOfUtc; // 0x0

	};
}

