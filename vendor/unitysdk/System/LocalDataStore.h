#pragma once
#include "../unitysdk.h"

#define SYSTEM_LOCALDATASTORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93900C0)
#define SYSTEM_LOCALDATASTORE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9390040)
#define SYSTEM_LOCALDATASTORE_GETDATA_OFFSET UNITYSDK_OFFSET(0x9390260)
#define SYSTEM_LOCALDATASTORE_SETDATA_OFFSET UNITYSDK_OFFSET(0x93903A0)
#define SYSTEM_LOCALDATASTORE_FREEDATA_OFFSET UNITYSDK_OFFSET(0x9390780)
#define SYSTEM_LOCALDATASTORE_POPULATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9390480)

namespace System
{
	inline static constexpr unsigned int LocalDataStore_TypeDefinitionIndex = 23914;

	class LocalDataStore : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_DataTable; // 0x10
		::System::LocalDataStoreMgr* m_Manager; // 0x18

		::System::Void .ctor(::System::LocalDataStoreMgr* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::LocalDataStoreMgr*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Object* GetData(::System::LocalDataStoreSlot* arg)
		{
			return (return (::System::Object*(*)(::System::LocalDataStoreSlot*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_GETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::LocalDataStoreSlot* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::LocalDataStoreSlot*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FreeData(::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_FREEDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::LocalDataStoreElement* PopulateElement(::System::LocalDataStoreSlot* arg)
		{
			return (return (::System::LocalDataStoreElement*(*)(::System::LocalDataStoreSlot*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORE_POPULATEELEMENT_OFFSET))(arg, nullptr);
		}

	};
}

