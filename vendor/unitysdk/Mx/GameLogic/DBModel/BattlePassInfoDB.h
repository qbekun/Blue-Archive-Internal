#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class BattlePassInfoDB; }

#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_LASTWEEKLYPASSEXPLIMITREFRESHDATE_OFFSET UNITYSDK_OFFSET(0xFE4640)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xFE4650)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_WEEKLYPASSEXP_OFFSET UNITYSDK_OFFSET(0xFE4660)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_PASSEXP_OFFSET UNITYSDK_OFFSET(0xFE4670)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_CLONE_OFFSET UNITYSDK_OFFSET(0xFE4680)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_RECEIVEREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xFE4720)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_PASSLEVEL_OFFSET UNITYSDK_OFFSET(0xFE4730)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_PASSEXP_OFFSET UNITYSDK_OFFSET(0xFE4740)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_PURCHASEGROUPID_OFFSET UNITYSDK_OFFSET(0xFE4750)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_RECEIVEPURCHASEREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xFE4760)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_RECEIVEREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xFE4770)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE4710)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_HASNOTRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0xFE4780)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_NEWDATA_OFFSET UNITYSDK_OFFSET(0xFE47A0)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_PASSLEVEL_OFFSET UNITYSDK_OFFSET(0xFE4820)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_LASTWEEKLYPASSEXPLIMITREFRESHDATE_OFFSET UNITYSDK_OFFSET(0xFE4830)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_RECEIVEPURCHASEREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xFE4840)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_WEEKLYPASSEXP_OFFSET UNITYSDK_OFFSET(0xFE4850)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_PURCHASEGROUPID_OFFSET UNITYSDK_OFFSET(0xFE4860)
#define MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xFE4870)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int BattlePassInfoDB_TypeDefinitionIndex = 12491;

	class BattlePassInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x10
		::System::Int32 _PassLevel_k__BackingField; // 0x18
		::System::Int64 _PassExp_k__BackingField; // 0x20
		::System::Int64 _PurchaseGroupId_k__BackingField; // 0x28
		::System::Int32 _ReceiveRewardLevel_k__BackingField; // 0x30
		::System::Int32 _ReceivePurchaseRewardLevel_k__BackingField; // 0x34
		::System::Int64 _WeeklyPassExp_k__BackingField; // 0x38
		::System::DateTime* _LastWeeklyPassExpLimitRefreshDate_k__BackingField; // 0x40

		::System::Void set_LastWeeklyPassExpLimitRefreshDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_LASTWEEKLYPASSEXPLIMITREFRESHDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WeeklyPassExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_WEEKLYPASSEXP_OFFSET))(nullptr);
		}

		::System::Void set_PassExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_PASSEXP_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassInfoDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::BattlePassInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveRewardLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_RECEIVEREWARDLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_PassLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_PASSLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PassExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_PASSEXP_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_PURCHASEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ReceivePurchaseRewardLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_RECEIVEPURCHASEREWARDLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_ReceiveRewardLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_RECEIVEREWARDLEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasNotReceiveReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_HASNOTRECEIVEREWARD_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassInfoDB* NewData(::System::DateTime* arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::BattlePassInfoDB*(*)(::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_NEWDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_PassLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_PASSLEVEL_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastWeeklyPassExpLimitRefreshDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_LASTWEEKLYPASSEXPLIMITREFRESHDATE_OFFSET))(nullptr);
		}

		::System::Void set_ReceivePurchaseRewardLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_RECEIVEPURCHASEREWARDLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_WeeklyPassExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_SET_WEEKLYPASSEXP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PurchaseGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_PURCHASEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BATTLEPASSINFODB_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

	};
}

