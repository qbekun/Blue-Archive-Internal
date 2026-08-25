#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class UITexture;
class UISprite;
namespace UnityEngine { class Transform; }
class UICafeCharacterFavor;
class UICharacterCard;
class UIScrollView;
class UIGrid;
class UISmallParcelCard;
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
class CharacterObject;
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
namespace MX::Data::Excel { class ShopCashExcel; }
namespace MX::Data::Excel { class ProductExcel; }
namespace FlatData { class PurchasePeriodType; }
namespace MX::Data::Excel { class ProductMonthlyExcel; }
namespace MX::Data::Excel { class ProductBattlePassExcel; }
namespace MX::Data::Excel { class ProductSelectExcel; }
class ProductSelectedMessage;
namespace FlatData { class RewardTag; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UISHOP_POPUP_GEM_CONFIRM_GET_CURRSELLINGLEGALLABEL_OFFSET UNITYSDK_OFFSET(0xACB540)
#define UISHOP_POPUP_GEM_CONFIRM_GET_ISMONTHLYPRODUCTINMAILBOX_OFFSET UNITYSDK_OFFSET(0xACB550)
#define UISHOP_POPUP_GEM_CONFIRM_SET_ISMONTHLYPRODUCTINMAILBOX_OFFSET UNITYSDK_OFFSET(0xACB560)
#define UISHOP_POPUP_GEM_CONFIRM_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xACB570)
#define UISHOP_POPUP_GEM_CONFIRM_SET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xACB580)
#define UISHOP_POPUP_GEM_CONFIRM_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xACB590)
#define UISHOP_POPUP_GEM_CONFIRM_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xACB5A0)
#define UISHOP_POPUP_GEM_CONFIRM_GET_SELECTIONDBS_OFFSET UNITYSDK_OFFSET(0xACB5C0)
#define UISHOP_POPUP_GEM_CONFIRM_SET_SELECTIONDBS_OFFSET UNITYSDK_OFFSET(0xACB5D0)
#define UISHOP_POPUP_GEM_CONFIRM_ADD_ONOK_OFFSET UNITYSDK_OFFSET(0xAC3AE0)
#define UISHOP_POPUP_GEM_CONFIRM_REMOVE_ONOK_OFFSET UNITYSDK_OFFSET(0xACB5F0)
#define UISHOP_POPUP_GEM_CONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0xACB690)
#define UISHOP_POPUP_GEM_CONFIRM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xACBB00)
#define UISHOP_POPUP_GEM_CONFIRM_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xACBBD0)
#define UISHOP_POPUP_GEM_CONFIRM_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xACBC00)
#define UISHOP_POPUP_GEM_CONFIRM_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xACC0D0)
#define UISHOP_POPUP_GEM_CONFIRM_ONCLICKCHECKBUTTON_OFFSET UNITYSDK_OFFSET(0xACC100)
#define UISHOP_POPUP_GEM_CONFIRM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xACC130)
#define UISHOP_POPUP_GEM_CONFIRM_CO_SETDATA_OFFSET UNITYSDK_OFFSET(0xACAB70)
#define UISHOP_POPUP_GEM_CONFIRM_REFRESHBUTTON_CHECKPRODUCTSELECTPURCHASABLE_OFFSET UNITYSDK_OFFSET(0xACC210)
#define UISHOP_POPUP_GEM_CONFIRM_SETPRODUCTIMAGE_OFFSET UNITYSDK_OFFSET(0xACC6A0)
#define UISHOP_POPUP_GEM_CONFIRM_SETDISPLAYTAG_OFFSET UNITYSDK_OFFSET(0xACC750)
#define UISHOP_POPUP_GEM_CONFIRM_SETPRODUCTREWARDLIST_OFFSET UNITYSDK_OFFSET(0xACC800)
#define UISHOP_POPUP_GEM_CONFIRM_ONCONFIRMCHARACTER_OFFSET UNITYSDK_OFFSET(0xACE050)
#define UISHOP_POPUP_GEM_CONFIRM_SETDATELIMIT_OFFSET UNITYSDK_OFFSET(0xACE3E0)
#define UISHOP_POPUP_GEM_CONFIRM_SETSTARTDASHDATELIMIT_OFFSET UNITYSDK_OFFSET(0xACEAE0)
#define UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0xACEDB0)
#define UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0xACEDF0)
#define UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0xACF0D0)
#define UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0xACF100)
#define UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0xACF130)
#define UISHOP_POPUP_GEM_CONFIRM_HANDLEPRODUCTSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xACF170)
#define UISHOP_POPUP_GEM_CONFIRM_INITPRICEOBJECT_OFFSET UNITYSDK_OFFSET(0xACF180)
#define UISHOP_POPUP_GEM_CONFIRM_.CTOR_OFFSET UNITYSDK_OFFSET(0xACF210)
#define UISHOP_POPUP_GEM_CONFIRM__CO_SETDATA_G__SETUPPRODUCT|75_0_OFFSET UNITYSDK_OFFSET(0xACF2F0)
#define UISHOP_POPUP_GEM_CONFIRM__SETPRODUCTREWARDLIST_G__GETPRODUCTREWARDTAG|79_0_OFFSET UNITYSDK_OFFSET(0xAD07C0)

	inline static constexpr unsigned int UIShop_Popup_Gem_Confirm_TypeDefinitionIndex = 8057;

	class UIShop_Popup_Gem_Confirm : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x18
		MXButton* closeButton; // 0x20
		UILabel* messageLabel; // 0x28
		::UnityEngine::GameObject* buttonRoot; // 0x30
		MXButton* okButton; // 0x38
		MXButton* cancelButton; // 0x40
		::UnityEngine::GameObject* disableButtonObject; // 0x48
		::UnityEngine::GameObject* closedButtonRoot; // 0x50
		MXButton* checkButton; // 0x58
		UILabel* confirmButtonMessage; // 0x60
		UITexture* productImageTexture; // 0x68
		UITexture* displayTagTexture; // 0x70
		UILabel* dateLimitLabel; // 0x78
		UISprite* dateLimitLabelBg; // 0x80
		UISprite* dateLimitLabelClosedBg; // 0x88
		UILabel* saleDayLimitLabel; // 0x90
		UISprite* saleDayLimitLabelBg; // 0x98
		UISprite* saleDayLimitLabelRemainOneDayBg; // 0xA0
		::UnityEngine::GameObject* purchaseLimitTag; // 0xA8
		UILabel* purchaseLimitTagLabel; // 0xB0
		::UnityEngine::GameObject* disableIndicator; // 0xB8
		UILabel* disablePurchaseLimitTagLabel; // 0xC0
		UILabel* productTitleLabel; // 0xC8
		::UnityEngine::GameObject* commonSetGO; // 0xD0
		::UnityEngine::Transform* productDescriptionRoot; // 0xD8
		UILabel* productDescriptionLabel; // 0xE0
		::UnityEngine::GameObject* autoSelectSetGO; // 0xE8
		::UnityEngine::GameObject* beforeSelectStudentSet; // 0xF0
		::UnityEngine::GameObject* afterSelectStudentSet; // 0xF8
		MXButton* selectStudentButton; // 0x100
		UILabel* beforeSelectInfoDescLabel; // 0x108
		UICafeCharacterFavor* selectedStudentFavorCard; // 0x110
		UICharacterCard* selectedStudentCharacterCard; // 0x118
		UILabel* selectedStudentNameLabel; // 0x120
		::UnityEngine::GameObject* noItemsLabelGO; // 0x128
		UIScrollView* productRewardListScrollView; // 0x130
		UIGrid* productRewardListGrid; // 0x138
		UISmallParcelCard* productRewardListItemPrefab; // 0x140
		Il2CppObject* productRewardListItemList; // 0x148
		::UnityEngine::GameObject* costUiObjects; // 0x150
		::UnityEngine::GameObject* costUiKrObjects; // 0x158
		::Il2CppArray<::System::Object*>* costCodeLabels; // 0x160
		::Il2CppArray<::System::Object*>* priceLabels; // 0x168
		::Il2CppArray<::System::Object*>* priceFreeLabels; // 0x170
		UILabel* sellingLegalKrLabel; // 0x178
		::UnityEngine::GameObject* costKrBGInfoObject; // 0x180
		::System::Boolean _IsMonthlyProductInMailbox_k__BackingField; // 0x188
		::System::Boolean _IsTeenage_k__BackingField; // 0x189
		::MX::GameLogic::DBModel::PurchaseCountDB* _PurchaseCount_k__BackingField; // 0x190
		Il2CppObject* _SelectionDBs_k__BackingField; // 0x198
		Il2CppObject* OnOk; // 0x1A0
		CharacterObject* autoSelectCharacter; // 0x1A8

		UILabel* get_CurrSellingLegalLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_GET_CURRSELLINGLEGALLABEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMonthlyProductInMailbox()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_GET_ISMONTHLYPRODUCTINMAILBOX_OFFSET))(nullptr);
		}

		::System::Void set_IsMonthlyProductInMailbox(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SET_ISMONTHLYPRODUCTINMAILBOX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_GET_ISTEENAGE_OFFSET))(nullptr);
		}

		::System::Void set_IsTeenage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SET_ISTEENAGE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::PurchaseCountDB* get_PurchaseCount()
		{
			return ((::MX::GameLogic::DBModel::PurchaseCountDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::MX::GameLogic::DBModel::PurchaseCountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SelectionDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_GET_SELECTIONDBS_OFFSET))(nullptr);
		}

		::System::Void set_SelectionDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SET_SELECTIONDBS_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnOk(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_ADD_ONOK_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnOk(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_REMOVE_ONOK_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCheckButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_ONCLICKCHECKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_SetData(::MX::GameLogic::DBModel::PurchaseCountDB* arg, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_CO_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RefreshButton_CheckProductSelectPurchasable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_REFRESHBUTTON_CHECKPRODUCTSELECTPURCHASABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SetProductImage(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETPRODUCTIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SetDisplayTag(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETDISPLAYTAG_OFFSET))(arg, nullptr);
		}

		::System::Void SetProductRewardList(::MX::Data::Excel::ShopCashExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETPRODUCTREWARDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnConfirmCharacter(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_ONCONFIRMCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetDateLimit(::MX::Data::Excel::ShopCashExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopCashExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETDATELIMIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetStartDashDateLimit(::MX::Data::Excel::ShopCashExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETSTARTDASHDATELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPurchaseLimit(::MX::Data::Excel::ProductExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPurchaseLimit(::FlatData::PurchasePeriodType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::PurchasePeriodType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetPurchaseLimit(::MX::Data::Excel::ProductMonthlyExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductMonthlyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPurchaseLimit(::MX::Data::Excel::ProductBattlePassExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductBattlePassExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPurchaseLimit(::MX::Data::Excel::ProductSelectExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductSelectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_SETPURCHASELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleProductSelectedMessage(ProductSelectedMessage* arg)
		{
			return ((::System::Boolean(*)(ProductSelectedMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_HANDLEPRODUCTSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void InitPriceObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_INITPRICEOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Co_SetData_g__SetupProduct|75_0(<>c__DisplayClass75_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass75_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM__CO_SETDATA_G__SETUPPRODUCT|75_0_OFFSET))(arg, nullptr);
		}

		::FlatData::RewardTag* _SetProductRewardList_g__GetProductRewardTag|79_0(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::FlatData::RewardTag*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CONFIRM__SETPRODUCTREWARDLIST_G__GETPRODUCTREWARDTAG|79_0_OFFSET))(arg, nullptr);
		}

	};

