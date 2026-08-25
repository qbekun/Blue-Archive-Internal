#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EventContentType; }
namespace FlatData { class OpenConditionContent; }
namespace FlatData { class SubEventType; }
namespace FlatData { class RewardTag; }
namespace FlatData { class EventContentReleaseType; }
namespace MX::Data::Excel { class EventContentSeasonExcel; }

#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIEVENTSHORTCUTSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x183DEC0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_SUBICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x183DED0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MAINBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183DEF0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MAINEVENTID_OFFSET UNITYSDK_OFFSET(0x183DF00)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMELOBBYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x183DF10)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_ORIGINALEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183DF20)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x183DF30)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_BEFOREHANDEXPOSEDTIME_OFFSET UNITYSDK_OFFSET(0x183DF40)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_SHIFTMAINBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183DF50)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183DF60)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_SPECIALOPERATIONEVENT_OFFSET UNITYSDK_OFFSET(0x183DF70)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_OPENCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x183DF80)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x183DF90)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_ORIGINALEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183DFA0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_SPECIALOPERATIONEVENT_OFFSET UNITYSDK_OFFSET(0x183DFB0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MAINBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183DFC0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_SHIFTMAINBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183DFE0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_BEFOREHANDEXPOSEDTIME_OFFSET UNITYSDK_OFFSET(0x183E000)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MAINBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183E010)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_CLOSETIME_OFFSET UNITYSDK_OFFSET(0x183E030)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_REWARDTAGPERMANENT_OFFSET UNITYSDK_OFFSET(0x183E040)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183E050)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_SUBICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x183E060)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_BEFOREHANDBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183E070)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_USINGCURRENCYITEMTYPES_OFFSET UNITYSDK_OFFSET(0x183E090)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_REWARDTAGPERMANENT_OFFSET UNITYSDK_OFFSET(0x183E0A0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCONTENTRELEASETYPE_OFFSET UNITYSDK_OFFSET(0x183E0B0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MAINBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183E0C0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMEMISSIONBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183E0D0)
#define MX_DATA_EVENTCONTENTSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183E0E0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x183E830)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCONTENTRELEASETYPE_OFFSET UNITYSDK_OFFSET(0x183E840)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x183E850)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_CLOSETIME_OFFSET UNITYSDK_OFFSET(0x183E860)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCHANGEOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x183E870)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_SHIFTTRIGGERSTAGEID_OFFSET UNITYSDK_OFFSET(0x183E880)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_EXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x183E890)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_SHIFTTRIGGERSTAGEID_OFFSET UNITYSDK_OFFSET(0x183E8A0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_USINGCURRENCYITEMTYPES_OFFSET UNITYSDK_OFFSET(0x183E8B0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_SCENARIOCONTENTCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x183E8C0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_EXTENSIONTIME_OFFSET UNITYSDK_OFFSET(0x183E8D0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_BEFOREHANDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x183E8E0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMEPROLOGSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x183E900)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_ISRETURN_OFFSET UNITYSDK_OFFSET(0x183E910)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMELOBBYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x183E920)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCONTENTSTAGEREWARDIDPERMANENT_OFFSET UNITYSDK_OFFSET(0x183E940)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_OPENCONDITIONCONTENT_OFFSET UNITYSDK_OFFSET(0x183E950)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_CLOSENOTETIME_OFFSET UNITYSDK_OFFSET(0x183E960)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTITEMID_OFFSET UNITYSDK_OFFSET(0x183E970)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_SUBEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x183E980)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_CARDBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183E990)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x183E9A0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTDISPLAY_OFFSET UNITYSDK_OFFSET(0x183E9B0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x183E9C0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_OPENTIME_OFFSET UNITYSDK_OFFSET(0x183E9D0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIEVENTSHORTCUTSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x183E9E0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMEMISSIONBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183E9F0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MAINEVENTID_OFFSET UNITYSDK_OFFSET(0x183EA10)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCHANGEOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x183EA20)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_CLOSENOTETIME_OFFSET UNITYSDK_OFFSET(0x183EA30)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_BEFOREHANDBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183EA40)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_OPENTIME_OFFSET UNITYSDK_OFFSET(0x183EA50)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTDISPLAY_OFFSET UNITYSDK_OFFSET(0x183EA60)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_CARDBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x183EA70)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_SUBEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x183EA90)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x183EAA0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_ISRETURN_OFFSET UNITYSDK_OFFSET(0x183EAB0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMEPROLOGSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x183EAC0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMEMISSIONBGPREFABNAME_OFFSET UNITYSDK_OFFSET(0x183EAD0)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCONTENTSTAGEREWARDIDPERMANENT_OFFSET UNITYSDK_OFFSET(0x183EAF0)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMEVICTORYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x183EB00)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MAINICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x183EB10)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTITEMID_OFFSET UNITYSDK_OFFSET(0x183EB20)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMEVICTORYPREFABNAME_OFFSET UNITYSDK_OFFSET(0x183EB30)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_BEFOREHANDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x183EB50)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_SCENARIOCONTENTCOLLECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x183EB60)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMEMISSIONBGPREFABNAME_OFFSET UNITYSDK_OFFSET(0x183EB70)
#define MX_DATA_EVENTCONTENTSEASONINFO_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x183EB80)
#define MX_DATA_EVENTCONTENTSEASONINFO_SET_MAINICONPARCELPATH_OFFSET UNITYSDK_OFFSET(0x183EB90)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentSeasonInfo_TypeDefinitionIndex = 15778;

	class EventContentSeasonInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _OriginalEventContentId_k__BackingField; // 0x18
		::System::Boolean _IsReturn_k__BackingField; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::System::String* _DevName_k__BackingField; // 0x30
		::FlatData::EventContentType* _EventContentType_k__BackingField; // 0x38
		::FlatData::OpenConditionContent* _OpenConditionContent_k__BackingField; // 0x3C
		Il2CppObject* _UsingCurrencyItemTypes_k__BackingField; // 0x40
		::FlatData::SubEventType* _SubEventType_k__BackingField; // 0x48
		::System::Int64 _MainEventId_k__BackingField; // 0x50
		::System::Int64 _EventChangeOpenCondition_k__BackingField; // 0x58
		::System::Boolean _EventDisplay_k__BackingField; // 0x60
		::System::Int32 _IconOrder_k__BackingField; // 0x64
		::System::Int64 _EventItemId_k__BackingField; // 0x68
		::System::DateTime* _BeforehandExposedTime_k__BackingField; // 0x70
		::System::DateTime* _OpenTime_k__BackingField; // 0x78
		::System::DateTime* _CloseNoteTime_k__BackingField; // 0x80
		::System::DateTime* _CloseTime_k__BackingField; // 0x88
		::System::DateTime* _ExtensionTime_k__BackingField; // 0x90
		::System::String* _MainIconParcelPath_k__BackingField; // 0x98
		::System::String* _SubIconParcelPath_k__BackingField; // 0xA0
		::System::String* _BeforehandBgImagePath_k__BackingField; // 0xA8
		Il2CppObject* _BeforehandScenarioGroupId_k__BackingField; // 0xB0
		::System::String* _MainBannerImagePath_k__BackingField; // 0xB8
		::System::String* _MainBgImagePath_k__BackingField; // 0xC0
		::System::Int64 _MinigamePrologScenarioGroupId_k__BackingField; // 0xC8
		::System::Boolean _SpecialOperationEvent_k__BackingField; // 0xD0
		::System::Int64 _ShiftTriggerStageId_k__BackingField; // 0xD8
		::System::String* _ShiftMainBgImagePath_k__BackingField; // 0xE0
		::System::String* _MinigameLobbyPrefabName_k__BackingField; // 0xE8
		::System::String* _MinigameVictoryPrefabName_k__BackingField; // 0xF0
		::System::String* _MinigameMissionBgPrefabName_k__BackingField; // 0xF8
		::System::String* _MinigameMissionBgImagePath_k__BackingField; // 0x100
		::System::String* _CardBgImagePath_k__BackingField; // 0x108
		::System::Int64 _EventContentStageRewardIdPermanent_k__BackingField; // 0x110
		::FlatData::RewardTag* _RewardTagPermanent_k__BackingField; // 0x118
		::FlatData::EventContentReleaseType* _EventContentReleaseType_k__BackingField; // 0x11C
		::System::Int64 _MiniEventShortCutScenarioModeId_k__BackingField; // 0x120
		::System::Int64 _ScenarioContentCollectionGroupId_k__BackingField; // 0x128

		::System::Void set_MiniEventShortCutScenarioModeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIEVENTSHORTCUTSCENARIOMODEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SubIconParcelPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_SUBICONPARCELPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_MainBannerImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MAINBANNERIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_MainEventId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MAINEVENTID_OFFSET))(arg, nullptr);
		}

		::System::String* get_MinigameLobbyPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMELOBBYPREFABNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_OriginalEventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_ORIGINALEVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_BeforehandExposedTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_BEFOREHANDEXPOSEDTIME_OFFSET))(arg, nullptr);
		}

		::System::String* get_ShiftMainBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_SHIFTMAINBGIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SpecialOperationEvent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_SPECIALOPERATIONEVENT_OFFSET))(nullptr);
		}

		::FlatData::OpenConditionContent* get_OpenConditionContent()
		{
			return (return (::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_OPENCONDITIONCONTENT_OFFSET))(nullptr);
		}

		::System::Void set_IconOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_ICONORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_OriginalEventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_ORIGINALEVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SpecialOperationEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_SPECIALOPERATIONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_MainBgImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MAINBGIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_ShiftMainBgImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_SHIFTMAINBGIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_BeforehandExposedTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_BEFOREHANDEXPOSEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_MainBannerImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MAINBANNERIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_CloseTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_CLOSETIME_OFFSET))(arg, nullptr);
		}

		::FlatData::RewardTag* get_RewardTagPermanent()
		{
			return (return (::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_REWARDTAGPERMANENT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* get_SubIconParcelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_SUBICONPARCELPATH_OFFSET))(nullptr);
		}

		::System::Void set_BeforehandBgImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_BEFOREHANDBGIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_UsingCurrencyItemTypes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_USINGCURRENCYITEMTYPES_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardTagPermanent(::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_REWARDTAGPERMANENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentReleaseType(::FlatData::EventContentReleaseType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentReleaseType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCONTENTRELEASETYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_MainBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MAINBGIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_MinigameMissionBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMEMISSIONBGIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentSeasonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_DevName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_DEVNAME_OFFSET))(str, nullptr);
		}

		::FlatData::EventContentReleaseType* get_EventContentReleaseType()
		{
			return (return (::FlatData::EventContentReleaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCONTENTRELEASETYPE_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_CloseTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_CLOSETIME_OFFSET))(nullptr);
		}

		::System::Int64 get_EventChangeOpenCondition()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCHANGEOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_ShiftTriggerStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_SHIFTTRIGGERSTAGEID_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_EXTENSIONTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShiftTriggerStageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_SHIFTTRIGGERSTAGEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_UsingCurrencyItemTypes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_USINGCURRENCYITEMTYPES_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioContentCollectionGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_SCENARIOCONTENTCOLLECTIONGROUPID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ExtensionTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_EXTENSIONTIME_OFFSET))(nullptr);
		}

		::System::Void set_BeforehandScenarioGroupId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_BEFOREHANDSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MinigamePrologScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMEPROLOGSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_ISRETURN_OFFSET))(nullptr);
		}

		::System::Void set_MinigameLobbyPrefabName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMELOBBYPREFABNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_EventContentStageRewardIdPermanent()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTCONTENTSTAGEREWARDIDPERMANENT_OFFSET))(nullptr);
		}

		::System::Void set_OpenConditionContent(::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_OPENCONDITIONCONTENT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_CloseNoteTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_CLOSENOTETIME_OFFSET))(nullptr);
		}

		::System::Int64 get_EventItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTITEMID_OFFSET))(nullptr);
		}

		::System::Void set_SubEventType(::FlatData::SubEventType* arg)
		{
			((::System::Void(*)(::FlatData::SubEventType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_SUBEVENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_CardBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_CARDBGIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Int32 get_IconOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_ICONORDER_OFFSET))(nullptr);
		}

		::System::Void set_EventDisplay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_OpenTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_OPENTIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MiniEventShortCutScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIEVENTSHORTCUTSCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Void set_MinigameMissionBgImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMEMISSIONBGIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Int64 get_MainEventId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MAINEVENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventChangeOpenCondition(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCHANGEOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_CloseNoteTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_CLOSENOTETIME_OFFSET))(arg, nullptr);
		}

		::System::String* get_BeforehandBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_BEFOREHANDBGIMAGEPATH_OFFSET))(nullptr);
		}

		::System::DateTime* get_OpenTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_OPENTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_EventDisplay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_EVENTDISPLAY_OFFSET))(nullptr);
		}

		::System::Void set_CardBgImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_CARDBGIMAGEPATH_OFFSET))(str, nullptr);
		}

		::FlatData::SubEventType* get_SubEventType()
		{
			return (return (::FlatData::SubEventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_SUBEVENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentType(::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsReturn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_ISRETURN_OFFSET))(arg, nullptr);
		}

		::System::Void set_MinigamePrologScenarioGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMEPROLOGSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MinigameMissionBgPrefabName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMEMISSIONBGPREFABNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_EventContentStageRewardIdPermanent(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTCONTENTSTAGEREWARDIDPERMANENT_OFFSET))(arg, nullptr);
		}

		::System::String* get_MinigameVictoryPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMEVICTORYPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_MainIconParcelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MAINICONPARCELPATH_OFFSET))(nullptr);
		}

		::System::Void set_EventItemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_EVENTITEMID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MinigameVictoryPrefabName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MINIGAMEVICTORYPREFABNAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_BeforehandScenarioGroupId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_BEFOREHANDSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioContentCollectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_SCENARIOCONTENTCOLLECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_MinigameMissionBgPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_MINIGAMEMISSIONBGPREFABNAME_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_GET_DEVNAME_OFFSET))(nullptr);
		}

		::System::Void set_MainIconParcelPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSEASONINFO_SET_MAINICONPARCELPATH_OFFSET))(str, nullptr);
		}

	};
}

