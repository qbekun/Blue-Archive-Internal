#pragma once
#include "../../unitysdk.h"

class UITexture;
class UILabel;
class MXButton;
namespace MXField::UI { class UIFieldLobbyEnterButton; }
namespace MXField::UI { class UIFieldLobby_ButtonGroup; }
namespace MXField::Shared::Data { class FieldSeasonInfo; }
namespace MXField::Core::Save { class FieldSaveRepository; }
class UIEventPlayGuide;
namespace MXField::UI { class UIFieldLobbyFreeModeButton; }
namespace MXField::Shared::Data { class FieldCurtainCallFreeModeInfo; }
namespace MXField::Shared::Model { class FieldDateHistoryDB; }
namespace MXField::UI { class UIFieldLobbyBattleButton; }

#define MXFIELD_UI_UIFIELDLOBBY_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0xE9A5F0)
#define MXFIELD_UI_UIFIELDLOBBY__ONCLICKGUIDE_B__46_0_OFFSET UNITYSDK_OFFSET(0xE9A7C0)
#define MXFIELD_UI_UIFIELDLOBBY_SET_SAVEREPOSITORY_OFFSET UNITYSDK_OFFSET(0xE9A880)
#define MXFIELD_UI_UIFIELDLOBBY_GET_SHOULDPLAYBGM2ND_OFFSET UNITYSDK_OFFSET(0xE9A8A0)
#define MXFIELD_UI_UIFIELDLOBBY_CREATESTACKUIFROMEVENT_OFFSET UNITYSDK_OFFSET(0xE9A990)
#define MXFIELD_UI_UIFIELDLOBBY_CHECKSUBBUTTONSACTIVE_OFFSET UNITYSDK_OFFSET(0xE9AA20)
#define MXFIELD_UI_UIFIELDLOBBY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE9B0D0)
#define MXFIELD_UI_UIFIELDLOBBY_REFRESH_OFFSET UNITYSDK_OFFSET(0xE9B740)
#define MXFIELD_UI_UIFIELDLOBBY_GET_FREEMODEBUTTON_OFFSET UNITYSDK_OFFSET(0xE9B060)
#define MXFIELD_UI_UIFIELDLOBBY_SAVEDATEHISTORY_OFFSET UNITYSDK_OFFSET(0xE9BB40)
#define MXFIELD_UI_UIFIELDLOBBY_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xE9BDA0)
#define MXFIELD_UI_UIFIELDLOBBY_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0xE9BDC0)
#define MXFIELD_UI_UIFIELDLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0xE9BE50)
#define MXFIELD_UI_UIFIELDLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xE9BE60)
#define MXFIELD_UI_UIFIELDLOBBY_SETTITLETEXTURE_OFFSET UNITYSDK_OFFSET(0xE9B620)
#define MXFIELD_UI_UIFIELDLOBBY__CHECKSUBBUTTONSACTIVE_B__45_1_OFFSET UNITYSDK_OFFSET(0xE9BFB0)
#define MXFIELD_UI_UIFIELDLOBBY_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xE9BFF0)
#define MXFIELD_UI_UIFIELDLOBBY__CHECKSUBBUTTONSACTIVE_B__45_0_OFFSET UNITYSDK_OFFSET(0xE9C000)
#define MXFIELD_UI_UIFIELDLOBBY_ONCLICKGUIDE_OFFSET UNITYSDK_OFFSET(0xE9C030)
#define MXFIELD_UI_UIFIELDLOBBY_GET_BATTLEBUTTON_OFFSET UNITYSDK_OFFSET(0xE9AFF0)
#define MXFIELD_UI_UIFIELDLOBBY_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0xE9C100)
#define MXFIELD_UI_UIFIELDLOBBY_GET_CURRENTDATEID_OFFSET UNITYSDK_OFFSET(0xE9B530)
#define MXFIELD_UI_UIFIELDLOBBY_GET_OPENWORLDMAP_OFFSET UNITYSDK_OFFSET(0xE9C630)
#define MXFIELD_UI_UIFIELDLOBBY_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0xE9C640)
#define MXFIELD_UI_UIFIELDLOBBY_ONCLICKMISSION_OFFSET UNITYSDK_OFFSET(0xE9C650)
#define MXFIELD_UI_UIFIELDLOBBY_START_OFFSET UNITYSDK_OFFSET(0xE9C7E0)
#define MXFIELD_UI_UIFIELDLOBBY_GET_CURRENTDATEINDEX_OFFSET UNITYSDK_OFFSET(0xE9CC40)
#define MXFIELD_UI_UIFIELDLOBBY_SET_CURRENTDATEINDEX_OFFSET UNITYSDK_OFFSET(0xE9A600)
#define MXFIELD_UI_UIFIELDLOBBY_GET_SAVEREPOSITORY_OFFSET UNITYSDK_OFFSET(0xE9CC50)
#define MXFIELD_UI_UIFIELDLOBBY_SET_OPENWORLDMAP_OFFSET UNITYSDK_OFFSET(0xE9CC60)
#define MXFIELD_UI_UIFIELDLOBBY_GET_MISSIONBUTTON_OFFSET UNITYSDK_OFFSET(0xE9CC20)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldLobby_TypeDefinitionIndex = 10722;

	class UIFieldLobby : public Il2CppObject
	{
	public:
		UITexture* titleTexture; // 0xE8
		UILabel* dateLabel; // 0xF0
		UILabel* enterButtonLabel; // 0xF8
		MXButton* guideButton; // 0x100
		MXButton* prevButton; // 0x108
		MXButton* nextButton; // 0x110
		::MXField::UI::UIFieldLobbyEnterButton* enterButton; // 0x118
		::MXField::UI::UIFieldLobby_ButtonGroup* _type3ButtonGroup; // 0x120
		::MXField::UI::UIFieldLobby_ButtonGroup* _type1ButtonGroup; // 0x128
		::MXField::UI::UIFieldLobby_ButtonGroup* CurrentButtonGroup; // 0x130
		::System::Boolean _OpenWorldMap_k__BackingField; // 0x138
		::MXField::Shared::Data::FieldSeasonInfo* _SeasonInfo_k__BackingField; // 0x140
		::MXField::Core::Save::FieldSaveRepository* _SaveRepository_k__BackingField; // 0x148
		::System::Int32 _currentDateIndex; // 0x150
		Il2CppObject* _seasonPlayableDates; // 0x158

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Void _OnClickGuide_b__46_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY__ONCLICKGUIDE_B__46_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveRepository(::MXField::Core::Save::FieldSaveRepository* arg)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_SET_SAVEREPOSITORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShouldPlayBGM2nd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_SHOULDPLAYBGM2ND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUIFromEvent()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_CREATESTACKUIFROMEVENT_OFFSET))(nullptr);
		}

		::System::Void CheckSubButtonsActive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_CHECKSUBBUTTONSACTIVE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXField::Core::Save::FieldSaveRepository* arg)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_REFRESH_OFFSET))(nullptr);
		}

		::MXField::UI::UIFieldLobbyFreeModeButton* get_freeModeButton()
		{
			return ((::MXField::UI::UIFieldLobbyFreeModeButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_FREEMODEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SaveDateHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_SAVEDATEHISTORY_OFFSET))(nullptr);
		}

		::System::Void set_SeasonInfo(::MXField::Shared::Data::FieldSeasonInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void SetTitleTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_SETTITLETEXTURE_OFFSET))(nullptr);
		}

		::System::Boolean _CheckSubButtonsActive_b__45_1(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY__CHECKSUBBUTTONSACTIVE_B__45_1_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldSeasonInfo* get_SeasonInfo()
		{
			return ((::MXField::Shared::Data::FieldSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Boolean _CheckSubButtonsActive_b__45_0(::MXField::Shared::Model::FieldDateHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Model::FieldDateHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY__CHECKSUBBUTTONSACTIVE_B__45_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_ONCLICKGUIDE_OFFSET))(nullptr);
		}

		::MXField::UI::UIFieldLobbyBattleButton* get_battleButton()
		{
			return ((::MXField::UI::UIFieldLobbyBattleButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_BATTLEBUTTON_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_CURRENTDATEID_OFFSET))(nullptr);
		}

		::System::Boolean get_OpenWorldMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_OPENWORLDMAP_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void OnClickMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_ONCLICKMISSION_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_START_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentDateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_CURRENTDATEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CurrentDateIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_SET_CURRENTDATEINDEX_OFFSET))(arg, nullptr);
		}

		::MXField::Core::Save::FieldSaveRepository* get_SaveRepository()
		{
			return ((::MXField::Core::Save::FieldSaveRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_SAVEREPOSITORY_OFFSET))(nullptr);
		}

		::System::Void set_OpenWorldMap(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_SET_OPENWORLDMAP_OFFSET))(arg, nullptr);
		}

		MXButton* get_missionButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBY_GET_MISSIONBUTTON_OFFSET))(nullptr);
		}

	};
}

