#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq::JsonPath { class QueryOperator; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_GET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x9527890)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_SET_EXPRESSIONS_OFFSET UNITYSDK_OFFSET(0x95278A0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9526F80)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x95278B0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int CompositeExpression_TypeDefinitionIndex = 32074;

	class CompositeExpression : public Il2CppObject
	{
	public:
		Il2CppObject* _Expressions_k__BackingField; // 0x18

		Il2CppObject* get_Expressions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_GET_EXPRESSIONS_OFFSET))(nullptr);
		}

		::System::Void set_Expressions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_SET_EXPRESSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JsonPath::QueryOperator*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMatch(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_COMPOSITEEXPRESSION_ISMATCH_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

