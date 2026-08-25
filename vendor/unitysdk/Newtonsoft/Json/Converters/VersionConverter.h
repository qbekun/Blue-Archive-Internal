#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_VERSIONCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x9535150)
#define NEWTONSOFT_JSON_CONVERTERS_VERSIONCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x9535240)
#define NEWTONSOFT_JSON_CONVERTERS_VERSIONCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x9535510)
#define NEWTONSOFT_JSON_CONVERTERS_VERSIONCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9535580)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int VersionConverter_TypeDefinitionIndex = 32104;

	class VersionConverter : public Il2CppObject
	{
	public:
		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VERSIONCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VERSIONCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VERSIONCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_VERSIONCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

