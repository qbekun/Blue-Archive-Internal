#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIFriendsSearchLevelFilterPopup;
class UIFriendsSearchCodePopup;
namespace FlatData { class FriendSearchLevelOption; }
class UIFriendsManagement;
namespace UnityEngine { class MeshCollider; }

#define UIFRIENDSLISTSEARCHTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x256FC40)
#define UIFRIENDSLISTSEARCHTAB_AWAKE_OFFSET UNITYSDK_OFFSET(0x256FC50)
#define UIFRIENDSLISTSEARCHTAB_ONCLICKSEARCH_OFFSET UNITYSDK_OFFSET(0x2570230)
#define UIFRIENDSLISTSEARCHTAB_ONCLICKFILTER_OFFSET UNITYSDK_OFFSET(0x2570370)
#define UIFRIENDSLISTSEARCHTAB_CLEARSEARCHRESULT_OFFSET UNITYSDK_OFFSET(0x25706E0)
#define UIFRIENDSLISTSEARCHTAB_GET_MANAGEMENTUI_OFFSET UNITYSDK_OFFSET(0x2570790)
#define UIFRIENDSLISTSEARCHTAB_GETREFRESHBUTTONCOLLIDER_OFFSET UNITYSDK_OFFSET(0x2570820)
#define UIFRIENDSLISTSEARCHTAB_ONCLICKSEARCHRESULT_OFFSET UNITYSDK_OFFSET(0x25708B0)
#define UIFRIENDSLISTSEARCHTAB_ONCLICKCANCELSEARCH_OFFSET UNITYSDK_OFFSET(0x25706F0)
#define UIFRIENDSLISTSEARCHTAB_ONCLICKREFRESH_OFFSET UNITYSDK_OFFSET(0x25709A0)
#define UIFRIENDSLISTSEARCHTAB_ONCONFIRMSEARCHCODE_OFFSET UNITYSDK_OFFSET(0x2570D20)
#define UIFRIENDSLISTSEARCHTAB_SETFILTERLABEL_OFFSET UNITYSDK_OFFSET(0x2570DB0)
#define UIFRIENDSLISTSEARCHTAB_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2570E90)
#define UIFRIENDSLISTSEARCHTAB_ONCHANGEFILTER_OFFSET UNITYSDK_OFFSET(0x2570F60)

	inline static constexpr unsigned int UIFriendsListSearchTab_TypeDefinitionIndex = 6154;

	class UIFriendsListSearchTab : public Il2CppObject
	{
	public:
		MXButton* searchButton; // 0x18
		MXButton* searchResultButton; // 0x20
		MXButton* cancelSearchButton; // 0x28
		UILabel* searchResultLabel; // 0x30
		MXButton* refreshButton; // 0x38
		MXButton* filterButton; // 0x40
		UILabel* filterLabel; // 0x48
		UIFriendsSearchLevelFilterPopup* filterPopup; // 0x50
		UIFriendsSearchCodePopup* searchPopup; // 0x58
		::FlatData::FriendSearchLevelOption* filterOption; // 0x60
		UIFriendsManagement* managementUI; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickSearch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_ONCLICKSEARCH_OFFSET))(nullptr);
		}

		::System::Void OnClickFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_ONCLICKFILTER_OFFSET))(nullptr);
		}

		::System::Void ClearSearchResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_CLEARSEARCHRESULT_OFFSET))(nullptr);
		}

		UIFriendsManagement* get_ManagementUI()
		{
			return ((UIFriendsManagement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_GET_MANAGEMENTUI_OFFSET))(nullptr);
		}

		::UnityEngine::MeshCollider* GetRefreshButtonCollider()
		{
			return ((::UnityEngine::MeshCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_GETREFRESHBUTTONCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void OnClickSearchResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_ONCLICKSEARCHRESULT_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelSearch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_ONCLICKCANCELSEARCH_OFFSET))(nullptr);
		}

		::System::Void OnClickRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_ONCLICKREFRESH_OFFSET))(nullptr);
		}

		::System::Void OnConfirmSearchCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_ONCONFIRMSEARCHCODE_OFFSET))(str, nullptr);
		}

		::System::Void SetFilterLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_SETFILTERLABEL_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnChangeFilter(::FlatData::FriendSearchLevelOption* arg)
		{
			((::System::Void(*)(::FlatData::FriendSearchLevelOption*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSEARCHTAB_ONCHANGEFILTER_OFFSET))(arg, nullptr);
		}

	};

