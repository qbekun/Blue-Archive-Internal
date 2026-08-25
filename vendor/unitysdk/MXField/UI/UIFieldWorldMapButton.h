#pragma once
#include "../../unitysdk.h"

class MXButton;
class UIWidget;
namespace MXField::Shared::Data { class FieldWorldMapZoneInfo; }
namespace MXField::UI { class UIFieldWorldMapButtonState; }
namespace MX::Data { class FieldContentStageInfo; }

#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_LOCKALLWORLDMAPBUTTONS_OFFSET UNITYSDK_OFFSET(0xEA6CE0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_HANDLECLICKFIELDCONTENTSTAGE_OFFSET UNITYSDK_OFFSET(0xEA6D50)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHELEMENTS_OFFSET UNITYSDK_OFFSET(0xEA7090)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xEA7320)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_HANDLECLICKINFIELD_OFFSET UNITYSDK_OFFSET(0xEA7330)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA7870)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0xEA7880)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_CURRENTZONE_OFFSET UNITYSDK_OFFSET(0xEA78E0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHNEWTAG_OFFSET UNITYSDK_OFFSET(0xEA78F0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xEA7B90)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_EXECUTESCENECHANGE_OFFSET UNITYSDK_OFFSET(0xEA7710)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_STARTIMPL_OFFSET UNITYSDK_OFFSET(0xEA7BA0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHFORLOBBYBATTLE_OFFSET UNITYSDK_OFFSET(0xEA7CC0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHCURRENTZONE_OFFSET UNITYSDK_OFFSET(0xEA8100)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xEA8420)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_DATEIDCACHE_OFFSET UNITYSDK_OFFSET(0xEA8430)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_CURRENTZONE_OFFSET UNITYSDK_OFFSET(0xEA8440)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_EXECUTEINTERACTION_OFFSET UNITYSDK_OFFSET(0xEA7600)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_DATEIDCACHE_OFFSET UNITYSDK_OFFSET(0xEA8450)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESH_OFFSET UNITYSDK_OFFSET(0xEA8460)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xEA8840)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_ZONEINFOS_OFFSET UNITYSDK_OFFSET(0xEA88D0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xEA88E0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_CHECKACTIVEBUTTONROOT_OFFSET UNITYSDK_OFFSET(0xEA87A0)
#define MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_ZONEINFOS_OFFSET UNITYSDK_OFFSET(0xEA8910)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldWorldMapButton_TypeDefinitionIndex = 10763;

	class UIFieldWorldMapButton : public Il2CppObject
	{
	public:
		::System::Int64 groupId; // 0x20
		MXButton* enterButton; // 0x28
		UIWidget* sweepableImage; // 0x30
		::Il2CppArray<::System::Object*>* elements; // 0x38
		::Il2CppArray<::System::Object*>* _ZoneInfos_k__BackingField; // 0x40
		::MXField::Shared::Data::FieldWorldMapZoneInfo* _CurrentZone_k__BackingField; // 0x48
		::MXField::UI::UIFieldWorldMapButtonState* _CurrentState_k__BackingField; // 0x50
		::System::Int64 _DateIdCache_k__BackingField; // 0x58
		::MX::Data::FieldContentStageInfo* _StageInfo_k__BackingField; // 0x60
		::System::Boolean defaultMode; // 0x68

		::System::Void LockAllWorldMapButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_LOCKALLWORLDMAPBUTTONS_OFFSET))(nullptr);
		}

		::System::Void HandleClickFieldContentStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_HANDLECLICKFIELDCONTENTSTAGE_OFFSET))(nullptr);
		}

		::System::Void RefreshElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHELEMENTS_OFFSET))(nullptr);
		}

		::MXField::UI::UIFieldWorldMapButtonState* get_CurrentState()
		{
			return ((::MXField::UI::UIFieldWorldMapButtonState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Void HandleClickInField()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_HANDLECLICKINFIELD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshButtonEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHBUTTONENABLE_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldWorldMapZoneInfo* get_CurrentZone()
		{
			return ((::MXField::Shared::Data::FieldWorldMapZoneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_CURRENTZONE_OFFSET))(nullptr);
		}

		::System::Void RefreshNewTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHNEWTAG_OFFSET))(nullptr);
		}

		::System::Void set_CurrentState(::MXField::UI::UIFieldWorldMapButtonState* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldWorldMapButtonState*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_CURRENTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteSceneChange(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_EXECUTESCENECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void StartImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_STARTIMPL_OFFSET))(nullptr);
		}

		::System::Void RefreshForLobbyBattle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHFORLOBBYBATTLE_OFFSET))(nullptr);
		}

		::System::Void RefreshCurrentZone()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESHCURRENTZONE_OFFSET))(nullptr);
		}

		::MX::Data::FieldContentStageInfo* get_StageInfo()
		{
			return ((::MX::Data::FieldContentStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_DateIdCache(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_DATEIDCACHE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentZone(::MXField::Shared::Data::FieldWorldMapZoneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldWorldMapZoneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_CURRENTZONE_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteInteraction(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_EXECUTEINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DateIdCache()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_DATEIDCACHE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_ONCLICKENTER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ZoneInfos()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_GET_ZONEINFOS_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::FieldContentStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::FieldContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void CheckActiveButtonRoot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_CHECKACTIVEBUTTONROOT_OFFSET))(nullptr);
		}

		::System::Void set_ZoneInfos(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDWORLDMAPBUTTON_SET_ZONEINFOS_OFFSET))(arg, nullptr);
		}

	};
}

