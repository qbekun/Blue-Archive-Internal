#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }

#define NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0xDE5220)
#define NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0xDE5370)
#define NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0xDE54F0)
#define NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE5500)
#define NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0xDE5510)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int ResolutionConverter_TypeDefinitionIndex = 10156;

	class ResolutionConverter : public Il2CppObject
	{
	public:
		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg2, ::System::Object* arg3, ::Newtonsoft::Json::JsonSerializer* arg4)
		{
			return ((::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_READJSON_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg2, ::Newtonsoft::Json::JsonSerializer* arg3)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_WRITEJSON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return ((::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_RESOLUTIONCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

	};
}

