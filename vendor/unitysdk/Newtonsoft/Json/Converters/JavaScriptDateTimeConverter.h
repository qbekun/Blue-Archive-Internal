#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x9532320)
#define NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x9532540)
#define NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9532890)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int JavaScriptDateTimeConverter_TypeDefinitionIndex = 32099;

	class JavaScriptDateTimeConverter : public Il2CppObject
	{
	public:
		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_JAVASCRIPTDATETIMECONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

