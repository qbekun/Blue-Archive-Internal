#pragma once
#include "unitysdk.h"

#define TABLECATALOG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xC5B1B0)
#define TABLECATALOG_SET_CATALOG_OFFSET UNITYSDK_OFFSET(0xC5B540)
#define TABLECATALOG_SET_TABLE_OFFSET UNITYSDK_OFFSET(0xC5B550)
#define TABLECATALOG_GET_CATALOG_OFFSET UNITYSDK_OFFSET(0xC5B560)
#define TABLECATALOG_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xC5B570)
#define TABLECATALOG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xC5B830)
#define TABLECATALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0xC5B530)
#define TABLECATALOG_GET_TABLE_OFFSET UNITYSDK_OFFSET(0xC5BA70)
#define TABLECATALOG_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC5BA80)

	inline static constexpr unsigned int TableCatalog_TypeDefinitionIndex = 8955;

	class TableCatalog : public Il2CppObject
	{
	public:
		Il2CppObject* _Table_k__BackingField; // 0x10
		Il2CppObject* _Catalog_k__BackingField; // 0x18

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, TableCatalog&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, TableCatalog&*, ::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOG_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Catalog(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOG_SET_CATALOG_OFFSET))(arg, nullptr);
		}

		::System::Void set_Table(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOG_SET_TABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Catalog()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOG_GET_CATALOG_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOG_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, TableCatalog&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, TableCatalog&*, ::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOG_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOG_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Table()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOG_GET_TABLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOG_.CCTOR_OFFSET))(nullptr);
		}

	};

