#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFCFE0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFCFF0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xFFD000)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xFFD010)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFFD020)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFFD030)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_GET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0xFFD040)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_SET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0xFFD050)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFD060)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFD070)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentCollectionDB_TypeDefinitionIndex = 12604;

	class EventContentCollectionDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _GroupId_k__BackingField; // 0x18
		::System::Int64 _UniqueId_k__BackingField; // 0x20
		::System::DateTime* _ReceiveDate_k__BackingField; // 0x28

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ReceiveDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_GET_RECEIVEDATE_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_SET_RECEIVEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTCOLLECTIONDB_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

