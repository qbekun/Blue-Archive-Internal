#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }

#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_DEPLOYDATE_OFFSET UNITYSDK_OFFSET(0xFEB900)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFEB910)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFEB920)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFEB930)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEB940)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_TOTALRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xFEB950)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_TOTALRENTCOUNT_OFFSET UNITYSDK_OFFSET(0xFEB960)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_DEPLOYDATE_OFFSET UNITYSDK_OFFSET(0xFEB970)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFEB980)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEB990)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFEB9A0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFEB9B0)
#define MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xFEB9C0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClanAssistSlotDB_TypeDefinitionIndex = 12520;

	class ClanAssistSlotDB : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x10
		::System::Int64 _SlotNumber_k__BackingField; // 0x18
		::System::Int64 _CharacterDBId_k__BackingField; // 0x20
		::System::DateTime* _DeployDate_k__BackingField; // 0x28
		::System::Int64 _TotalRentCount_k__BackingField; // 0x30
		::System::Int32 _CombatStyleIndex_k__BackingField; // 0x38

		::System::Void set_DeployDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_DEPLOYDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CombatStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_SlotNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalRentCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_TOTALRENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TotalRentCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_TOTALRENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_DeployDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_DEPLOYDATE_OFFSET))(nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_CHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SlotNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANASSISTSLOTDB_GET_CHARACTERDBID_OFFSET))(nullptr);
		}

	};
}

