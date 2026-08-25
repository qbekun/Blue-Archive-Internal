#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_INITIALIZEREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x95328A0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x9532B80)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x9532E00)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x95332F0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95333E0)
#define NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95333F0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int KeyValuePairConverter_TypeDefinitionIndex = 32100;

	class KeyValuePairConverter : public Il2CppObject
	{
	public:
		::System::String* KeyName; // 0x0
		::System::String* ValueName; // 0x0
		Il2CppObject* ReflectionObjectPerType; // 0x0

		::Newtonsoft::Json::Utilities::ReflectionObject* InitializeReflectionObject(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::ReflectionObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_INITIALIZEREFLECTIONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_KEYVALUEPAIRCONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

