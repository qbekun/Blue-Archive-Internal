#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x95308D0)
#define NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_READANDASSERTPROPERTY_OFFSET UNITYSDK_OFFSET(0x9530DB0)
#define NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x9530ED0)
#define NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_ENSUREREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x9530C40)
#define NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x95311C0)
#define NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9531200)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int EntityKeyMemberConverter_TypeDefinitionIndex = 32096;

	class EntityKeyMemberConverter : public Il2CppObject
	{
	public:
		::System::String* EntityKeyMemberFullTypeName; // 0x0
		::System::String* KeyPropertyName; // 0x0
		::System::String* TypePropertyName; // 0x0
		::System::String* ValuePropertyName; // 0x0
		::Newtonsoft::Json::Utilities::ReflectionObject* _reflectionObject; // 0x0

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReadAndAssertProperty(::Newtonsoft::Json::JsonReader* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_READANDASSERTPROPERTY_OFFSET))(arg, str, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EnsureReflectionObject(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_ENSUREREFLECTIONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENTITYKEYMEMBERCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

