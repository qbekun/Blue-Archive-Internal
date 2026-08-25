#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MinigameTBGSeasonExcel; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ParcelType; }

#define MX_DATA_TBGSEASONINFO_GET_ECHELONSLOTPORTRAITS_OFFSET UNITYSDK_OFFSET(0x190A690)
#define MX_DATA_TBGSEASONINFO_GET_ECHELONREVIVALCOST_OFFSET UNITYSDK_OFFSET(0x190A8E0)
#define MX_DATA_TBGSEASONINFO_GET_ROUNDITEMSELECTLIMIT_OFFSET UNITYSDK_OFFSET(0x190A990)
#define MX_DATA_TBGSEASONINFO_GET_MAPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x190A9B0)
#define MX_DATA_TBGSEASONINFO_GET_DEFAULTECHELONHP_OFFSET UNITYSDK_OFFSET(0x190A9D0)
#define MX_DATA_TBGSEASONINFO_GET_ENEMYBOSSHITPOINT_OFFSET UNITYSDK_OFFSET(0x190A9F0)
#define MX_DATA_TBGSEASONINFO_GET_MAXDICEPLUS_OFFSET UNITYSDK_OFFSET(0x190AA10)
#define MX_DATA_TBGSEASONINFO_GET_DEFAULTITEMDICEID_OFFSET UNITYSDK_OFFSET(0x190AA30)
#define MX_DATA_TBGSEASONINFO_GET_ITEMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x190AA50)
#define MX_DATA_TBGSEASONINFO_GET_HITPOINTUPPERLIMIT_OFFSET UNITYSDK_OFFSET(0x190AA70)
#define MX_DATA_TBGSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190AA90)
#define MX_DATA_TBGSEASONINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190AAC0)
#define MX_DATA_TBGSEASONINFO_GET_ECHELONSLOTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x190AAD0)
#define MX_DATA_TBGSEASONINFO_GET_EVENTUSECOSTID_OFFSET UNITYSDK_OFFSET(0x190ACE0)
#define MX_DATA_TBGSEASONINFO_GET_MAPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x190AD00)
#define MX_DATA_TBGSEASONINFO_GET_INSTANTCLEARROUND_OFFSET UNITYSDK_OFFSET(0x190AD20)
#define MX_DATA_TBGSEASONINFO_GET_CRITICALATTACKDAMAGE_OFFSET UNITYSDK_OFFSET(0x190AD40)
#define MX_DATA_TBGSEASONINFO_GET_STARTTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x190AD60)
#define MX_DATA_TBGSEASONINFO_GET_ATTACKDAMAGE_OFFSET UNITYSDK_OFFSET(0x190AD80)
#define MX_DATA_TBGSEASONINFO_GET_ENEMYMINIONHITPOINT_OFFSET UNITYSDK_OFFSET(0x190ADA0)
#define MX_DATA_TBGSEASONINFO_GET_EVENTUSECOSTTYPE_OFFSET UNITYSDK_OFFSET(0x190ADC0)
#define MX_DATA_TBGSEASONINFO_GET_LOOPTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x190ADE0)
#define MX_DATA_TBGSEASONINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x190AE00)

namespace MX::Data
{
	inline static constexpr unsigned int TBGSeasonInfo_TypeDefinitionIndex = 16237;

	class TBGSeasonInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameTBGSeasonExcel* _Excel_k__BackingField; // 0x10

		Il2CppObject* get_EchelonSlotPortraits()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_ECHELONSLOTPORTRAITS_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_EchelonRevivalCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_ECHELONREVIVALCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_RoundItemSelectLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_ROUNDITEMSELECTLIMIT_OFFSET))(nullptr);
		}

		::System::String* get_MapImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_MAPIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultEchelonHP()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_DEFAULTECHELONHP_OFFSET))(nullptr);
		}

		::System::Int32 get_EnemyBossHitPoint()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_ENEMYBOSSHITPOINT_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxDicePlus()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_MAXDICEPLUS_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultItemDiceId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_DEFAULTITEMDICEID_OFFSET))(nullptr);
		}

		::System::Int32 get_ItemSlotCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_ITEMSLOTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_HitPointUpperLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_HITPOINTUPPERLIMIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MinigameTBGSeasonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameTBGSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGSeasonExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MinigameTBGSeasonExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_EXCEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_EchelonSlotCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_ECHELONSLOTCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_EventUseCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_EVENTUSECOSTID_OFFSET))(nullptr);
		}

		::System::String* get_MapNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_MAPNAMELOCALIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_InstantClearRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_INSTANTCLEARROUND_OFFSET))(nullptr);
		}

		::System::Int32 get_CriticalAttackDamage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_CRITICALATTACKDAMAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_StartThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_STARTTHEMAINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_AttackDamage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_ATTACKDAMAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_EnemyMinionHitPoint()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_ENEMYMINIONHITPOINT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_EventUseCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_EVENTUSECOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_LoopThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_LOOPTHEMAINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGSEASONINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

