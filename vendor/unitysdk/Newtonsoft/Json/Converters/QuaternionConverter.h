#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0xDE4780)
#define NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE47F0)
#define NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0xDE4800)
#define NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0xDE4B90)
#define NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0xDE4BA0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int QuaternionConverter_TypeDefinitionIndex = 10155;

	class QuaternionConverter : public Il2CppObject
	{
	public:
		::System::Boolean CanConvert(::System::Type* arg)
		{
			return ((::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg2, ::Newtonsoft::Json::JsonSerializer* arg3)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_WRITEJSON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg2, ::System::Object* arg3, ::Newtonsoft::Json::JsonSerializer* arg4)
		{
			return ((::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_QUATERNIONCONVERTER_READJSON_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

