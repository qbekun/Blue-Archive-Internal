#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CompensationTarget; }

#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1001BA0)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_COMPENSATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1001BB0)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_DELETEFLAG_OFFSET UNITYSDK_OFFSET(0x1001BC0)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_MAINTENANCECOMPENSATIONID_OFFSET UNITYSDK_OFFSET(0x1001BD0)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1001BE0)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1001BF0)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_COMPENSATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1001C00)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_DELETEDATE_OFFSET UNITYSDK_OFFSET(0x1001C10)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1001C20)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_DELETEFLAG_OFFSET UNITYSDK_OFFSET(0x1001C30)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_REGISTERDATE_OFFSET UNITYSDK_OFFSET(0x1001C40)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1001C50)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_DELETEDATE_OFFSET UNITYSDK_OFFSET(0x1001C60)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_REGISTERDATE_OFFSET UNITYSDK_OFFSET(0x1001C70)
#define MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_MAINTENANCECOMPENSATIONID_OFFSET UNITYSDK_OFFSET(0x1001C80)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MaintenanceCompensationDB_TypeDefinitionIndex = 12642;

	class MaintenanceCompensationDB : public Il2CppObject
	{
	public:
		::System::Int64 _MaintenanceCompensationId_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::CompensationTarget* _CompensationTarget_k__BackingField; // 0x18
		::System::DateTime* _StartDate_k__BackingField; // 0x20
		::System::DateTime* _EndDate_k__BackingField; // 0x28
		::System::DateTime* _RegisterDate_k__BackingField; // 0x30
		::System::Boolean _DeleteFlag_k__BackingField; // 0x38
		::System::DateTime* _DeleteDate_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CompensationTarget(::MX::GameLogic::DBModel::CompensationTarget* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CompensationTarget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_COMPENSATIONTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void set_DeleteFlag(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_DELETEFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaintenanceCompensationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_MAINTENANCECOMPENSATIONID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CompensationTarget* get_CompensationTarget()
		{
			return ((::MX::GameLogic::DBModel::CompensationTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_COMPENSATIONTARGET_OFFSET))(nullptr);
		}

		::System::DateTime* get_DeleteDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_DELETEDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_DeleteFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_DELETEFLAG_OFFSET))(nullptr);
		}

		::System::DateTime* get_RegisterDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_REGISTERDATE_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DeleteDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_DELETEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RegisterDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_SET_REGISTERDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaintenanceCompensationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAINTENANCECOMPENSATIONDB_GET_MAINTENANCECOMPENSATIONID_OFFSET))(nullptr);
		}

	};
}

