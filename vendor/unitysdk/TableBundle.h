#pragma once
#include "unitysdk.h"

#define TABLEBUNDLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC59820)
#define TABLEBUNDLE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xC59830)
#define TABLEBUNDLE_SET_CRC_OFFSET UNITYSDK_OFFSET(0xC59AF0)
#define TABLEBUNDLE_SET_INCLUDES_OFFSET UNITYSDK_OFFSET(0xC59B00)
#define TABLEBUNDLE_GET_CRC_OFFSET UNITYSDK_OFFSET(0xC59B10)
#define TABLEBUNDLE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xC59B20)
#define TABLEBUNDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC5A460)
#define TABLEBUNDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC5A470)
#define TABLEBUNDLE_GET_INCLUDES_OFFSET UNITYSDK_OFFSET(0xC5A480)
#define TABLEBUNDLE_GET_ISPROLOGUE_OFFSET UNITYSDK_OFFSET(0xC5A490)
#define TABLEBUNDLE_SET_ISPROLOGUE_OFFSET UNITYSDK_OFFSET(0xC5A4A0)
#define TABLEBUNDLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC5A4B0)
#define TABLEBUNDLE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xC5A4C0)

	inline static constexpr unsigned int TableBundle_TypeDefinitionIndex = 8953;

	class TableBundle : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int64 _Crc_k__BackingField; // 0x18
		::System::Boolean _IsPrologue_k__BackingField; // 0x20
		Il2CppObject* _Includes_k__BackingField; // 0x28

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void set_Crc(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_SET_CRC_OFFSET))(arg, nullptr);
		}

		::System::Void set_Includes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_SET_INCLUDES_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Crc()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_GET_CRC_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, TableBundle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, TableBundle&*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Includes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_GET_INCLUDES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPrologue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_GET_ISPROLOGUE_OFFSET))(nullptr);
		}

		::System::Void set_IsPrologue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_SET_ISPROLOGUE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, TableBundle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, TableBundle&*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

