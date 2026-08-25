#pragma once
#include "../../unitysdk.h"

class MXButton;
class UILabel;
class UISlider;
namespace UnityEngine { class GameObject; }
namespace MXField::Shared::Data { class FieldMasteryLevelInfo; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_COREFRESHEXPWIDGETS_OFFSET UNITYSDK_OFFSET(0xE93860)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE93910)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO__REFRESHEXPWIDGETS_B__17_0_OFFSET UNITYSDK_OFFSET(0xE93920)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_REFRESHEXPWIDGETS_OFFSET UNITYSDK_OFFSET(0xE93940)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE93DC0)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_SET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xE93F60)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_HANDLEMASTERLEVELUP_OFFSET UNITYSDK_OFFSET(0xE93F70)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xE94090)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xE940A0)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_STARTIMPL_OFFSET UNITYSDK_OFFSET(0xE940B0)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xE942F0)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0xE94300)
#define MXFIELD_UI_UIFIELDHUD_MASTERYINFO_ONCLICKREWARDINFO_OFFSET UNITYSDK_OFFSET(0xE94460)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldHUD_MasteryInfo_TypeDefinitionIndex = 10691;

	class UIFieldHUD_MasteryInfo : public Il2CppObject
	{
	public:
		MXButton* rewardInfoButton; // 0x20
		UILabel* levelLabel; // 0x28
		UILabel* expLabel; // 0x30
		UISlider* expSlider; // 0x38
		::UnityEngine::GameObject* replayExp; // 0x40
		::System::Single gaugePlayTime; // 0x48
		::System::Int64 _CurrentLevel_k__BackingField; // 0x50
		::System::Int64 _CurrentExp_k__BackingField; // 0x58

		::System::Collections::IEnumerator* CoRefreshExpWidgets(::System::Int32 arg, ::System::Int64 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_COREFRESHEXPWIDGETS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshExpWidgets_b__17_0(::MXField::Shared::Data::FieldMasteryLevelInfo* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Data::FieldMasteryLevelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO__REFRESHEXPWIDGETS_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshExpWidgets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_REFRESHEXPWIDGETS_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_CurrentLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_SET_CURRENTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMasterLevelUp(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_HANDLEMASTERLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_GET_CURRENTLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_GET_CURRENTEXP_OFFSET))(nullptr);
		}

		::System::Void StartImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_STARTIMPL_OFFSET))(nullptr);
		}

		::System::Void set_CurrentExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_SET_CURRENTEXP_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_MASTERYINFO_ONCLICKREWARDINFO_OFFSET))(nullptr);
		}

	};
}

