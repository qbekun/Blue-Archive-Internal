#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_GET_LASTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x100B1A0)
#define MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x100B1B0)
#define MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_SET_LASTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x100B1C0)
#define MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_GET_RECRUITCOUNT_OFFSET UNITYSDK_OFFSET(0x100B1D0)
#define MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100B1E0)
#define MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x100B1F0)
#define MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_SET_RECRUITCOUNT_OFFSET UNITYSDK_OFFSET(0x100B200)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ShopFreeRecruitHistoryDB_TypeDefinitionIndex = 12724;

	class ShopFreeRecruitHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int32 _RecruitCount_k__BackingField; // 0x18
		::System::DateTime* _LastUpdateDate_k__BackingField; // 0x20

		::System::DateTime* get_LastUpdateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_GET_LASTUPDATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastUpdateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_SET_LASTUPDATEDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RecruitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_GET_RECRUITCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_RecruitCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPFREERECRUITHISTORYDB_SET_RECRUITCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

