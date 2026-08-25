#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x9531210)
#define NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x9531220)
#define NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_READVALUE_OFFSET UNITYSDK_OFFSET(0x9531230)
#define NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_READLIST_OFFSET UNITYSDK_OFFSET(0x9531560)
#define NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x9531390)
#define NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x95316C0)
#define NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9531730)
#define NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9531740)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int ExpandoObjectConverter_TypeDefinitionIndex = 32097;

	class ExpandoObjectConverter : public Il2CppObject
	{
	public:
		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ReadValue(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_READVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadList(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_READLIST_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadObject(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_READOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_EXPANDOOBJECTCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

