#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq::JsonPath { class QueryExpression; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9526050)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x9528F50)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int QueryFilter_TypeDefinitionIndex = 32077;

	class QueryFilter : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JsonPath::QueryExpression* Expression; // 0x10

		::System::Void .ctor(::Newtonsoft::Json::Linq::JsonPath::QueryExpression* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JsonPath::QueryExpression*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* arg, Il2CppObject* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, Il2CppObject*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_QUERYFILTER_EXECUTEFILTER_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

