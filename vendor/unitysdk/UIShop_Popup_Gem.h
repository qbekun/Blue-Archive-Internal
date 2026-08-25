#pragma once
#include "unitysdk.h"

class MXButton;
class ProductCategoryTabController;
class UIScrollView;
class UIGrid;
class UIShopListElement_Gem;
class UIShop_Popup_Gem_Confirm;
namespace FlatData { class ProductCategory; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
namespace MX::NetworkProtocol { class BillingPurchaseFreeProductResponse; }

#define UISHOP_POPUP_GEM_SETMONTHLYPRODUCTPURCHASEDATA_OFFSET UNITYSDK_OFFSET(0xAC2A70)
#define UISHOP_POPUP_GEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAC3560)
#define UISHOP_POPUP_GEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xAC3670)
#define UISHOP_POPUP_GEM_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xAC3B80)
#define UISHOP_POPUP_GEM_ONCLICKSHOPLISTELEMENT_OFFSET UNITYSDK_OFFSET(0xAC3C10)
#define UISHOP_POPUP_GEM_HANDLEBUNDLECLEARSHOPLISTELEMENTLISTDICT_OFFSET UNITYSDK_OFFSET(0xAC3E40)
#define UISHOP_POPUP_GEM_REQUESTPURCHASEFREEPRODUCT_OFFSET UNITYSDK_OFFSET(0xAC4450)
#define UISHOP_POPUP_GEM__REFRESHPURCHASEFREEPRODUCT_G__REFRESHMONTHLYPRODUCT|41_1_OFFSET UNITYSDK_OFFSET(0xAC45C0)
#define UISHOP_POPUP_GEM_ONOPENED_OFFSET UNITYSDK_OFFSET(0xAC4940)
#define UISHOP_POPUP_GEM_REFRESHPURCHASEITEM_OFFSET UNITYSDK_OFFSET(0xAC60D0)
#define UISHOP_POPUP_GEM_ONOKCONFIRMPOPUP_OFFSET UNITYSDK_OFFSET(0xAC62E0)
#define UISHOP_POPUP_GEM_REFRESH_OFFSET UNITYSDK_OFFSET(0xAC6920)
#define UISHOP_POPUP_GEM_REFRESHTABCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAC4A00)
#define UISHOP_POPUP_GEM_GET_OPENCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xAC7240)
#define UISHOP_POPUP_GEM_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xAC7250)
#define UISHOP_POPUP_GEM_SETMAILBOXMONTHLYPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xAC72C0)
#define UISHOP_POPUP_GEM__REFRESHPURCHASEFREEPRODUCT_G__REFRESHPRODUCT|41_0_OFFSET UNITYSDK_OFFSET(0xAC74D0)
#define UISHOP_POPUP_GEM_SETDATA_OFFSET UNITYSDK_OFFSET(0xAC76C0)
#define UISHOP_POPUP_GEM_REFRESHSHOPLISTELEMENTLIST_OFFSET UNITYSDK_OFFSET(0xAC69E0)
#define UISHOP_POPUP_GEM_SETPURCHASECOUNTDATA_OFFSET UNITYSDK_OFFSET(0xAC7710)
#define UISHOP_POPUP_GEM_SORTRENEWALEDPURCHASEITEM_OFFSET UNITYSDK_OFFSET(0xAC4C90)
#define UISHOP_POPUP_GEM_SETBLOCKEDPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xAC7AD0)
#define UISHOP_POPUP_GEM___N__0_OFFSET UNITYSDK_OFFSET(0xAC7B90)
#define UISHOP_POPUP_GEM_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xAC48B0)
#define UISHOP_POPUP_GEM_SHOPCASHIDTOPRODUCTID_OFFSET UNITYSDK_OFFSET(0xAC2E30)
#define UISHOP_POPUP_GEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xAC7BA0)
#define UISHOP_POPUP_GEM_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xAC7E20)
#define UISHOP_POPUP_GEM_ONCHANGEDPRODUCTCATEGORYTAB_OFFSET UNITYSDK_OFFSET(0xAC7EB0)
#define UISHOP_POPUP_GEM_SET_OPENCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xAC8130)
#define UISHOP_POPUP_GEM_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xAC8140)
#define UISHOP_POPUP_GEM__CO_LOADING_G__CO_CATCHEXCEPTIONITERATOR|26_1_OFFSET UNITYSDK_OFFSET(0xAC81F0)
#define UISHOP_POPUP_GEM_REFRESHPURCHASEFREEPRODUCT_OFFSET UNITYSDK_OFFSET(0xAC82A0)

	inline static constexpr unsigned int UIShop_Popup_Gem_TypeDefinitionIndex = 8046;

	class UIShop_Popup_Gem : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		ProductCategoryTabController* productCategory2Tab; // 0xE0
		ProductCategoryTabController* productCategory3Tab; // 0xE8
		UIScrollView* shopListScrollView; // 0xF0
		UIGrid* shopListTimeLimitGrid; // 0xF8
		UIGrid* shopListGemGrid; // 0x100
		UIGrid* shopListPackageGrid; // 0x108
		UIShopListElement_Gem* shopListElementPrefab; // 0x110
		UIShop_Popup_Gem_Confirm* confirmPopup; // 0x118
		Il2CppObject* purchaseCountDict; // 0x120
		Il2CppObject* monthlyPurchaseDict; // 0x128
		Il2CppObject* MailBoxmonthlyPurchaseDict; // 0x130
		Il2CppObject* blockedProductList; // 0x138
		::FlatData::ProductCategory* currProductCategory; // 0x140
		Il2CppObject* productCategoryDict; // 0x148
		Il2CppObject* shopListElementListDict; // 0x150
		Il2CppObject* errorShopListElementList; // 0x158

		::System::Void SetMonthlyProductPurchaseData(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_SETMONTHLYPRODUCTPURCHASEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickShopListElement(UIShopListElement_Gem* arg)
		{
			((::System::Void(*)(UIShopListElement_Gem*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_ONCLICKSHOPLISTELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleBundleClearShopListElementListDict(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_HANDLEBUNDLECLEARSHOPLISTELEMENTLISTDICT_OFFSET))(arg, nullptr);
		}

		::System::Void RequestPurchaseFreeProduct()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_REQUESTPURCHASEFREEPRODUCT_OFFSET))(nullptr);
		}

		::System::Void _RefreshPurchaseFreeProduct_g__RefreshMonthlyProduct|41_1(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM__REFRESHPURCHASEFREEPRODUCT_G__REFRESHMONTHLYPRODUCT|41_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshPurchaseItem(UIShopListElement_Gem* arg, ::System::String* str, ::System::Boolean arg2)
		{
			((::System::Void(*)(UIShopListElement_Gem*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_REFRESHPURCHASEITEM_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void OnOkConfirmPopup(UIShop_Popup_Gem_Confirm* arg)
		{
			((::System::Void(*)(UIShop_Popup_Gem_Confirm*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_ONOKCONFIRMPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_REFRESH_OFFSET))(nullptr);
		}

		::System::Void RefreshTabController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_REFRESHTABCONTROLLER_OFFSET))(nullptr);
		}

		::FlatData::ProductCategory* get_OpenCategoryType()
		{
			return ((::FlatData::ProductCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_GET_OPENCATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetMailBoxMonthlyProductData(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_SETMAILBOXMONTHLYPRODUCTDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _RefreshPurchaseFreeProduct_g__RefreshProduct|41_0(::MX::GameLogic::DBModel::PurchaseCountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM__REFRESHPURCHASEFREEPRODUCT_G__REFRESHPRODUCT|41_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RefreshShopListElementList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_REFRESHSHOPLISTELEMENTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetPurchaseCountData(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_SETPURCHASECOUNTDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SortRenewaledPurchaseItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_SORTRENEWALEDPURCHASEITEM_OFFSET))(nullptr);
		}

		::System::Void SetBlockedProductData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_SETBLOCKEDPRODUCTDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM___N__0_OFFSET))(nullptr);
		}

		::System::Boolean get_isTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_GET_ISTEENAGE_OFFSET))(nullptr);
		}

		::System::String* ShopCashIdToProductId(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_SHOPCASHIDTOPRODUCTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnChangedProductCategoryTab(::System::Boolean arg, ::FlatData::ProductCategory* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::ProductCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_ONCHANGEDPRODUCTCATEGORYTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_OpenCategoryType(::FlatData::ProductCategory* arg)
		{
			((::System::Void(*)(::FlatData::ProductCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_SET_OPENCATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _Co_Loading_g__Co_CatchExceptionIterator|26_1(::System::Collections::IEnumerator* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Collections::IEnumerator*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM__CO_LOADING_G__CO_CATCHEXCEPTIONITERATOR|26_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshPurchaseFreeProduct(::MX::NetworkProtocol::BillingPurchaseFreeProductResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BillingPurchaseFreeProductResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOP_POPUP_GEM_REFRESHPURCHASEFREEPRODUCT_OFFSET))(arg, nullptr);
		}

	};

