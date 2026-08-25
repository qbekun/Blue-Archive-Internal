#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json::Bson { class BsonWriter; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x95334D0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x95338B0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEBSON_OFFSET UNITYSDK_OFFSET(0x95335D0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x95336F0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x95338C0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXSTRING_OFFSET UNITYSDK_OFFSET(0x9533BF0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXOBJECT_OFFSET UNITYSDK_OFFSET(0x9533960)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x9533D40)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_ISREGEX_OFFSET UNITYSDK_OFFSET(0x9533DB0)
#define NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9533E20)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int RegexConverter_TypeDefinitionIndex = 32101;

	class RegexConverter : public Il2CppObject
	{
	public:
		::System::String* PatternName; // 0x0
		::System::String* OptionsName; // 0x0

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasFlag(::System::Text::RegularExpressions::RegexOptions* arg, ::System::Text::RegularExpressions::RegexOptions* arg)
		{
			return (return (::System::Boolean(*)(::System::Text::RegularExpressions::RegexOptions*, ::System::Text::RegularExpressions::RegexOptions*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_HASFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteBson(::Newtonsoft::Json::Bson::BsonWriter* arg, ::System::Text::RegularExpressions::Regex* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonWriter*, ::System::Text::RegularExpressions::Regex*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEBSON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Text::RegularExpressions::Regex* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Text::RegularExpressions::Regex*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ReadRegexString(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXSTRING_OFFSET))(arg, nullptr);
		}

		::System::Text::RegularExpressions::Regex* ReadRegexObject(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Text::RegularExpressions::Regex*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_READREGEXOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRegex(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_ISREGEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_REGEXCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

