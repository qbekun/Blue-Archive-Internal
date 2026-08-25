#pragma once
#include "unitysdk.h"

class MXButton;
class MXToggle;
class UICharacterInfo;
class UICharacterInfo_LegacyPickup;
namespace UnityEngine { class GameObject; }
class UICharacterSort;
class UIAssistScrollViewController;
class UIGachaCharacterNameSearch;
class GachaShopMode;
namespace MX::Data::Excel { class ShopRecruitExcel; }
class UIRecruitShopInfo;
class CharacterObject;
class NameSearchResult;
namespace MX::NetworkProtocol { class ShopPickupSelectionGachaSetResponse; }
class UIAssistSetSlot;
class SortingRule;
class UIPopup_GachaChar_Select;
class UIPopup_SelectPickup_FirstCharConfirm;
class ShopBuyGachaResponseMessage;

#define UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__CALCULATEREQUIREDCOST|47_5_OFFSET UNITYSDK_OFFSET(0xA9C520)
#define UIPOPUP_GACHACHARLIST_SETDATAFORLEGACYPICKUPCEILINGEXCHANGE_OFFSET UNITYSDK_OFFSET(0xA9C600)
#define UIPOPUP_GACHACHARLIST_ONNAMESEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0xA9C800)
#define UIPOPUP_GACHACHARLIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA9C830)
#define UIPOPUP_GACHACHARLIST_SETDATAFORSELECTIONTICKET_OFFSET UNITYSDK_OFFSET(0xA9C950)
#define UIPOPUP_GACHACHARLIST_SETSELECTEDCHARACTER_OFFSET UNITYSDK_OFFSET(0xA9C9A0)
#define UIPOPUP_GACHACHARLIST__ONCLICKGAIN_G__TRYGAIN|48_0_OFFSET UNITYSDK_OFFSET(0xA9D030)
#define UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__UPDATESELECTEDSTATE|47_1_OFFSET UNITYSDK_OFFSET(0xA9CBA0)
#define UIPOPUP_GACHACHARLIST_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0xA9D680)
#define UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__SETCONFIRMBUTTONACTIVE|47_4_OFFSET UNITYSDK_OFFSET(0xA9D2E0)
#define UIPOPUP_GACHACHARLIST_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xA9DAA0)
#define UIPOPUP_GACHACHARLIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9DB30)
#define UIPOPUP_GACHACHARLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA9DC90)
#define UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__UPDATECOSTICONS|47_6_OFFSET UNITYSDK_OFFSET(0xA9DD70)
#define UIPOPUP_GACHACHARLIST_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xA9DEB0)
#define UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__RESETUISTATE|47_0_OFFSET UNITYSDK_OFFSET(0xA9CA30)
#define UIPOPUP_GACHACHARLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0xA9DF40)
#define UIPOPUP_GACHACHARLIST_ONCLICKGAIN_OFFSET UNITYSDK_OFFSET(0xA9D900)
#define UIPOPUP_GACHACHARLIST__ONCLICKCONFIRMBUTTON_B__43_1_OFFSET UNITYSDK_OFFSET(0xA9E5D0)
#define UIPOPUP_GACHACHARLIST_ONCLICKCHARACTERLISTSLOT_OFFSET UNITYSDK_OFFSET(0xA9E740)
#define UIPOPUP_GACHACHARLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA9E7C0)
#define UIPOPUP_GACHACHARLIST_ONSORT_OFFSET UNITYSDK_OFFSET(0xA9F7B0)
#define UIPOPUP_GACHACHARLIST_ONCLICKCHARACTERDETAILBUTTON_OFFSET UNITYSDK_OFFSET(0xAA0160)
#define UIPOPUP_GACHACHARLIST__ONCLICKCONFIRMBUTTON_B__43_0_OFFSET UNITYSDK_OFFSET(0xAA02A0)
#define UIPOPUP_GACHACHARLIST_SETDATAFORLEGACYPICKUP_OFFSET UNITYSDK_OFFSET(0xAA0300)
#define UIPOPUP_GACHACHARLIST__ONSORT_B__46_1_OFFSET UNITYSDK_OFFSET(0xAA0380)
#define UIPOPUP_GACHACHARLIST_EXCHANGECOIN_OFFSET UNITYSDK_OFFSET(0xAA03B0)
#define UIPOPUP_GACHACHARLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xAA0760)
#define UIPOPUP_GACHACHARLIST_ONCHANGEDDISPLAYHAVENOTCHARACTERONLYTOGGLE_OFFSET UNITYSDK_OFFSET(0xAA0880)
#define UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__UPDATEEMPTYSTATE|47_2_OFFSET UNITYSDK_OFFSET(0xA9CE10)
#define UIPOPUP_GACHACHARLIST_SHOWCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0xAA01B0)
#define UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__HANDLECEILINGEXCHANGESTATE|47_3_OFFSET UNITYSDK_OFFSET(0xA9D360)
#define UIPOPUP_GACHACHARLIST_START_OFFSET UNITYSDK_OFFSET(0xAA08A0)
#define UIPOPUP_GACHACHARLIST_ONLONGPRESSCHARACTERLISTSLOT_OFFSET UNITYSDK_OFFSET(0xAA0960)
#define UIPOPUP_GACHACHARLIST_REFRESHCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0xA9E820)
#define UIPOPUP_GACHACHARLIST__ONCLICKGAIN_B__48_1_OFFSET UNITYSDK_OFFSET(0xAA09C0)
#define UIPOPUP_GACHACHARLIST_HANDLEPICKUPGAINCHARACTER_OFFSET UNITYSDK_OFFSET(0xAA0A90)

	inline static constexpr unsigned int UIPopup_GachaCharList_TypeDefinitionIndex = 7964;

	class UIPopup_GachaCharList : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXToggle* displayHaveNotCharacterOnlyToggle; // 0xE0
		UICharacterInfo* characterInfo; // 0xE8
		UICharacterInfo_LegacyPickup* characterInfoLegacyPickup; // 0xF0
		MXButton* characterDetailButton; // 0xF8
		::UnityEngine::GameObject* characterInfoEmptyRoot; // 0x100
		::UnityEngine::GameObject* selectionTicketCharacterInfoEmpty; // 0x108
		::UnityEngine::GameObject* selectPickupCharacterInfoEmpty; // 0x110
		UICharacterSort* characterSort; // 0x118
		UIAssistScrollViewController* characterListScrollView; // 0x120
		::UnityEngine::GameObject* characterListEmptyRoot; // 0x128
		::UnityEngine::GameObject* legacyCeilingCharacterEmptyRoot; // 0x130
		::UnityEngine::GameObject* confirmButtonRoot; // 0x138
		MXButton* cancelButton; // 0x140
		MXButton* confirmButton; // 0x148
		::UnityEngine::GameObject* confirmButtonDisabled; // 0x150
		::UnityEngine::GameObject* legacyCeilingExchangeConfirmButtonRoot; // 0x158
		MXButton* legacyCeilingExchangeCancelButton; // 0x160
		MXButton* legacyCeilingExchangeConfirmButton; // 0x168
		::UnityEngine::GameObject* legacyCeilingExchangeConfirmButtonDisabled; // 0x170
		Il2CppObject* legacyCeilingExchangeConfirmButtonCostIcons; // 0x178
		Il2CppObject* legacyCeilingExchangeCostLabels; // 0x180
		UIGachaCharacterNameSearch* nameSearch; // 0x188
		::System::Int64 ticketId; // 0x190
		Il2CppObject* pickupList; // 0x198
		::System::Boolean characterSortInitialized; // 0x1A0
		Il2CppObject* displayedCharacterIdList; // 0x1A8
		GachaShopMode* gachaShopMode; // 0x1B0
		::System::Int64 maxSelectableCount; // 0x1B8
		::MX::Data::Excel::ShopRecruitExcel* shopRecruitExcel; // 0x1C0
		UIRecruitShopInfo* recruitShopInfo; // 0x1D0
		Il2CppObject* pickupSelectOrderToCharacterIdDictionary; // 0x1D8
		CharacterObject* selectedCharacter; // 0x1E0
		Il2CppObject* characterParcelIdToGoodsIdDict; // 0x1E8
		::System::Boolean isGetNewCharacter; // 0x1F0

		::System::Int64 _SetSelectedCharacter_g__CalculateRequiredCost|47_5(<>c__DisplayClass47_0&* arg)
		{
			return ((::System::Int64(*)(<>c__DisplayClass47_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__CALCULATEREQUIREDCOST|47_5_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataForLegacyPickupCeilingExchange(::MX::Data::Excel::ShopRecruitExcel* arg, UIRecruitShopInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, UIRecruitShopInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_SETDATAFORLEGACYPICKUPCEILINGEXCHANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnNameSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONNAMESEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetDataForSelectionTicket(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_SETDATAFORSELECTIONTICKET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSelectedCharacter(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_SETSELECTEDCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickGain_g__TryGain|48_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__ONCLICKGAIN_G__TRYGAIN|48_0_OFFSET))(nullptr);
		}

		::System::Void _SetSelectedCharacter_g__UpdateSelectedState|47_1(<>c__DisplayClass47_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass47_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__UPDATESELECTEDSTATE|47_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void _SetSelectedCharacter_g__SetConfirmButtonActive|47_4(::System::Boolean arg, <>c__DisplayClass47_0&* arg2)
		{
			((::System::Void(*)(::System::Boolean, <>c__DisplayClass47_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__SETCONFIRMBUTTONACTIVE|47_4_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void _SetSelectedCharacter_g__UpdateCostIcons|47_6(<>c__DisplayClass47_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass47_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__UPDATECOSTICONS|47_6_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void _SetSelectedCharacter_g__ResetUIState|47_0(<>c__DisplayClass47_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass47_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__RESETUISTATE|47_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickGain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONCLICKGAIN_OFFSET))(nullptr);
		}

		::System::Void _OnClickConfirmButton_b__43_1(::MX::NetworkProtocol::ShopPickupSelectionGachaSetResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopPickupSelectionGachaSetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__ONCLICKCONFIRMBUTTON_B__43_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCharacterListSlot(UIAssistSetSlot* arg)
		{
			((::System::Void(*)(UIAssistSetSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONCLICKCHARACTERLISTSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickCharacterDetailButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONCLICKCHARACTERDETAILBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickConfirmButton_b__43_0(UIPopup_GachaChar_Select* arg)
		{
			((::System::Void(*)(UIPopup_GachaChar_Select*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__ONCLICKCONFIRMBUTTON_B__43_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataForLegacyPickup(::MX::Data::Excel::ShopRecruitExcel* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_SETDATAFORLEGACYPICKUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _OnSort_b__46_1(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__ONSORT_B__46_1_OFFSET))(arg, nullptr);
		}

		::System::Void ExchangeCoin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_EXCHANGECOIN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnChangedDisplayHaveNotCharacterOnlyToggle(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONCHANGEDDISPLAYHAVENOTCHARACTERONLYTOGGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _SetSelectedCharacter_g__UpdateEmptyState|47_2(<>c__DisplayClass47_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass47_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__UPDATEEMPTYSTATE|47_2_OFFSET))(arg, nullptr);
		}

		::System::Void ShowCharacterDetail(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_SHOWCHARACTERDETAIL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _SetSelectedCharacter_g__HandleCeilingExchangeState|47_3(<>c__DisplayClass47_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass47_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__SETSELECTEDCHARACTER_G__HANDLECEILINGEXCHANGESTATE|47_3_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_START_OFFSET))(nullptr);
		}

		::System::Void OnLongPressCharacterListSlot(UIAssistSetSlot* arg)
		{
			((::System::Void(*)(UIAssistSetSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_ONLONGPRESSCHARACTERLISTSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCharacterList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_REFRESHCHARACTERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickGain_b__48_1(UIPopup_SelectPickup_FirstCharConfirm* arg)
		{
			((::System::Void(*)(UIPopup_SelectPickup_FirstCharConfirm*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST__ONCLICKGAIN_B__48_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandlePickUpGainCharacter(ShopBuyGachaResponseMessage* arg)
		{
			return ((::System::Boolean(*)(ShopBuyGachaResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHACHARLIST_HANDLEPICKUPGAINCHARACTER_OFFSET))(arg, nullptr);
		}

	};

