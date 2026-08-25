#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalReader; }
namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94CAFC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_GETTOKENVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x94CB0B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x94CB3B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x94CB4D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBYTE_OFFSET UNITYSDK_OFFSET(0x94CB520)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOCHAR_OFFSET UNITYSDK_OFFSET(0x94CB570)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x94CB5C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x94CB610)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x94CB660)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT16_OFFSET UNITYSDK_OFFSET(0x94CB6B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x94CB700)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x94CB750)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x94CB7A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x94CB7F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94CB840)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT16_OFFSET UNITYSDK_OFFSET(0x94CB890)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT32_OFFSET UNITYSDK_OFFSET(0x94CB8E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT64_OFFSET UNITYSDK_OFFSET(0x94CB930)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonFormatterConverter_TypeDefinitionIndex = 31944;

	class JsonFormatterConverter : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _reader; // 0x10
		::Newtonsoft::Json::Serialization::JsonISerializableContract* _contract; // 0x18
		::Newtonsoft::Json::Serialization::JsonProperty* _member; // 0x20

		::System::Void .ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* arg, ::Newtonsoft::Json::Serialization::JsonISerializableContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTokenValue(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_GETTOKENVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* Convert(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Convert(::System::Object* arg, ::System::TypeCode* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::TypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ToBoolean(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Byte ToByte(::System::Object* arg)
		{
			return (return (::System::Byte(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Char ToChar(::System::Object* arg)
		{
			return (return (::System::Char(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::Object* arg)
		{
			return (return (::System::DateTime*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Decimal* ToDecimal(::System::Object* arg)
		{
			return (return (::System::Decimal*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::Double ToDouble(::System::Object* arg)
		{
			return (return (::System::Double(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Int16 ToInt16(::System::Object* arg)
		{
			return (return (::System::Int16(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToInt64(::System::Object* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT64_OFFSET))(arg, nullptr);
		}

		::System::SByte ToSByte(::System::Object* arg)
		{
			return (return (::System::SByte(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Single ToSingle(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::UInt16 ToUInt16(::System::Object* arg)
		{
			return (return (::System::UInt16(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ToUInt32(::System::Object* arg)
		{
			return (return (::System::UInt32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt64 ToUInt64(::System::Object* arg)
		{
			return (return (::System::UInt64(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT64_OFFSET))(arg, nullptr);
		}

	};
}

