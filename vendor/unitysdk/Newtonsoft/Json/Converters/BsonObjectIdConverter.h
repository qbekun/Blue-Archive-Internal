#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_BSONOBJECTIDCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x952C8C0)
#define NEWTONSOFT_JSON_CONVERTERS_BSONOBJECTIDCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x952C9C0)
#define NEWTONSOFT_JSON_CONVERTERS_BSONOBJECTIDCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x952CB50)
#define NEWTONSOFT_JSON_CONVERTERS_BSONOBJECTIDCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x952CBC0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int BsonObjectIdConverter_TypeDefinitionIndex = 32086;

	class BsonObjectIdConverter : public Il2CppObject
	{
	public:
		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BSONOBJECTIDCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BSONOBJECTIDCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BSONOBJECTIDCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BSONOBJECTIDCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

