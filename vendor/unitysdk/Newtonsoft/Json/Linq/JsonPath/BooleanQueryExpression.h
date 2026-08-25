#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq::JsonPath { class QueryOperator; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }
namespace Newtonsoft::Json::Linq { class JValue; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9526E90)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9527BE0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x9527DB0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_MATCHTOKENS_OFFSET UNITYSDK_OFFSET(0x9528570)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_REGEXEQUALS_OFFSET UNITYSDK_OFFSET(0x9528740)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_EQUALSWITHSTRINGCOERCION_OFFSET UNITYSDK_OFFSET(0x9528900)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_EQUALSWITHSTRICTMATCH_OFFSET UNITYSDK_OFFSET(0x9528E50)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int BooleanQueryExpression_TypeDefinitionIndex = 32075;

	class BooleanQueryExpression : public Il2CppObject
	{
	public:
		::System::Object* Left; // 0x18
		::System::Object* Right; // 0x20

		::System::Void .ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator* arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JsonPath::QueryOperator*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetResult(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_GETRESULT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsMatch(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_ISMATCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchTokens(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_MATCHTOKENS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean RegexEquals(::Newtonsoft::Json::Linq::JValue* arg, ::Newtonsoft::Json::Linq::JValue* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_REGEXEQUALS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean EqualsWithStringCoercion(::Newtonsoft::Json::Linq::JValue* arg, ::Newtonsoft::Json::Linq::JValue* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_EQUALSWITHSTRINGCOERCION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EqualsWithStrictMatch(::Newtonsoft::Json::Linq::JValue* arg, ::Newtonsoft::Json::Linq::JValue* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_BOOLEANQUERYEXPRESSION_EQUALSWITHSTRICTMATCH_OFFSET))(arg, arg, nullptr);
		}

	};
}

