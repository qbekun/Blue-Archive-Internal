#pragma once
#include "../../unitysdk.h"

namespace Cysharp::Text { class ParserScanResult; }

namespace Cysharp::Text
{
	inline static constexpr unsigned int ParserScanResult_TypeDefinitionIndex = 34676;

	class ParserScanResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Cysharp::Text::ParserScanResult* BraceOpen; // 0x0
		::Cysharp::Text::ParserScanResult* EscapedChar; // 0x0
		::Cysharp::Text::ParserScanResult* NormalChar; // 0x0

	};
}

