#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x951F990)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x951F9A0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x951F9B0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x951FA90)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ArrayIndexFilter_TypeDefinitionIndex = 32060;

	class ArrayIndexFilter : public Il2CppObject
	{
	public:
		Il2CppObject* _Index_k__BackingField; // 0x10

		Il2CppObject* get_Index()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_SET_INDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* arg, Il2CppObject* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, Il2CppObject*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_EXECUTEFILTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYINDEXFILTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

