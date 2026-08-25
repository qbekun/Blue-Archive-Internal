#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_GET_LOGDATE_OFFSET UNITYSDK_OFFSET(0x1006550)
#define MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1006560)
#define MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_SET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1006570)
#define MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_SET_LOGDATE_OFFSET UNITYSDK_OFFSET(0x1006580)
#define MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_GET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1006590)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int PickupFirstGetHistoryDB_TypeDefinitionIndex = 12679;

	class PickupFirstGetHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _ShopRecruitId_k__BackingField; // 0x10
		::System::DateTime* _LogDate_k__BackingField; // 0x18

		::System::DateTime* get_LogDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_GET_LOGDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ShopRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_SET_SHOPRECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Void set_LogDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_SET_LOGDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopRecruitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PICKUPFIRSTGETHISTORYDB_GET_SHOPRECRUITID_OFFSET))(nullptr);
		}

	};
}

