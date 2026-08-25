#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SET_LASTQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_CLEANCACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_TRYSELECTFIRSTFROMCACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_TRYSELECTFIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_ADDCACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_CACHEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_ISINBUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_ISCACHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_LASTQUERYSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_PARSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_ISDEBUGONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_CACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SELECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SELECTALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SELECTFROMCACHE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SELECTFROMCACHEBYKEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_RESERVECACHE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BaseSQLiteRepository`3_TypeDefinitionIndex = 16549;

	class BaseSQLiteRepository`3 : public Il2CppObject
	{
	public:
		::System::String* _TableName_k__BackingField; // 0x0
		::System::String* _LastQueryString_k__BackingField; // 0x0
		::Il2CppArray<::System::Object*>* cache; // 0x0
		::Il2CppArray<::System::Object*>* cacheByIndex; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_LastQueryString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SET_LASTQUERYSTRING_OFFSET))(str, nullptr);
		}

		::System::Void CleanCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_CLEANCACHE_OFFSET))(nullptr);
		}

		::System::Boolean TrySelectFirstFromCache(::System::Int32 arg, ::System::Object* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Object*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_TRYSELECTFIRSTFROMCACHE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TrySelectFirst(Il2CppObject* arg, Il2CppObject&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_TRYSELECTFIRST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddCache(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_ADDCACHE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_TableName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SET_TABLENAME_OFFSET))(str, nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void CacheAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_CACHEALL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_ISINBUILD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCached()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_ISCACHED_OFFSET))(nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::System::String* get_LastQueryString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_LASTQUERYSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* Parse(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_PARSE_OFFSET))(arg, nullptr);
		}

		::System::String* get_TableName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_TABLENAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDebugOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_GET_ISDEBUGONLY_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SELECT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectAll(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SELECTALL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFromCache(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SELECTFROMCACHE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFromCacheByKeys(::System::Int32 arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_SELECTFROMCACHEBYKEYS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReserveCache(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASESQLITEREPOSITORY`3_RESERVECACHE_OFFSET))(arg, nullptr);
		}

	};
}

