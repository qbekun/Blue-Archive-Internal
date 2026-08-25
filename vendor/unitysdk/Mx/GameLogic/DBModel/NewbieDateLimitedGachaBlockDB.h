#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_GET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1005700)
#define MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_SET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1005710)
#define MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1005720)
#define MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_SET_BLOCKEDAT_OFFSET UNITYSDK_OFFSET(0x1005730)
#define MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_GET_BLOCKEDAT_OFFSET UNITYSDK_OFFSET(0x1005740)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int NewbieDateLimitedGachaBlockDB_TypeDefinitionIndex = 12670;

	class NewbieDateLimitedGachaBlockDB : public Il2CppObject
	{
	public:
		::System::Int64 _ShopRecruitId_k__BackingField; // 0x10
		::System::DateTime* _BlockedAt_k__BackingField; // 0x18

		::System::Int64 get_ShopRecruitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_GET_SHOPRECRUITID_OFFSET))(nullptr);
		}

		::System::Void set_ShopRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_SET_SHOPRECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BlockedAt(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_SET_BLOCKEDAT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BlockedAt()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_NEWBIEDATELIMITEDGACHABLOCKDB_GET_BLOCKEDAT_OFFSET))(nullptr);
		}

	};
}

