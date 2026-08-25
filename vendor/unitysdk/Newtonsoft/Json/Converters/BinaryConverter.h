#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }

#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x952BCF0)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_GETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x952BD50)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_ENSUREREFLECTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x952BF50)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x952C120)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x952C550)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x952C7B0)
#define NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x952C8B0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int BinaryConverter_TypeDefinitionIndex = 32085;

	class BinaryConverter : public Il2CppObject
	{
	public:
		::System::String* BinaryTypeName; // 0x0
		::System::String* BinaryToArrayName; // 0x0
		::Newtonsoft::Json::Utilities::ReflectionObject* _reflectionObject; // 0x0

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetByteArray(::System::Object* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_GETBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureReflectionObject(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_ENSUREREFLECTIONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadByteArray(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_READBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_BINARYCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

