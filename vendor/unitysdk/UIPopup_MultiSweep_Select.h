#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class MXButton;
class UIMultiSweepSort;
class UIGrid;
class UIScrollView;
class SelectMultiSweepItemScrollController;
class MultiSweepItemInfo;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class SelectedMultiSweepItemInfo;
class SortingRule;

#define UIPOPUP_MULTISWEEP_SELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2713330)
#define UIPOPUP_MULTISWEEP_SELECT__ONSORT_B__24_0_OFFSET UNITYSDK_OFFSET(0x2713A70)
#define UIPOPUP_MULTISWEEP_SELECT_SETITEMINFO_OFFSET UNITYSDK_OFFSET(0x2713D70)
#define UIPOPUP_MULTISWEEP_SELECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2710070)
#define UIPOPUP_MULTISWEEP_SELECT_SETITEMEMPTYINFO_OFFSET UNITYSDK_OFFSET(0x27145A0)
#define UIPOPUP_MULTISWEEP_SELECT__ONCLICKOK_B__31_0_OFFSET UNITYSDK_OFFSET(0x2714700)
#define UIPOPUP_MULTISWEEP_SELECT_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2714760)
#define UIPOPUP_MULTISWEEP_SELECT_SETMULTISWEEPFILTER_OFFSET UNITYSDK_OFFSET(0x2714390)
#define UIPOPUP_MULTISWEEP_SELECT_ONSELECTED_OFFSET UNITYSDK_OFFSET(0x27147D0)
#define UIPOPUP_MULTISWEEP_SELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2714A60)
#define UIPOPUP_MULTISWEEP_SELECT_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2714B70)
#define UIPOPUP_MULTISWEEP_SELECT_SETPARCELCARDS_OFFSET UNITYSDK_OFFSET(0x2713AC0)
#define UIPOPUP_MULTISWEEP_SELECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2714BB0)
#define UIPOPUP_MULTISWEEP_SELECT_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2714BF0)
#define UIPOPUP_MULTISWEEP_SELECT_GETINVENTORYPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x2714160)
#define UIPOPUP_MULTISWEEP_SELECT_ONSORT_OFFSET UNITYSDK_OFFSET(0x2714E80)
#define UIPOPUP_MULTISWEEP_SELECT__ONCLICKOK_B__31_2_OFFSET UNITYSDK_OFFSET(0x2715740)

	inline static constexpr unsigned int UIPopup_MultiSweep_Select_TypeDefinitionIndex = 7136;

	class UIPopup_MultiSweep_Select : public Il2CppObject
	{
	public:
		UILabel* nameText; // 0xD8
		UILabel* descText; // 0xE0
		UILabel* amountCountLabel; // 0xE8
		UITexture* itemImage; // 0xF0
		MXButton* closeButton; // 0xF8
		::Il2CppArray<::System::Object*>* selectedParcelCards; // 0x100
		MXButton* okButton; // 0x108
		MXButton* cancelButton; // 0x110
		UIMultiSweepSort* uiMultiMaterialSort; // 0x118
		UIGrid* selectedParcelGrid; // 0x120
		UIScrollView* itemDescScrollView; // 0x128
		UILabel* emptyLabel; // 0x130
		SelectMultiSweepItemScrollController* _scrollController; // 0x138
		::System::Int32 columnCount; // 0x0
		Il2CppObject* prevSelectedItemList; // 0x140
		Il2CppObject* OnSelectedParcelCard; // 0x148
		::System::Action* OnResetFilter; // 0x150
		Il2CppObject* stageRewards; // 0x158
		Il2CppObject* selectedStageRewards; // 0x160
		Il2CppObject* stageRewardIds; // 0x168

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnSort_b__24_0(MultiSweepItemInfo* arg)
		{
			((::System::Void(*)(MultiSweepItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT__ONSORT_B__24_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetItemInfo(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_SETITEMINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetItemEmptyInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_SETITEMEMPTYINFO_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickOk_b__31_0(MultiSweepItemInfo* arg)
		{
			return ((::System::Boolean(*)(MultiSweepItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT__ONCLICKOK_B__31_0_OFFSET))(arg, nullptr);
		}

		SelectMultiSweepItemScrollController* get_scrollController()
		{
			return ((SelectMultiSweepItemScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void SetMultiSweepFilter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_SETMULTISWEEPFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelected(SelectedMultiSweepItemInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(SelectedMultiSweepItemInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_ONSELECTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void SetParcelCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_SETPARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Int64 GetInventoryParcelAmount(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_GETINVENTORYPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickOk_b__31_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MULTISWEEP_SELECT__ONCLICKOK_B__31_2_OFFSET))(nullptr);
		}

	};

