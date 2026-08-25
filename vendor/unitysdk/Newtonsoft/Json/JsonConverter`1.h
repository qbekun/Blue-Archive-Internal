#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_JSONCONVERTER`1_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_JSONCONVERTER`1_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_JSONCONVERTER`1_READJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_JSONCONVERTER`1_READJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_JSONCONVERTER`1_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_JSONCONVERTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConverter`1_TypeDefinitionIndex = 31686;

	class JsonConverter`1 : public Il2CppObject
	{
	public:
		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER`1_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, Il2CppObject* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, Il2CppObject*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER`1_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER`1_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, Il2CppObject* arg, ::System::Boolean arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, Il2CppObject*, ::System::Boolean, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER`1_READJSON_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER`1_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

