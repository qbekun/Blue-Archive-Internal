#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ParcelType; }

#define MX_DATA_ITBGSEASONINFO_GET_MAPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_ITEMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_ECHELONSLOTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_ENEMYBOSSHITPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_ATTACKDAMAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_ECHELONREVIVALCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_ROUNDITEMSELECTLIMIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_CRITICALATTACKDAMAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_ENEMYMINIONHITPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_STARTTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_MAXDICEPLUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_DEFAULTECHELONHP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_INSTANTCLEARROUND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_EVENTUSECOSTID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_DEFAULTITEMDICEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_MAPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_ECHELONSLOTPORTRAITS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_HITPOINTUPPERLIMIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_EVENTUSECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_LOOPTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGSEASONINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int ITBGSeasonInfo_TypeDefinitionIndex = 16227;

	class ITBGSeasonInfo : public Il2CppObject
	{
	public:
		::System::String* get_MapImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_MAPIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Int32 get_ItemSlotCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_ITEMSLOTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_EchelonSlotCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_ECHELONSLOTCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Int32 get_EnemyBossHitPoint()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_ENEMYBOSSHITPOINT_OFFSET))(nullptr);
		}

		::System::Int32 get_AttackDamage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_ATTACKDAMAGE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_EchelonRevivalCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_ECHELONREVIVALCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_RoundItemSelectLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_ROUNDITEMSELECTLIMIT_OFFSET))(nullptr);
		}

		::System::Int32 get_CriticalAttackDamage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_CRITICALATTACKDAMAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_EnemyMinionHitPoint()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_ENEMYMINIONHITPOINT_OFFSET))(nullptr);
		}

		::System::Int32 get_StartThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_STARTTHEMAINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxDicePlus()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_MAXDICEPLUS_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultEchelonHP()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_DEFAULTECHELONHP_OFFSET))(nullptr);
		}

		::System::Int32 get_InstantClearRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_INSTANTCLEARROUND_OFFSET))(nullptr);
		}

		::System::Int64 get_EventUseCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_EVENTUSECOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultItemDiceId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_DEFAULTITEMDICEID_OFFSET))(nullptr);
		}

		::System::String* get_MapNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_MAPNAMELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_EchelonSlotPortraits()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_ECHELONSLOTPORTRAITS_OFFSET))(nullptr);
		}

		::System::Int32 get_HitPointUpperLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_HITPOINTUPPERLIMIT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_EventUseCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_EVENTUSECOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_LoopThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_LOOPTHEMAINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGSEASONINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

