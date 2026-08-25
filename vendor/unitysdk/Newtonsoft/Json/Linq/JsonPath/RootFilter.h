#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq::JsonPath { class RootFilter; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ROOTFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x952A720)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ROOTFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x952A730)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ROOTFILTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x952A7D0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int RootFilter_TypeDefinitionIndex = 32080;

	class RootFilter : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JsonPath::RootFilter* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ROOTFILTER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* arg, Il2CppObject* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, Il2CppObject*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ROOTFILTER_EXECUTEFILTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ROOTFILTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

