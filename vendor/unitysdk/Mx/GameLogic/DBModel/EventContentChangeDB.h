#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_USEAMOUNT_OFFSET UNITYSDK_OFFSET(0xFFCF10)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_CHANGECOUNT_OFFSET UNITYSDK_OFFSET(0xFFCF20)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_CHANGECOUNT_OFFSET UNITYSDK_OFFSET(0xFFCF30)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFCF40)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_LASTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0xFFCF50)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFCF60)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_USEAMOUNT_OFFSET UNITYSDK_OFFSET(0xFFCF70)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFCF80)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_ACCUMULATECHANGECOUNT_OFFSET UNITYSDK_OFFSET(0xFFCF90)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_CHANGEFLAG_OFFSET UNITYSDK_OFFSET(0xFFCFA0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_ACCUMULATECHANGECOUNT_OFFSET UNITYSDK_OFFSET(0xFFCFB0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_LASTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0xFFCFC0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_CHANGEFLAG_OFFSET UNITYSDK_OFFSET(0xFFCFD0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentChangeDB_TypeDefinitionIndex = 12603;

	class EventContentChangeDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _UseAmount_k__BackingField; // 0x18
		::System::Int64 _ChangeCount_k__BackingField; // 0x20
		::System::Int64 _AccumulateChangeCount_k__BackingField; // 0x28
		::System::DateTime* _LastUpdateDate_k__BackingField; // 0x30
		::System::Boolean _ChangeFlag_k__BackingField; // 0x38

		::System::Void set_UseAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_USEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChangeCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_CHANGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ChangeCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_CHANGECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastUpdateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_LASTUPDATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_USEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AccumulateChangeCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_ACCUMULATECHANGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChangeFlag(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_CHANGEFLAG_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccumulateChangeCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_ACCUMULATECHANGECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_LastUpdateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_SET_LASTUPDATEDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ChangeFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCHANGEDB_GET_CHANGEFLAG_OFFSET))(nullptr);
		}

	};
}

