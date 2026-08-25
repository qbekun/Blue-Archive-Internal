#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEB9D0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEB9E0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_RENTCOUNT_OFFSET UNITYSDK_OFFSET(0xFEB9F0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEBA00)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_RENTCOUNT_OFFSET UNITYSDK_OFFSET(0xFEBA10)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_CUMULTATIVEREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xFEBA20)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_RENTREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xFEBA30)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_DEPLOYDATE_OFFSET UNITYSDK_OFFSET(0xFEBA40)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_CUMULTATIVEREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xFEBA50)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_DEPLOYDATE_OFFSET UNITYSDK_OFFSET(0xFEBA60)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_RENTREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xFEBA70)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClanAssistRewardInfo_TypeDefinitionIndex = 12521;

	class ClanAssistRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterDBId_k__BackingField; // 0x10
		::System::DateTime* _DeployDate_k__BackingField; // 0x18
		::System::Int64 _RentCount_k__BackingField; // 0x20
		Il2CppObject* _CumultativeRewardParcels_k__BackingField; // 0x28
		Il2CppObject* _RentRewardParcels_k__BackingField; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_CHARACTERDBID_OFFSET))(nullptr);
		}

		::System::Void set_RentCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_RENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_CHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RentCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_RENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CumultativeRewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_CUMULTATIVEREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void set_RentRewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_RENTREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void set_DeployDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_SET_DEPLOYDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CumultativeRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_CUMULTATIVEREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::DateTime* get_DeployDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_DEPLOYDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_RentRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTREWARDINFO_GET_RENTREWARDPARCELS_OFFSET))(nullptr);
		}

	};
}

