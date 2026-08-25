#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_GET_ALLOWPREEPOCH_OFFSET UNITYSDK_OFFSET(0x9534980)
#define NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_SET_ALLOWPREEPOCH_OFFSET UNITYSDK_OFFSET(0x9534990)
#define NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95349A0)
#define NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95349C0)
#define NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x95349E0)
#define NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x9534CA0)
#define NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95350C0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int UnixDateTimeConverter_TypeDefinitionIndex = 32103;

	class UnixDateTimeConverter : public Il2CppObject
	{
	public:
		::System::DateTime* UnixEpoch; // 0x0
		::System::Boolean _AllowPreEpoch_k__BackingField; // 0x10

		::System::Boolean get_AllowPreEpoch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_GET_ALLOWPREEPOCH_OFFSET))(nullptr);
		}

		::System::Void set_AllowPreEpoch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_SET_ALLOWPREEPOCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_UNIXDATETIMECONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

