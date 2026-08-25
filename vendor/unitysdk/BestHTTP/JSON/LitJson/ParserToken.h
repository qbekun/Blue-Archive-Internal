#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class ParserToken; }

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int ParserToken_TypeDefinitionIndex = 23328;

	class ParserToken : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::JSON::LitJson::ParserToken* None; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* Number; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* True; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* False; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* Null; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* CharSeq; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* Char; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* Text; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* Object; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* ObjectPrime; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* Pair; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* PairRest; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* Array; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* ArrayPrime; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* Value; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* ValueRest; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* String; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* End; // 0x0
		::BestHTTP::JSON::LitJson::ParserToken* Epsilon; // 0x0

	};
}

