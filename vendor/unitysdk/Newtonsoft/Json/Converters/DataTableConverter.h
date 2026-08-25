#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x952D4B0)
#define NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x952DD80)
#define NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_CREATEROW_OFFSET UNITYSDK_OFFSET(0x952E0B0)
#define NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_GETCOLUMNDATATYPE_OFFSET UNITYSDK_OFFSET(0x952E640)
#define NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x952E800)
#define NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x952D110)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int DataTableConverter_TypeDefinitionIndex = 32089;

	class DataTableConverter : public Il2CppObject
	{
	public:
		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CreateRow(::Newtonsoft::Json::JsonReader* arg, ::System::Data::DataTable* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Data::DataTable*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_CREATEROW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* GetColumnDataType(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Type*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_GETCOLUMNDATATYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATATABLECONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

