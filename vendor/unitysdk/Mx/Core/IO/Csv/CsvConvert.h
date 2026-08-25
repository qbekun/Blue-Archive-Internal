#pragma once
#include "../../../../unitysdk.h"

#define MX_CORE_IO_CSV_CSVCONVERT_SERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_IO_CSV_CSVCONVERT_DESERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1037FC0)
#define MX_CORE_IO_CSV_CSVCONVERT_SERIALIZEWITHOUTHEADER_OFFSET UNITYSDK_OFFSET(0x1038940)
#define MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_IO_CSV_CSVCONVERT_CREATESERIALIZABLESTRING_OFFSET UNITYSDK_OFFSET(0x10390A0)
#define MX_CORE_IO_CSV_CSVCONVERT_CREATESERIALIZABLESTRING_OFFSET UNITYSDK_OFFSET(0x1038820)
#define MX_CORE_IO_CSV_CSVCONVERT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_IO_CSV_CSVCONVERT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_IO_CSV_CSVCONVERT_DESERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int CsvConvert_TypeDefinitionIndex = 12843;

	class CsvConvert : public Il2CppObject
	{
	public:
		::System::String* SerializeData(Il2CppObject* arg, ::System::Char arg2, ::System::String* str)
		{
			return ((::System::String*(*)(Il2CppObject*, ::System::Char, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_SERIALIZEDATA_OFFSET))(arg, arg2, str, nullptr);
		}

		Il2CppObject* DeserializeData(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_DESERIALIZEDATA_OFFSET))(arg, nullptr);
		}

		::System::String* Serialize(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::String* Serialize(Il2CppObject* arg, ::System::String* str)
		{
			return ((::System::String*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET))(arg, str, nullptr);
		}

		::System::String* Serialize(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::String* Serialize(Il2CppObject* arg, ::System::String* str)
		{
			return ((::System::String*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET))(arg, str, nullptr);
		}

		::System::String* Serialize(Il2CppObject* arg, ::System::Type* arg2, ::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(Il2CppObject*, ::System::Type*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET))(arg, arg2, str, str2, nullptr);
		}

		::System::String* SerializeWithoutHeader(Il2CppObject* arg, ::System::Type* arg2, ::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(Il2CppObject*, ::System::Type*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_SERIALIZEWITHOUTHEADER_OFFSET))(arg, arg2, str, str2, nullptr);
		}

		::System::String* Serialize(Il2CppObject* arg, ::System::String* str, ::System::Char arg2, ::System::Boolean arg3)
		{
			return ((::System::String*(*)(Il2CppObject*, ::System::String*, ::System::Char, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_SERIALIZE_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::String* CreateSerializableString(::System::Object* arg, ::System::String* str, ::System::Char arg2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_CREATESERIALIZABLESTRING_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::String* CreateSerializableString(::System::Object* arg, ::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_CREATESERIALIZABLESTRING_OFFSET))(arg, str, str2, nullptr);
		}

		Il2CppObject* Deserialize(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_DESERIALIZE_OFFSET))(str, nullptr);
		}

		Il2CppObject* Deserialize(::System::String* str, ::System::String* str2, ::System::Char arg)
		{
			return ((Il2CppObject*(*)(::System::String*, ::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_DESERIALIZE_OFFSET))(str, str2, arg, nullptr);
		}

		Il2CppObject* DeserializeInternal(::System::String* str, ::System::String* str2, ::System::Char arg)
		{
			return ((Il2CppObject*(*)(::System::String*, ::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVCONVERT_DESERIALIZEINTERNAL_OFFSET))(str, str2, arg, nullptr);
		}

	};
}

