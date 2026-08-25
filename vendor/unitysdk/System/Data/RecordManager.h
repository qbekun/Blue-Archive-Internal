#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_RECORDMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x976BD10)
#define SYSTEM_DATA_RECORDMANAGER_GROWRECORDCAPACITY_OFFSET UNITYSDK_OFFSET(0x976BDE0)
#define SYSTEM_DATA_RECORDMANAGER_GET_LASTFREERECORD_OFFSET UNITYSDK_OFFSET(0x976C010)
#define SYSTEM_DATA_RECORDMANAGER_GET_MINIMUMCAPACITY_OFFSET UNITYSDK_OFFSET(0x976C020)
#define SYSTEM_DATA_RECORDMANAGER_SET_MINIMUMCAPACITY_OFFSET UNITYSDK_OFFSET(0x976C030)
#define SYSTEM_DATA_RECORDMANAGER_GET_RECORDCAPACITY_OFFSET UNITYSDK_OFFSET(0x976C070)
#define SYSTEM_DATA_RECORDMANAGER_SET_RECORDCAPACITY_OFFSET UNITYSDK_OFFSET(0x976BF80)
#define SYSTEM_DATA_RECORDMANAGER_NEWCAPACITY_OFFSET UNITYSDK_OFFSET(0x976BF20)
#define SYSTEM_DATA_RECORDMANAGER_NORMALIZEDMINIMUMCAPACITY_OFFSET UNITYSDK_OFFSET(0x976BF40)
#define SYSTEM_DATA_RECORDMANAGER_NEWRECORDBASE_OFFSET UNITYSDK_OFFSET(0x976C080)
#define SYSTEM_DATA_RECORDMANAGER_FREERECORD_OFFSET UNITYSDK_OFFSET(0x976C130)
#define SYSTEM_DATA_RECORDMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x976C310)
#define SYSTEM_DATA_RECORDMANAGER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x976C540)
#define SYSTEM_DATA_RECORDMANAGER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x976C2A0)
#define SYSTEM_DATA_RECORDMANAGER_IMPORTRECORD_OFFSET UNITYSDK_OFFSET(0x976C570)
#define SYSTEM_DATA_RECORDMANAGER_COPYRECORD_OFFSET UNITYSDK_OFFSET(0x976C590)
#define SYSTEM_DATA_RECORDMANAGER_SETROWCACHE_OFFSET UNITYSDK_OFFSET(0x976C930)

namespace System::Data
{
	inline static constexpr unsigned int RecordManager_TypeDefinitionIndex = 32287;

	class RecordManager : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _table; // 0x10
		::System::Int32 _lastFreeRecord; // 0x18
		::System::Int32 _minimumCapacity; // 0x1C
		::System::Int32 _recordCapacity; // 0x20
		Il2CppObject* _freeRecordList; // 0x28
		::Il2CppArray<::System::Object*>* _rows; // 0x30

		::System::Void .ctor(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void GrowRecordCapacity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_GROWRECORDCAPACITY_OFFSET))(nullptr);
		}

		::System::Int32 get_LastFreeRecord()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_GET_LASTFREERECORD_OFFSET))(nullptr);
		}

		::System::Int32 get_MinimumCapacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_GET_MINIMUMCAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_MinimumCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_SET_MINIMUMCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RecordCapacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_GET_RECORDCAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_RecordCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_SET_RECORDCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 NewCapacity(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_NEWCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 NormalizedMinimumCapacity(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_NORMALIZEDMINIMUMCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 NewRecordBase()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_NEWRECORDBASE_OFFSET))(nullptr);
		}

		::System::Void FreeRecord(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_FREERECORD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Data::DataRow* get_Item(::System::Int32 arg)
		{
			return (return (::System::Data::DataRow*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ImportRecord(::System::Data::DataTable* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Data::DataTable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_IMPORTRECORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CopyRecord(::System::Data::DataTable* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Data::DataTable*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_COPYRECORD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetRowCache(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RECORDMANAGER_SETROWCACHE_OFFSET))(arg, nullptr);
		}

	};
}

