#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_DATASETCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x952CBD0)
#define NEWTONSOFT_JSON_CONVERTERS_DATASETCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x952D120)
#define NEWTONSOFT_JSON_CONVERTERS_DATASETCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x952D410)
#define NEWTONSOFT_JSON_CONVERTERS_DATASETCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x952D4A0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int DataSetConverter_TypeDefinitionIndex = 32088;

	class DataSetConverter : public Il2CppObject
	{
	public:
		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATASETCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATASETCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATASETCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATASETCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

