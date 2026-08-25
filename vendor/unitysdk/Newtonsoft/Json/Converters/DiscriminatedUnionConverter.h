#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_CREATEUNIONTYPELOOKUP_OFFSET UNITYSDK_OFFSET(0x952E9E0)
#define NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_CREATEUNION_OFFSET UNITYSDK_OFFSET(0x952EC90)
#define NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x952F7B0)
#define NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x952FCD0)
#define NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x9530430)
#define NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95306F0)
#define NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9530700)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int DiscriminatedUnionConverter_TypeDefinitionIndex = 32095;

	class DiscriminatedUnionConverter : public Il2CppObject
	{
	public:
		::System::String* CasePropertyName; // 0x0
		::System::String* FieldsPropertyName; // 0x0
		Il2CppObject* UnionCache; // 0x0
		Il2CppObject* UnionTypeLookupCache; // 0x8

		::System::Type* CreateUnionTypeLookup(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_CREATEUNIONTYPELOOKUP_OFFSET))(arg, nullptr);
		}

		Union* CreateUnion(::System::Type* arg)
		{
			return (return (Union*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_CREATEUNION_OFFSET))(arg, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DISCRIMINATEDUNIONCONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

