#pragma once
#include "../unitysdk.h"

#define SYSTEM_LOCALDATASTORESLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9390800)
#define SYSTEM_LOCALDATASTORESLOT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x9390840)
#define SYSTEM_LOCALDATASTORESLOT_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x9390850)
#define SYSTEM_LOCALDATASTORESLOT_GET_COOKIE_OFFSET UNITYSDK_OFFSET(0x9390860)
#define SYSTEM_LOCALDATASTORESLOT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9390870)
#define SYSTEM_LOCALDATASTORESLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9390B50)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreSlot_TypeDefinitionIndex = 23915;

	class LocalDataStoreSlot : public Il2CppObject
	{
	public:
		::System::LocalDataStoreMgr* m_mgr; // 0x10
		::System::Int32 m_slot; // 0x18
		::System::Int64 m_cookie; // 0x20

		::System::Void .ctor(::System::LocalDataStoreMgr* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::LocalDataStoreMgr*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::LocalDataStoreMgr* get_Manager()
		{
			return (return (::System::LocalDataStoreMgr*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_GET_MANAGER_OFFSET))(nullptr);
		}

		::System::Int32 get_Slot()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_GET_SLOT_OFFSET))(nullptr);
		}

		::System::Int64 get_Cookie()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_GET_COOKIE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTORESLOT_.CTOR_OFFSET))(nullptr);
		}

	};
}

