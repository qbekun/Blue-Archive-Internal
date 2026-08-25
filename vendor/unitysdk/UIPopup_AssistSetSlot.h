#pragma once
#include "unitysdk.h"

class UIAssistScrollViewController;
class UICharacterSort;
namespace UnityEngine { class GameObject; }
class UICharacterInfo;
class MXButton;
class MXToggle;
class IntTabController;
class UIAssistSetSlotNameSearch;
class UILabel;
class CharacterObject;
namespace FlatData { class EchelonType; }
class UIDragScrollView;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class ClanAssistSlotDB; }
class UIAssistSetSlot;
class UIPopup_System;
class SortingRule;
class NameSearchResult;

#define UIPOPUP_ASSISTSETSLOT_SETCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x220DE90)
#define UIPOPUP_ASSISTSETSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x220A070)
#define UIPOPUP_ASSISTSETSLOT_SET_INBOX_OFFSET UNITYSDK_OFFSET(0x220E2E0)
#define UIPOPUP_ASSISTSETSLOT_GET_INBOX_OFFSET UNITYSDK_OFFSET(0x220E300)
#define UIPOPUP_ASSISTSETSLOT_GET_MOVETOCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x220E310)
#define UIPOPUP_ASSISTSETSLOT_HANDLECLANSETASSISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x220E350)
#define UIPOPUP_ASSISTSETSLOT__ONCLICKOK_B__46_0_OFFSET UNITYSDK_OFFSET(0x220E450)
#define UIPOPUP_ASSISTSETSLOT_ONCLICKCHARACTERSLOT_OFFSET UNITYSDK_OFFSET(0x220E490)
#define UIPOPUP_ASSISTSETSLOT_ONCLICKCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x220E660)
#define UIPOPUP_ASSISTSETSLOT_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x220DED0)
#define UIPOPUP_ASSISTSETSLOT_SET_MOVETOCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x220E8D0)
#define UIPOPUP_ASSISTSETSLOT_SET_CURRENTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x220E910)
#define UIPOPUP_ASSISTSETSLOT_GET_CURRENTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x220E930)
#define UIPOPUP_ASSISTSETSLOT__ONCLICKOK_B__46_1_OFFSET UNITYSDK_OFFSET(0x220E940)
#define UIPOPUP_ASSISTSETSLOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x220EA60)
#define UIPOPUP_ASSISTSETSLOT_ONSORT_OFFSET UNITYSDK_OFFSET(0x220EC30)
#define UIPOPUP_ASSISTSETSLOT_ONCHANGESCROLLVIEWSIZETOGGLE_OFFSET UNITYSDK_OFFSET(0x220F860)
#define UIPOPUP_ASSISTSETSLOT__ONCLICKOK_B__46_2_OFFSET UNITYSDK_OFFSET(0x220FBA0)
#define UIPOPUP_ASSISTSETSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x220FCB0)
#define UIPOPUP_ASSISTSETSLOT_REQSETASSIST_OFFSET UNITYSDK_OFFSET(0x220FBB0)
#define UIPOPUP_ASSISTSETSLOT_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x220E440)
#define UIPOPUP_ASSISTSETSLOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22101D0)
#define UIPOPUP_ASSISTSETSLOT_CLEARSCROLLVIEWITEMS_OFFSET UNITYSDK_OFFSET(0x220E870)
#define UIPOPUP_ASSISTSETSLOT_ADDSCROLLVIEWITEMS_OFFSET UNITYSDK_OFFSET(0x220F7F0)
#define UIPOPUP_ASSISTSETSLOT_ONLONGPRESSCHARACTERSLOT_OFFSET UNITYSDK_OFFSET(0x2210220)
#define UIPOPUP_ASSISTSETSLOT__ONSORT_B__36_1_OFFSET UNITYSDK_OFFSET(0x2210270)
#define UIPOPUP_ASSISTSETSLOT_OPENCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x220E6B0)
#define UIPOPUP_ASSISTSETSLOT_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2210290)
#define UIPOPUP_ASSISTSETSLOT_ONSEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x22104C0)
#define UIPOPUP_ASSISTSETSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22104F0)

	inline static constexpr unsigned int UIPopup_AssistSetSlot_TypeDefinitionIndex = 4367;

	class UIPopup_AssistSetSlot : public Il2CppObject
	{
	public:
		UIAssistScrollViewController* scrollView; // 0xD8
		UIAssistScrollViewController* scrollViewSmall; // 0xE0
		UICharacterSort* uiCharacterSort; // 0xE8
		::UnityEngine::GameObject* characterInfoEmpty; // 0xF0
		UICharacterInfo* characterInfo; // 0xF8
		MXButton* characterDetailButton; // 0x100
		MXButton* okButton; // 0x108
		MXButton* cancelButton; // 0x110
		MXButton* buttonX; // 0x118
		MXToggle* scrollViewToggle; // 0x120
		IntTabController* tabController; // 0x128
		UIAssistSetSlotNameSearch* nameSearch; // 0x130
		UILabel* emptyResult; // 0x138
		Il2CppObject* collection; // 0x140
		::System::Int32 columnCount; // 0x0
		CharacterObject* selectedCharacter; // 0x148
		::System::Action* onRequestMyAssistList; // 0x150
		Il2CppObject* onAssistRewardPopup; // 0x158
		::System::Int32 slotNumber; // 0x160
		::FlatData::EchelonType* echelonType; // 0x164
		UIAssistScrollViewController* _CurrentScrollView_k__BackingField; // 0x168
		UIDragScrollView* _inBox_k__BackingField; // 0x170
		::System::Boolean _MoveToCharacterDetail_k__BackingField; // 0x0

		::System::Void SetCharacterInfo(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_SETCHARACTERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::FlatData::EchelonType* arg2, ::System::Action* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int32, ::FlatData::EchelonType*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_inBox(UIDragScrollView* arg)
		{
			((::System::Void(*)(UIDragScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_SET_INBOX_OFFSET))(arg, nullptr);
		}

		UIDragScrollView* get_inBox()
		{
			return ((UIDragScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_GET_INBOX_OFFSET))(nullptr);
		}

		::System::Boolean get_MoveToCharacterDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_GET_MOVETOCHARACTERDETAIL_OFFSET))(nullptr);
		}

		::System::Boolean HandleClanSetAssistResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_HANDLECLANSETASSISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnClickOk_b__46_0(::MX::GameLogic::DBModel::ClanAssistSlotDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ClanAssistSlotDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT__ONCLICKOK_B__46_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCharacterSlot(UIAssistSetSlot* arg)
		{
			((::System::Void(*)(UIAssistSetSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONCLICKCHARACTERSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCharacterDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONCLICKCHARACTERDETAIL_OFFSET))(nullptr);
		}

		::System::Void InitScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_INITSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void set_MoveToCharacterDetail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_SET_MOVETOCHARACTERDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentScrollView(UIAssistScrollViewController* arg)
		{
			((::System::Void(*)(UIAssistScrollViewController*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_SET_CURRENTSCROLLVIEW_OFFSET))(arg, nullptr);
		}

		UIAssistScrollViewController* get_CurrentScrollView()
		{
			return ((UIAssistScrollViewController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_GET_CURRENTSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void _OnClickOk_b__46_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT__ONCLICKOK_B__46_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnChangeScrollViewSizeToggle(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONCHANGESCROLLVIEWSIZETOGGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickOk_b__46_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT__ONCLICKOK_B__46_2_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ReqSetAssist(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_REQSETASSIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ClearScrollViewItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_CLEARSCROLLVIEWITEMS_OFFSET))(nullptr);
		}

		::System::Void AddScrollViewItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ADDSCROLLVIEWITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void OnLongPressCharacterSlot(UIAssistSetSlot* arg)
		{
			((::System::Void(*)(UIAssistSetSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONLONGPRESSCHARACTERSLOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnSort_b__36_1(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT__ONSORT_B__36_1_OFFSET))(arg, nullptr);
		}

		::System::Void OpenCharacterDetail(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_OPENCHARACTERDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_ONSEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTSETSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

