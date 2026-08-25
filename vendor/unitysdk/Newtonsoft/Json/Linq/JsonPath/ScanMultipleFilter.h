#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANMULTIPLEFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9527410)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_SCANMULTIPLEFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x952B1C0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ScanMultipleFilter_TypeDefinitionIndex = 32084;

	class ScanMultipleFilter : public Il2CppObject
	{
	public:
		Il2CppObject* _names; // 0x10

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANMULTIPLEFILTER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* arg, Il2CppObject* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, Il2CppObject*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_SCANMULTIPLEFILTER_EXECUTEFILTER_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

