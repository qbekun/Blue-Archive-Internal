#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class ClanSearchPopup;
class ClanFilterPopup;
class ClanCreatePopup;
namespace FlatData { class ClanSearchOption; }
namespace FlatData { class ClanJoinOption; }
class ClanScrollController;
class ClanJoinFilter;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICLANSEARCHLIST_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x2341A40)
#define UICLANSEARCHLIST_SETSEARCHCLANLIST_OFFSET UNITYSDK_OFFSET(0x2341A60)
#define UICLANSEARCHLIST_ONFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x2341ED0)
#define UICLANSEARCHLIST_HANDLECLANSERACHLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2341FC0)
#define UICLANSEARCHLIST___N__0_OFFSET UNITYSDK_OFFSET(0x2342040)
#define UICLANSEARCHLIST_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2342050)
#define UICLANSEARCHLIST_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2342160)
#define UICLANSEARCHLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23421F0)
#define UICLANSEARCHLIST_ONCLICKCLANSEARCHRESULT_OFFSET UNITYSDK_OFFSET(0x23422A0)
#define UICLANSEARCHLIST_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2342390)
#define UICLANSEARCHLIST_ONCLICKCLANCREATE_OFFSET UNITYSDK_OFFSET(0x23425D0)
#define UICLANSEARCHLIST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2342610)
#define UICLANSEARCHLIST_SET_JOINFILTER_OFFSET UNITYSDK_OFFSET(0x2342870)
#define UICLANSEARCHLIST_GET_JOINFILTER_OFFSET UNITYSDK_OFFSET(0x2342880)
#define UICLANSEARCHLIST_REQUESTCLANSEARCH_OFFSET UNITYSDK_OFFSET(0x2342890)
#define UICLANSEARCHLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2342960)
#define UICLANSEARCHLIST_REFRESHCLANSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x2341D00)
#define UICLANSEARCHLIST_ONCLICKCLANLISTREFRESH_OFFSET UNITYSDK_OFFSET(0x2342A40)
#define UICLANSEARCHLIST_ONCLICKAUTOJOIN_OFFSET UNITYSDK_OFFSET(0x2342A50)
#define UICLANSEARCHLIST_ONSERACH_OFFSET UNITYSDK_OFFSET(0x2342E40)
#define UICLANSEARCHLIST_ONCLICKCLANSEARCHCANCEL_OFFSET UNITYSDK_OFFSET(0x2342510)
#define UICLANSEARCHLIST_ONCLICKCLANSEARCH_OFFSET UNITYSDK_OFFSET(0x2342F40)
#define UICLANSEARCHLIST_JOINFILTERSTATECHECK_OFFSET UNITYSDK_OFFSET(0x2341F50)
#define UICLANSEARCHLIST_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x23429D0)
#define UICLANSEARCHLIST_ONCLICKCLANSEARCHFILTER_OFFSET UNITYSDK_OFFSET(0x2343040)
#define UICLANSEARCHLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x23430D0)

	inline static constexpr unsigned int UIClanSearchList_TypeDefinitionIndex = 4979;

	class UIClanSearchList : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		MXButton* clanCreateButton; // 0xE0
		MXButton* autoJoinButton; // 0xE8
		MXButton* clanSearchButton; // 0xF0
		MXButton* clanCancelButton; // 0xF8
		MXButton* clanSearchResultButton; // 0x100
		UILabel* clanSearchResultText; // 0x108
		MXButton* clanSearchFilterButton; // 0x110
		MXButton* clanListRefreshButton; // 0x118
		::UnityEngine::GameObject* filterOn; // 0x120
		::UnityEngine::GameObject* filterOff; // 0x128
		ClanSearchPopup* clanSearchPopup; // 0x130
		ClanFilterPopup* clanFilterPopup; // 0x138
		ClanCreatePopup* clanCreatePopup; // 0x140
		::System::String* searchStr; // 0x148
		::FlatData::ClanSearchOption* searchOption; // 0x150
		::FlatData::ClanJoinOption* joinOption; // 0x154
		Il2CppObject* searchClanList; // 0x158
		ClanScrollController* controller; // 0x160
		ClanJoinFilter* _JoinFilter_k__BackingField; // 0x168

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void SetSearchClanList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_SETSEARCHCLANLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnFilterChanged(ClanJoinFilter* arg)
		{
			((::System::Void(*)(ClanJoinFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONFILTERCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleClanSerachListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_HANDLECLANSERACHLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST___N__0_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClanSearchResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONCLICKCLANSEARCHRESULT_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickClanCreate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONCLICKCLANCREATE_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_JoinFilter(ClanJoinFilter* arg)
		{
			((::System::Void(*)(ClanJoinFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_SET_JOINFILTER_OFFSET))(arg, nullptr);
		}

		ClanJoinFilter* get_JoinFilter()
		{
			return ((ClanJoinFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_GET_JOINFILTER_OFFSET))(nullptr);
		}

		::System::Void RequestClanSearch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_REQUESTCLANSEARCH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshClanScrollItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_REFRESHCLANSCROLLITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClanListRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONCLICKCLANLISTREFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoJoin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONCLICKAUTOJOIN_OFFSET))(nullptr);
		}

		::System::Void OnSerach(::System::String* str, ::FlatData::ClanSearchOption* arg)
		{
			((::System::Void(*)(::System::String*, ::FlatData::ClanSearchOption*, ::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONSERACH_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnClickClanSearchCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONCLICKCLANSEARCHCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickClanSearch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONCLICKCLANSEARCH_OFFSET))(nullptr);
		}

		::System::Void JoinFilterStateCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_JOINFILTERSTATECHECK_OFFSET))(nullptr);
		}

		ClanScrollController* get_scrollController()
		{
			return ((ClanScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnClickClanSearchFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_ONCLICKCLANSEARCHFILTER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLANSEARCHLIST_AWAKE_OFFSET))(nullptr);
		}

	};

