#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class VectorConverter; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_READJSON_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int EnumerableVectorConverter`1_TypeDefinitionIndex = 10152;

	class EnumerableVectorConverter`1 : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Converters::VectorConverter* VectorConverter; // 0x0

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return ((::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg2, ::Newtonsoft::Json::JsonSerializer* arg3)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_WRITEJSON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg2, ::System::Object* arg3, ::Newtonsoft::Json::JsonSerializer* arg4)
		{
			return ((::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_ENUMERABLEVECTORCONVERTER`1_READJSON_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

