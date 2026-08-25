#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq::JsonPath { class QueryOperator; }

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int QueryOperator_TypeDefinitionIndex = 32072;

	class QueryOperator : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* None; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* Equals; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* NotEquals; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* Exists; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* LessThan; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* LessThanOrEquals; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* GreaterThan; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* GreaterThanOrEquals; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* And; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* Or; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* RegexEquals; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* StrictEquals; // 0x0
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* StrictNotEquals; // 0x0

	};
}

