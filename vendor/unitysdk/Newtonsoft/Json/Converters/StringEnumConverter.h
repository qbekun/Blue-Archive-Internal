#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class NamingStrategy; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_CAMELCASETEXT_OFFSET UNITYSDK_OFFSET(0x9533E30)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_CAMELCASETEXT_OFFSET UNITYSDK_OFFSET(0x9533EA0)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_NAMINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x9533F70)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_NAMINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x9533F80)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_ALLOWINTEGERVALUES_OFFSET UNITYSDK_OFFSET(0x9533F90)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_ALLOWINTEGERVALUES_OFFSET UNITYSDK_OFFSET(0x9533FA0)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9533FB0)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9533FC0)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9534050)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9534090)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9534120)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95341C0)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x9534260)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x9534460)
#define NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x9534910)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int StringEnumConverter_TypeDefinitionIndex = 32102;

	class StringEnumConverter : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::NamingStrategy* _NamingStrategy_k__BackingField; // 0x10
		::System::Boolean _AllowIntegerValues_k__BackingField; // 0x18

		::System::Boolean get_CamelCaseText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_CAMELCASETEXT_OFFSET))(nullptr);
		}

		::System::Void set_CamelCaseText(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_CAMELCASETEXT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategy()
		{
			return (return (::Newtonsoft::Json::Serialization::NamingStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_NAMINGSTRATEGY_OFFSET))(nullptr);
		}

		::System::Void set_NamingStrategy(::Newtonsoft::Json::Serialization::NamingStrategy* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::NamingStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_NAMINGSTRATEGY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowIntegerValues()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_GET_ALLOWINTEGERVALUES_OFFSET))(nullptr);
		}

		::System::Void set_AllowIntegerValues(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_SET_ALLOWINTEGERVALUES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Serialization::NamingStrategy* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::NamingStrategy*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_STRINGENUMCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

	};
}

