#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq::JsonPath { class QueryOperator; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9527840)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x9527860)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int QueryExpression_TypeDefinitionIndex = 32073;

	class QueryExpression : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JsonPath::QueryOperator* Operator; // 0x10

		::System::Void .ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JsonPath::QueryOperator*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMatch(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_ISMATCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsMatch(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYEXPRESSION_ISMATCH_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

