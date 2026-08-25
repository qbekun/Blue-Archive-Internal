#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1006670)
#define MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1006680)
#define MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_SET_BEGINDATE_OFFSET UNITYSDK_OFFSET(0x1006690)
#define MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x10066A0)
#define MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_SET_CREATEDATE_OFFSET UNITYSDK_OFFSET(0x10066B0)
#define MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_GET_CREATEDATE_OFFSET UNITYSDK_OFFSET(0x10066C0)
#define MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_SET_PROTOCOLID_OFFSET UNITYSDK_OFFSET(0x10066D0)
#define MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_GET_PROTOCOLID_OFFSET UNITYSDK_OFFSET(0x10066E0)
#define MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_GET_BEGINDATE_OFFSET UNITYSDK_OFFSET(0x10066F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ProtocolLockDB_TypeDefinitionIndex = 12681;

	class ProtocolLockDB : public Il2CppObject
	{
	public:
		::System::Int32 _ProtocolId_k__BackingField; // 0x10
		::System::DateTime* _BeginDate_k__BackingField; // 0x18
		::System::DateTime* _EndDate_k__BackingField; // 0x20
		::System::DateTime* _CreateDate_k__BackingField; // 0x28

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BeginDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_SET_BEGINDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_CreateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_SET_CREATEDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_CreateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_GET_CREATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_ProtocolId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_SET_PROTOCOLID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProtocolId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_GET_PROTOCOLID_OFFSET))(nullptr);
		}

		::System::DateTime* get_BeginDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PROTOCOLLOCKDB_GET_BEGINDATE_OFFSET))(nullptr);
		}

	};
}

