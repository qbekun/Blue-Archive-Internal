#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_GETTOKENINDEX_OFFSET UNITYSDK_OFFSET(0x95203F0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_GETNEXTSCANVALUE_OFFSET UNITYSDK_OFFSET(0x9527790)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x951FAA0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int PathFilter_TypeDefinitionIndex = 32071;

	class PathFilter : public Il2CppObject
	{
	public:
		Il2CppObject* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* arg, Il2CppObject* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, Il2CppObject*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_EXECUTEFILTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* GetTokenIndex(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg, ::System::Int32 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_GETTOKENINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* GetNextScanValue(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_GETNEXTSCANVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

