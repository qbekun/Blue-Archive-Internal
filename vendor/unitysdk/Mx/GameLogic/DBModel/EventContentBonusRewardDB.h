#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFC3A0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_SET_BONUSPARCELINFO_OFFSET UNITYSDK_OFFSET(0xFFC3B0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_GET_BONUSPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xFFC3C0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFC3D0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_GET_EVENTSTAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFFC3E0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_GET_BONUSPARCELINFO_OFFSET UNITYSDK_OFFSET(0xFFC3F0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFC400)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_SET_EVENTSTAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFFC410)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_SET_BONUSPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xFFC420)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentBonusRewardDB_TypeDefinitionIndex = 12595;

	class EventContentBonusRewardDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _EventStageUniqueId_k__BackingField; // 0x18
		::System::Int64 _BonusPercentage_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelInfo* _BonusParcelInfo_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BonusParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_SET_BONUSPARCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BonusPercentage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_GET_BONUSPERCENTAGE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventStageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_GET_EVENTSTAGEUNIQUEID_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_BonusParcelInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_GET_BONUSPARCELINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventStageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_SET_EVENTSTAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BonusPercentage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBONUSREWARDDB_SET_BONUSPERCENTAGE_OFFSET))(arg, nullptr);
		}

	};
}

