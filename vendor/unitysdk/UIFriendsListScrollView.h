#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class FriendTab;
class SortingRule;
class SortingOrder;
class MXButton;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_FilterSort;

#define UIFRIENDSLISTSCROLLVIEW__AWAKE_B__40_1_OFFSET UNITYSDK_OFFSET(0x256D740)
#define UIFRIENDSLISTSCROLLVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x256D860)
#define UIFRIENDSLISTSCROLLVIEW_SETREDDOTS_OFFSET UNITYSDK_OFFSET(0x256DA60)
#define UIFRIENDSLISTSCROLLVIEW_SETSORTINGINFO_OFFSET UNITYSDK_OFFSET(0x256DA90)
#define UIFRIENDSLISTSCROLLVIEW_GET_SORTBUTTONS_OFFSET UNITYSDK_OFFSET(0x256DDD0)
#define UIFRIENDSLISTSCROLLVIEW_SET_TAB_OFFSET UNITYSDK_OFFSET(0x256E660)
#define UIFRIENDSLISTSCROLLVIEW_GET_ORDERBUTTONS_OFFSET UNITYSDK_OFFSET(0x256E980)
#define UIFRIENDSLISTSCROLLVIEW_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x256E9B0)
#define UIFRIENDSLISTSCROLLVIEW_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0x256E9C0)
#define UIFRIENDSLISTSCROLLVIEW_HANDLEFRIENDSEARCHNETWORKRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x256E9D0)
#define UIFRIENDSLISTSCROLLVIEW_HANDLEFRIENDDBSSYNCNETWORKRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x256EA60)
#define UIFRIENDSLISTSCROLLVIEW__ONCLICKSORT_B__51_1_OFFSET UNITYSDK_OFFSET(0x256F1A0)
#define UIFRIENDSLISTSCROLLVIEW_GET_MYFRIENDCOUNTS_OFFSET UNITYSDK_OFFSET(0x256F3E0)
#define UIFRIENDSLISTSCROLLVIEW_GET_ASCENDINGICONS_OFFSET UNITYSDK_OFFSET(0x256DD70)
#define UIFRIENDSLISTSCROLLVIEW_GET_SORTINGTYPELABELS_OFFSET UNITYSDK_OFFSET(0x256DD40)
#define UIFRIENDSLISTSCROLLVIEW_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0x256F410)
#define UIFRIENDSLISTSCROLLVIEW_REMOVETARGET_OFFSET UNITYSDK_OFFSET(0x256EB40)
#define UIFRIENDSLISTSCROLLVIEW_SETCOUNTS_OFFSET UNITYSDK_OFFSET(0x256EC70)
#define UIFRIENDSLISTSCROLLVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x256F510)
#define UIFRIENDSLISTSCROLLVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x256F670)
#define UIFRIENDSLISTSCROLLVIEW__ONCLICKSORT_B__51_0_OFFSET UNITYSDK_OFFSET(0x256F900)
#define UIFRIENDSLISTSCROLLVIEW_GET_DESCENDINGICONS_OFFSET UNITYSDK_OFFSET(0x256DDA0)
#define UIFRIENDSLISTSCROLLVIEW_SORT_OFFSET UNITYSDK_OFFSET(0x256F1B0)
#define UIFRIENDSLISTSCROLLVIEW_SETLIST_OFFSET UNITYSDK_OFFSET(0x256E810)
#define UIFRIENDSLISTSCROLLVIEW_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x256E760)
#define UIFRIENDSLISTSCROLLVIEW_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0x256F9C0)
#define UIFRIENDSLISTSCROLLVIEW__AWAKE_B__40_0_OFFSET UNITYSDK_OFFSET(0x256F9D0)
#define UIFRIENDSLISTSCROLLVIEW_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0x256FAF0)
#define UIFRIENDSLISTSCROLLVIEW_INITMONOS_OFFSET UNITYSDK_OFFSET(0x256DE00)
#define UIFRIENDSLISTSCROLLVIEW_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x256FB10)
#define UIFRIENDSLISTSCROLLVIEW_GET_TAB_OFFSET UNITYSDK_OFFSET(0x256FB20)

	inline static constexpr unsigned int UIFriendsListScrollView_TypeDefinitionIndex = 6153;

	class UIFriendsListScrollView : public ::System::Xml::XmlCDataSection
	{
	public:
		::UnityEngine::GameObject* NoListDisplay; // 0x90
		UILabel* SentReqCount; // 0x98
		UILabel* ReceivedReqCount; // 0xA0
		::UnityEngine::GameObject* ReceivedReqNoti; // 0xA8
		::Il2CppArray<::System::Object*>* InfoTops; // 0xB0
		Il2CppObject* _MyFriendCounts; // 0xB8
		Il2CppObject* _SortingTypeLabels; // 0xC0
		Il2CppObject* _AscendingIcons; // 0xC8
		Il2CppObject* _DescendingIcons; // 0xD0
		Il2CppObject* _SortButtons; // 0xD8
		Il2CppObject* _OrderButtons; // 0xE0
		FriendTab* tab; // 0xE8
		Il2CppObject* elements; // 0xF0
		SortingRule* _SortingRule_k__BackingField; // 0xF8
		Il2CppObject* SoringRules; // 0x100
		SortingOrder* _SortingOrder_k__BackingField; // 0x108

		::System::Void _Awake_b__40_1(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW__AWAKE_B__40_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetReddots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_SETREDDOTS_OFFSET))(nullptr);
		}

		::System::Void SetSortingInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_SETSORTINGINFO_OFFSET))(nullptr);
		}

		Il2CppObject* get_SortButtons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_SORTBUTTONS_OFFSET))(nullptr);
		}

		::System::Void set_Tab(FriendTab* arg)
		{
			((::System::Void(*)(FriendTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_SET_TAB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OrderButtons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_ORDERBUTTONS_OFFSET))(nullptr);
		}

		::System::Void set_SortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_SET_SORTINGORDER_OFFSET))(arg, nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Boolean HandleFriendSearchNetworkResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_HANDLEFRIENDSEARCHNETWORKRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleFriendDBsSyncNetworkResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_HANDLEFRIENDDBSSYNCNETWORKRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSort_b__51_1(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW__ONCLICKSORT_B__51_1_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MyFriendCounts()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_MYFRIENDCOUNTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AscendingIcons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_ASCENDINGICONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_SortingTypeLabels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_SORTINGTYPELABELS_OFFSET))(nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_ONCLICKSORT_OFFSET))(nullptr);
		}

		::System::Void RemoveTarget(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_REMOVETARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetCounts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_SETCOUNTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickSort_b__51_0(UIPopup_FilterSort* arg)
		{
			((::System::Void(*)(UIPopup_FilterSort*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW__ONCLICKSORT_B__51_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DescendingIcons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_DESCENDINGICONS_OFFSET))(nullptr);
		}

		::System::Void Sort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_SORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_SETLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_Elements()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_ELEMENTS_OFFSET))(nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__40_0(MXButton* arg)
		{
			((::System::Void(*)(MXButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW__AWAKE_B__40_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void InitMonos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_INITMONOS_OFFSET))(nullptr);
		}

		SortingOrder* get_SortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_SORTINGORDER_OFFSET))(nullptr);
		}

		FriendTab* get_Tab()
		{
			return ((FriendTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFRIENDSLISTSCROLLVIEW_GET_TAB_OFFSET))(nullptr);
		}

	};

