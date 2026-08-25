#pragma once
#include "../unitysdk.h"

#define SYSTEM_LOCALDATASTOREMGR_CREATELOCALDATASTORE_OFFSET UNITYSDK_OFFSET(0x9390B80)
#define SYSTEM_LOCALDATASTOREMGR_DELETELOCALDATASTORE_OFFSET UNITYSDK_OFFSET(0x9390130)
#define SYSTEM_LOCALDATASTOREMGR_ALLOCATEDATASLOT_OFFSET UNITYSDK_OFFSET(0x9390DF0)
#define SYSTEM_LOCALDATASTOREMGR_ALLOCATENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x93910B0)
#define SYSTEM_LOCALDATASTOREMGR_GETNAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x9391210)
#define SYSTEM_LOCALDATASTOREMGR_FREENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x9391370)
#define SYSTEM_LOCALDATASTOREMGR_FREEDATASLOT_OFFSET UNITYSDK_OFFSET(0x9390950)
#define SYSTEM_LOCALDATASTOREMGR_VALIDATESLOT_OFFSET UNITYSDK_OFFSET(0x9390320)
#define SYSTEM_LOCALDATASTOREMGR_GETSLOTTABLELENGTH_OFFSET UNITYSDK_OFFSET(0x93907E0)
#define SYSTEM_LOCALDATASTOREMGR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93914A0)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreMgr_TypeDefinitionIndex = 23916;

	class LocalDataStoreMgr : public Il2CppObject
	{
	public:
		::System::Int32 InitialSlotTableSize; // 0x0
		::System::Int32 SlotTableDoubleThreshold; // 0x0
		::System::Int32 LargeSlotTableSizeIncrease; // 0x0
		::Il2CppArray<::System::Object*>* m_SlotInfoTable; // 0x10
		::System::Int32 m_FirstAvailableSlot; // 0x18
		Il2CppObject* m_ManagedLocalDataStores; // 0x20
		Il2CppObject* m_KeyToSlotMap; // 0x28
		::System::Int64 m_CookieGenerator; // 0x30

		::System::LocalDataStoreHolder* CreateLocalDataStore()
		{
			return (return (::System::LocalDataStoreHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_CREATELOCALDATASTORE_OFFSET))(nullptr);
		}

		::System::Void DeleteLocalDataStore(::System::LocalDataStore* arg)
		{
			((::System::Void(*)(::System::LocalDataStore*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_DELETELOCALDATASTORE_OFFSET))(arg, nullptr);
		}

		::System::LocalDataStoreSlot* AllocateDataSlot()
		{
			return (return (::System::LocalDataStoreSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_ALLOCATEDATASLOT_OFFSET))(nullptr);
		}

		::System::LocalDataStoreSlot* AllocateNamedDataSlot(::System::String* str)
		{
			return (return (::System::LocalDataStoreSlot*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_ALLOCATENAMEDDATASLOT_OFFSET))(str, nullptr);
		}

		::System::LocalDataStoreSlot* GetNamedDataSlot(::System::String* str)
		{
			return (return (::System::LocalDataStoreSlot*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_GETNAMEDDATASLOT_OFFSET))(str, nullptr);
		}

		::System::Void FreeNamedDataSlot(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_FREENAMEDDATASLOT_OFFSET))(str, nullptr);
		}

		::System::Void FreeDataSlot(::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_FREEDATASLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateSlot(::System::LocalDataStoreSlot* arg)
		{
			((::System::Void(*)(::System::LocalDataStoreSlot*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_VALIDATESLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSlotTableLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_GETSLOTTABLELENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREMGR_.CTOR_OFFSET))(nullptr);
		}

	};
}

