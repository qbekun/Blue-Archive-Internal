#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class CurrencyTypes; }
namespace MX::Data::Excel { class WorldRaidSeasonManageExcel; }
namespace MX::Data::Excel { class InteractiveWorldRaidSeasonManageExcel; }
namespace MX::Data::Excel { class EventContentSeasonExcel; }

#define MX_DATA_WORLDRAIDSEASONINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x18663E0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x18663F0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1866400)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1866410)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1866420)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_PHASESTARTCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1866430)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_PHASESTARTCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1866440)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0x1866450)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_ENTERTICKET_OFFSET UNITYSDK_OFFSET(0x1866460)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_BEFOREHANDEXPOSEDTIME_OFFSET UNITYSDK_OFFSET(0x1866470)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_BEFOREHANDEXPOSEDTIME_OFFSET UNITYSDK_OFFSET(0x1866480)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_EVENTCONTENTOPENTIME_OFFSET UNITYSDK_OFFSET(0x1866490)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_EVENTCONTENTOPENTIME_OFFSET UNITYSDK_OFFSET(0x18664A0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_EVENTCONTENTCLOSETIME_OFFSET UNITYSDK_OFFSET(0x18664B0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_EVENTCONTENTCLOSETIME_OFFSET UNITYSDK_OFFSET(0x18664C0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_EXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x18664D0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_EXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x18664E0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_PHASESTARTTIME_OFFSET UNITYSDK_OFFSET(0x18664F0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_PHASESTARTTIME_OFFSET UNITYSDK_OFFSET(0x1866500)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_PHASEENDTIME_OFFSET UNITYSDK_OFFSET(0x1866510)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_PHASEENDTIME_OFFSET UNITYSDK_OFFSET(0x1866520)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_CANPLAYNOTSEASONTIME_OFFSET UNITYSDK_OFFSET(0x1866530)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_CANPLAYNOTSEASONTIME_OFFSET UNITYSDK_OFFSET(0x1866540)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_CANWORLDRAIDGEMENTER_OFFSET UNITYSDK_OFFSET(0x1866550)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_CANWORLDRAIDGEMENTER_OFFSET UNITYSDK_OFFSET(0x1866560)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_HIDEWORLDRAIDTICKETUI_OFFSET UNITYSDK_OFFSET(0x1866570)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_HIDEWORLDRAIDTICKETUI_OFFSET UNITYSDK_OFFSET(0x1866580)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_HIDEWORLDRAIDBOSSCOMPLETEREWARDUI_OFFSET UNITYSDK_OFFSET(0x1866590)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_HIDEWORLDRAIDBOSSCOMPLETEREWARDUI_OFFSET UNITYSDK_OFFSET(0x18665A0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_USEWORLDRAIDCOMMONTOAST_OFFSET UNITYSDK_OFFSET(0x18665B0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_USEWORLDRAIDCOMMONTOAST_OFFSET UNITYSDK_OFFSET(0x18665C0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_ISREPLAYSEASON_OFFSET UNITYSDK_OFFSET(0x18665D0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_ISREPLAYSEASON_OFFSET UNITYSDK_OFFSET(0x18665E0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x18665F0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1866600)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_WORLDRAIDSEASONOPENCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1866610)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_WORLDRAIDSEASONOPENCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1866620)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1866630)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1866640)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1866650)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1866660)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYBANNERSHOW_OFFSET UNITYSDK_OFFSET(0x1866680)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYBANNERSHOW_OFFSET UNITYSDK_OFFSET(0x1866690)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_WORLDRAIDLOBBYENTERSCENARIO_OFFSET UNITYSDK_OFFSET(0x18666A0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_WORLDRAIDLOBBYENTERSCENARIO_OFFSET UNITYSDK_OFFSET(0x18666B0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_USELOBBYTHEME_OFFSET UNITYSDK_OFFSET(0x18666C0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_USELOBBYTHEME_OFFSET UNITYSDK_OFFSET(0x18666D0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYBGPATH_OFFSET UNITYSDK_OFFSET(0x18666E0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYBGPATH_OFFSET UNITYSDK_OFFSET(0x18666F0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYTHEMEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1866710)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYTHEMEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1866720)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_CONDITIONSCENARIOGROUPS_OFFSET UNITYSDK_OFFSET(0x1866740)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_CONDITIONSCENARIOGROUPS_OFFSET UNITYSDK_OFFSET(0x1866750)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_MAPENTEROPERATOR_OFFSET UNITYSDK_OFFSET(0x1866770)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_MAPENTEROPERATOR_OFFSET UNITYSDK_OFFSET(0x1866780)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_USEFAVORRANKBUFF_OFFSET UNITYSDK_OFFSET(0x18667A0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_USEFAVORRANKBUFF_OFFSET UNITYSDK_OFFSET(0x18667B0)
#define MX_DATA_WORLDRAIDSEASONINFO_GET_CARRIERSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x18667C0)
#define MX_DATA_WORLDRAIDSEASONINFO_SET_CARRIERSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x18667D0)
#define MX_DATA_WORLDRAIDSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18667E0)
#define MX_DATA_WORLDRAIDSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1866C40)
#define MX_DATA_WORLDRAIDSEASONINFO_SETTIMEVALUE_OFFSET UNITYSDK_OFFSET(0x18671E0)
#define MX_DATA_WORLDRAIDSEASONINFO_ISSEASONBEFOREOPENPERIOD_OFFSET UNITYSDK_OFFSET(0x18673F0)
#define MX_DATA_WORLDRAIDSEASONINFO_ISSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x1867480)
#define MX_DATA_WORLDRAIDSEASONINFO_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x1867510)
#define MX_DATA_WORLDRAIDSEASONINFO_ISSEASONDELAYENDPERIOD_OFFSET UNITYSDK_OFFSET(0x18675A0)
#define MX_DATA_WORLDRAIDSEASONINFO_ISSEASONLIVEPERIOD_OFFSET UNITYSDK_OFFSET(0x1867630)
#define MX_DATA_WORLDRAIDSEASONINFO_ISBOSSSPAWN_OFFSET UNITYSDK_OFFSET(0x18676C0)
#define MX_DATA_WORLDRAIDSEASONINFO_ISBOSSBEFORESPAWN_OFFSET UNITYSDK_OFFSET(0x1867820)
#define MX_DATA_WORLDRAIDSEASONINFO_ISBOSSELIMINATED_OFFSET UNITYSDK_OFFSET(0x1867940)
#define MX_DATA_WORLDRAIDSEASONINFO_ISPHASEOPEN_OFFSET UNITYSDK_OFFSET(0x1867A60)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidSeasonInfo_TypeDefinitionIndex = 15932;

	class WorldRaidSeasonInfo : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _SeasonId_k__BackingField; // 0x18
		::System::Int64 _PhaseId_k__BackingField; // 0x20
		::System::Int64 _PhaseStartConditionId_k__BackingField; // 0x28
		::FlatData::CurrencyTypes* _EnterTicket_k__BackingField; // 0x30
		::System::DateTime* _BeforehandExposedTime_k__BackingField; // 0x38
		::System::DateTime* _EventContentOpenTime_k__BackingField; // 0x40
		::System::DateTime* _EventContentCloseTime_k__BackingField; // 0x48
		::System::DateTime* _ExtensionTime_k__BackingField; // 0x50
		::System::DateTime* _PhaseStartTime_k__BackingField; // 0x58
		::System::DateTime* _PhaseEndTime_k__BackingField; // 0x60
		::System::Boolean _CanPlayNotSeasonTime_k__BackingField; // 0x68
		::System::Boolean _CanWorldRaidGemEnter_k__BackingField; // 0x69
		::System::Boolean _HideWorldRaidTicketUI_k__BackingField; // 0x6A
		::System::Boolean _HideWorldRaidBossCompleteRewardUI_k__BackingField; // 0x6B
		::System::Boolean _UseWorldRaidCommonToast_k__BackingField; // 0x6C
		::System::Boolean _IsReplaySeason_k__BackingField; // 0x6D
		Il2CppObject* _RaidBossGroup_k__BackingField; // 0x70
		::System::Int64 _WorldRaidSeasonOpenConditionId_k__BackingField; // 0x78
		::System::String* _LobbyPrefabName_k__BackingField; // 0x80
		::System::String* _LobbyBannerImagePath_k__BackingField; // 0x88
		::System::Boolean _LobbyBannerShow_k__BackingField; // 0x90
		::System::Int64 _WorldRaidLobbyEnterScenario_k__BackingField; // 0x98
		::System::Boolean _UseLobbyTheme_k__BackingField; // 0xA0
		::System::String* _LobbyBGPath_k__BackingField; // 0xA8
		::System::String* _LobbyThemePrefabName_k__BackingField; // 0xB0
		Il2CppObject* _ConditionScenarioGroups_k__BackingField; // 0xB8
		::System::String* _MapEnterOperator_k__BackingField; // 0xC0
		::System::Boolean _UseFavorRankBuff_k__BackingField; // 0xC8
		::System::Int64 _CarrierSkillGroupId_k__BackingField; // 0xD0

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PhaseStartConditionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_PHASESTARTCONDITIONID_OFFSET))(nullptr);
		}

		::System::Void set_PhaseStartConditionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_PHASESTARTCONDITIONID_OFFSET))(arg, nullptr);
		}

		::FlatData::CurrencyTypes* get_EnterTicket()
		{
			return (return (::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_ENTERTICKET_OFFSET))(nullptr);
		}

		::System::Void set_EnterTicket(::FlatData::CurrencyTypes* arg)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_ENTERTICKET_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BeforehandExposedTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_BEFOREHANDEXPOSEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_BeforehandExposedTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_BEFOREHANDEXPOSEDTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EventContentOpenTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_EVENTCONTENTOPENTIME_OFFSET))(nullptr);
		}

		::System::Void set_EventContentOpenTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_EVENTCONTENTOPENTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EventContentCloseTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_EVENTCONTENTCLOSETIME_OFFSET))(nullptr);
		}

		::System::Void set_EventContentCloseTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_EVENTCONTENTCLOSETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ExtensionTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_EXTENSIONTIME_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_EXTENSIONTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_PhaseStartTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_PHASESTARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_PhaseStartTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_PHASESTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_PhaseEndTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_PHASEENDTIME_OFFSET))(nullptr);
		}

		::System::Void set_PhaseEndTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_PHASEENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanPlayNotSeasonTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_CANPLAYNOTSEASONTIME_OFFSET))(nullptr);
		}

		::System::Void set_CanPlayNotSeasonTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_CANPLAYNOTSEASONTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanWorldRaidGemEnter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_CANWORLDRAIDGEMENTER_OFFSET))(nullptr);
		}

		::System::Void set_CanWorldRaidGemEnter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_CANWORLDRAIDGEMENTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HideWorldRaidTicketUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_HIDEWORLDRAIDTICKETUI_OFFSET))(nullptr);
		}

		::System::Void set_HideWorldRaidTicketUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_HIDEWORLDRAIDTICKETUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HideWorldRaidBossCompleteRewardUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_HIDEWORLDRAIDBOSSCOMPLETEREWARDUI_OFFSET))(nullptr);
		}

		::System::Void set_HideWorldRaidBossCompleteRewardUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_HIDEWORLDRAIDBOSSCOMPLETEREWARDUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseWorldRaidCommonToast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_USEWORLDRAIDCOMMONTOAST_OFFSET))(nullptr);
		}

		::System::Void set_UseWorldRaidCommonToast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_USEWORLDRAIDCOMMONTOAST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReplaySeason()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_ISREPLAYSEASON_OFFSET))(nullptr);
		}

		::System::Void set_IsReplaySeason(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_ISREPLAYSEASON_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RaidBossGroup()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_RAIDBOSSGROUP_OFFSET))(nullptr);
		}

		::System::Void set_RaidBossGroup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_RAIDBOSSGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WorldRaidSeasonOpenConditionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_WORLDRAIDSEASONOPENCONDITIONID_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidSeasonOpenConditionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_WORLDRAIDSEASONOPENCONDITIONID_OFFSET))(arg, nullptr);
		}

		::System::String* get_LobbyPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYPREFABNAME_OFFSET))(nullptr);
		}

		::System::Void set_LobbyPrefabName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYPREFABNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_LobbyBannerImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYBANNERIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_LobbyBannerImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYBANNERIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_LobbyBannerShow()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYBANNERSHOW_OFFSET))(nullptr);
		}

		::System::Void set_LobbyBannerShow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYBANNERSHOW_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WorldRaidLobbyEnterScenario()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_WORLDRAIDLOBBYENTERSCENARIO_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidLobbyEnterScenario(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_WORLDRAIDLOBBYENTERSCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseLobbyTheme()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_USELOBBYTHEME_OFFSET))(nullptr);
		}

		::System::Void set_UseLobbyTheme(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_USELOBBYTHEME_OFFSET))(arg, nullptr);
		}

		::System::String* get_LobbyBGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYBGPATH_OFFSET))(nullptr);
		}

		::System::Void set_LobbyBGPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYBGPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_LobbyThemePrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_LOBBYTHEMEPREFABNAME_OFFSET))(nullptr);
		}

		::System::Void set_LobbyThemePrefabName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_LOBBYTHEMEPREFABNAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_ConditionScenarioGroups()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_CONDITIONSCENARIOGROUPS_OFFSET))(nullptr);
		}

		::System::Void set_ConditionScenarioGroups(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_CONDITIONSCENARIOGROUPS_OFFSET))(arg, nullptr);
		}

		::System::String* get_MapEnterOperator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_MAPENTEROPERATOR_OFFSET))(nullptr);
		}

		::System::Void set_MapEnterOperator(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_MAPENTEROPERATOR_OFFSET))(str, nullptr);
		}

		::System::Boolean get_UseFavorRankBuff()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_USEFAVORRANKBUFF_OFFSET))(nullptr);
		}

		::System::Void set_UseFavorRankBuff(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_USEFAVORRANKBUFF_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CarrierSkillGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_GET_CARRIERSKILLGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkillGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SET_CARRIERSKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WorldRaidSeasonManageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WorldRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::InteractiveWorldRaidSeasonManageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::InteractiveWorldRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetTimeValue(::MX::Data::Excel::EventContentSeasonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_SETTIMEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSeasonBeforeOpenPeriod(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_ISSEASONBEFOREOPENPERIOD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSeasonOpen(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_ISSEASONOPEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveReward(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_CANRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSeasonDelayEndPeriod(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_ISSEASONDELAYENDPERIOD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSeasonLivePeriod(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_ISSEASONLIVEPERIOD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBossSpawn(::System::DateTime* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_ISBOSSSPAWN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsBossBeforeSpawn(::System::DateTime* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_ISBOSSBEFORESPAWN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsBossEliminated(::System::DateTime* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_ISBOSSELIMINATED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPhaseOpen(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSEASONINFO_ISPHASEOPEN_OFFSET))(arg, nullptr);
		}

	};
}

