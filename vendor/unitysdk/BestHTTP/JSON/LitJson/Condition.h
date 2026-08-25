#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class Condition; }

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 23322;

	class Condition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::JSON::LitJson::Condition* InArray; // 0x0
		::BestHTTP::JSON::LitJson::Condition* InObject; // 0x0
		::BestHTTP::JSON::LitJson::Condition* NotAProperty; // 0x0
		::BestHTTP::JSON::LitJson::Condition* Property; // 0x0
		::BestHTTP::JSON::LitJson::Condition* Value; // 0x0

	};
}

