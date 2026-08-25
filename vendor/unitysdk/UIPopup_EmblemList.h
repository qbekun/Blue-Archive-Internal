#pragma once
#include "unitysdk.h"

class UIEmblemParcel;
class UILabel;
class MXButton;
class UIEmblemScrollViewController;
class EquipType;
class EmblemLoadInfo;
namespace UnityEngine { class GameObject; }
class SortingRule;
class SortingOrder;
namespace MX::NetworkProtocol { class AttachmentEmblemAttachResponse; }
namespace MX::Data { class EmblemInfo; }

#define UIPOPUP_EMBLEMLIST_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x23EC300)
#define UIPOPUP_EMBLEMLIST_EQUIPEMBLEM_OFFSET UNITYSDK_OFFSET(0x23EC390)
#define UIPOPUP_EMBLEMLIST_GETSORTEDIDS_OFFSET UNITYSDK_OFFSET(0x23EC590)
#define UIPOPUP_EMBLEMLIST__ONCLICKCHANGE_B__40_0_OFFSET UNITYSDK_OFFSET(0x23EE230)
#define UIPOPUP_EMBLEMLIST_SETSELECTEMBLEMINFO_OFFSET UNITYSDK_OFFSET(0x23EE330)
#define UIPOPUP_EMBLEMLIST_GETCURRENTSELECTEMBLEMID_OFFSET UNITYSDK_OFFSET(0x23EA540)
#define UIPOPUP_EMBLEMLIST__GETSORTEDIDS_G__ISDISPLAYEMBLEM|32_0_OFFSET UNITYSDK_OFFSET(0x23EDAC0)
#define UIPOPUP_EMBLEMLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x23EE900)
#define UIPOPUP_EMBLEMLIST___N__0_OFFSET UNITYSDK_OFFSET(0x23EEBF0)
#define UIPOPUP_EMBLEMLIST_REFRESHCHANGEBUTTON_OFFSET UNITYSDK_OFFSET(0x23EC4B0)
#define UIPOPUP_EMBLEMLIST_REFRESHORDERICON_OFFSET UNITYSDK_OFFSET(0x23EEC00)
#define UIPOPUP_EMBLEMLIST_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0x23EED10)
#define UIPOPUP_EMBLEMLIST_ONCLICKCHANGE_OFFSET UNITYSDK_OFFSET(0x23EF380)
#define UIPOPUP_EMBLEMLIST_SELECTEMBLEM_OFFSET UNITYSDK_OFFSET(0x23EAA80)
#define UIPOPUP_EMBLEMLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23EF4F0)
#define UIPOPUP_EMBLEMLIST_WAITSCROLLVIEWENABLE_OFFSET UNITYSDK_OFFSET(0x23EF790)
#define UIPOPUP_EMBLEMLIST_REFRESHSORTLABEL_OFFSET UNITYSDK_OFFSET(0x23EF820)
#define UIPOPUP_EMBLEMLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x23EFA70)
#define UIPOPUP_EMBLEMLIST_SET_EMBLEMEQUIPTYPE_OFFSET UNITYSDK_OFFSET(0x23EFBB0)
#define UIPOPUP_EMBLEMLIST_GET_EMBLEMEQUIPTYPE_OFFSET UNITYSDK_OFFSET(0x23EFBC0)
#define UIPOPUP_EMBLEMLIST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23EFBD0)
#define UIPOPUP_EMBLEMLIST__REFRESHSORTLABEL_G__SETSORTLABELTEXT|44_0_OFFSET UNITYSDK_OFFSET(0x23EFA20)
#define UIPOPUP_EMBLEMLIST__GETSORTEDIDS_G__ISDISPLAYEMBLEMBYFILTER|32_1_OFFSET UNITYSDK_OFFSET(0x23EDFA0)
#define UIPOPUP_EMBLEMLIST_REFRESHSELECTEMBLEMINFO_OFFSET UNITYSDK_OFFSET(0x23EC400)
#define UIPOPUP_EMBLEMLIST_APPLYFILTERSORT_OFFSET UNITYSDK_OFFSET(0x23EEE00)
#define UIPOPUP_EMBLEMLIST_ONCLICKFILTER_OFFSET UNITYSDK_OFFSET(0x23EFBF0)

	inline static constexpr unsigned int UIPopup_EmblemList_TypeDefinitionIndex = 5411;

	class UIPopup_EmblemList : public Il2CppObject
	{
	public:
		UIEmblemParcel* DisplayEmblem; // 0xD8
		UILabel* EquipStateLabel; // 0xE0
		UILabel* NameLabel; // 0xE8
		UILabel* DescriptionLabel; // 0xF0
		MXButton* ChangeButtonEnable; // 0xF8
		MXButton* ChangeButtonDisable; // 0x100
		UIEmblemScrollViewController* ScrollView; // 0x108
		::System::Int32 listColoumSize; // 0x110
		EquipType* _EmblemEquipType_k__BackingField; // 0x114
		Il2CppObject* equipCallback; // 0x118
		::System::Int32 equipEmblemRow; // 0x120
		EmblemLoadInfo* selectedEmblemLoadInfo; // 0x128
		::UnityEngine::GameObject* FilterMarkerOn; // 0x130
		::UnityEngine::GameObject* FilterMarkerOff; // 0x138
		MXButton* FilterButton; // 0x140
		MXButton* OrderButton; // 0x148
		::UnityEngine::GameObject* ascendingIcon; // 0x150
		::UnityEngine::GameObject* descendingIcon; // 0x158
		UILabel* sortLabelType1; // 0x160
		UILabel* sortLabelType2; // 0x168
		::UnityEngine::GameObject* sortType1; // 0x170
		::UnityEngine::GameObject* sortType2; // 0x178
		::UnityEngine::GameObject* listEmptyMark; // 0x180
		Il2CppObject* sortingRuleList; // 0x188

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void EquipEmblem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_EQUIPEMBLEM_OFFSET))(nullptr);
		}

		Il2CppObject* GetSortedIds(SortingRule* arg, SortingOrder* arg2)
		{
			return ((Il2CppObject*(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_GETSORTEDIDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickChange_b__40_0(::MX::NetworkProtocol::AttachmentEmblemAttachResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::AttachmentEmblemAttachResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST__ONCLICKCHANGE_B__40_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectEmblemInfo(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_SETSELECTEMBLEMINFO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetCurrentSelectEmblemId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_GETCURRENTSELECTEMBLEMID_OFFSET))(nullptr);
		}

		::System::Boolean _GetSortedIds_g__IsDisplayEmblem|32_0(::MX::Data::EmblemInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST__GETSORTEDIDS_G__ISDISPLAYEMBLEM|32_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST___N__0_OFFSET))(nullptr);
		}

		::System::Void RefreshChangeButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_REFRESHCHANGEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshOrderIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_REFRESHORDERICON_OFFSET))(nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void OnClickChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_ONCLICKCHANGE_OFFSET))(nullptr);
		}

		::System::Void SelectEmblem(UIEmblemParcel* arg)
		{
			((::System::Void(*)(UIEmblemParcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_SELECTEMBLEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* WaitScrollViewEnable()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_WAITSCROLLVIEWENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshSortLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_REFRESHSORTLABEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EmblemEquipType(EquipType* arg)
		{
			((::System::Void(*)(EquipType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_SET_EMBLEMEQUIPTYPE_OFFSET))(arg, nullptr);
		}

		EquipType* get_EmblemEquipType()
		{
			return ((EquipType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_GET_EMBLEMEQUIPTYPE_OFFSET))(nullptr);
		}

		::System::Void Initialize(EquipType* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(EquipType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _RefreshSortLabel_g__SetSortLabelText|44_0(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST__REFRESHSORTLABEL_G__SETSORTLABELTEXT|44_0_OFFSET))(str, nullptr);
		}

		::System::Boolean _GetSortedIds_g__IsDisplayEmblemByFilter|32_1(::MX::Data::EmblemInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST__GETSORTEDIDS_G__ISDISPLAYEMBLEMBYFILTER|32_1_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSelectEmblemInfo(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_REFRESHSELECTEMBLEMINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyFilterSort(SortingRule* arg, SortingOrder* arg2)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_APPLYFILTERSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_EMBLEMLIST_ONCLICKFILTER_OFFSET))(nullptr);
		}

	};

