#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_DATETIMESTYLES_OFFSET UNITYSDK_OFFSET(0x9531750)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_DATETIMESTYLES_OFFSET UNITYSDK_OFFSET(0x9531760)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_DATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x9531770)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_DATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x95317D0)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x9531820)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x9531880)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x9531890)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x9531C50)
#define NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9532310)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int IsoDateTimeConverter_TypeDefinitionIndex = 32098;

	class IsoDateTimeConverter : public Il2CppObject
	{
	public:
		::System::String* DefaultDateTimeFormat; // 0x0
		::System::Globalization::DateTimeStyles* _dateTimeStyles; // 0x10
		::System::String* _dateTimeFormat; // 0x18
		::System::Globalization::CultureInfo* _culture; // 0x20

		::System::Globalization::DateTimeStyles* get_DateTimeStyles()
		{
			return (return (::System::Globalization::DateTimeStyles*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_DATETIMESTYLES_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeStyles(::System::Globalization::DateTimeStyles* arg)
		{
			((::System::Void(*)(::System::Globalization::DateTimeStyles*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_DATETIMESTYLES_OFFSET))(arg, nullptr);
		}

		::System::String* get_DateTimeFormat()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_DATETIMEFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeFormat(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_DATETIMEFORMAT_OFFSET))(str, nullptr);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return (return (::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_GET_CULTURE_OFFSET))(nullptr);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_SET_CULTURE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ISODATETIMECONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

