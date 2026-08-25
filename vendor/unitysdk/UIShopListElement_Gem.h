#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class UISprite;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class MXButton;
class UIFreeProductRedDot;
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
class DisableState;
namespace MX::Data::Excel { class ShopCashExcel; }
namespace MX::Data::Excel { class ProductExcel; }
namespace MX::Data::Excel { class ProductMonthlyExcel; }
namespace MX::Data::Excel { class ProductSelectExcel; }
namespace FlatData { class PurchasePeriodType; }

#define UISHOPLISTELEMENT_GEM_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xAB4E00)
#define UISHOPLISTELEMENT_GEM_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xAB4E10)
#define UISHOPLISTELEMENT_GEM_GET_MONTHLYPURCHASE_OFFSET UNITYSDK_OFFSET(0xAB4E30)
#define UISHOPLISTELEMENT_GEM_SET_MONTHLYPURCHASE_OFFSET UNITYSDK_OFFSET(0xAB4E40)
#define UISHOPLISTELEMENT_GEM_GET_ISMONTHLYPRODUCTINMAILBOX_OFFSET UNITYSDK_OFFSET(0xAB4E60)
#define UISHOPLISTELEMENT_GEM_SET_ISMONTHLYPRODUCTINMAILBOX_OFFSET UNITYSDK_OFFSET(0xAB4E70)
#define UISHOPLISTELEMENT_GEM_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xAB4E80)
#define UISHOPLISTELEMENT_GEM_SET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xAB4E90)
#define UISHOPLISTELEMENT_GEM_ADD_ONCLICK_OFFSET UNITYSDK_OFFSET(0xAB4EA0)
#define UISHOPLISTELEMENT_GEM_REMOVE_ONCLICK_OFFSET UNITYSDK_OFFSET(0xAB4F40)
#define UISHOPLISTELEMENT_GEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xAB4FE0)
#define UISHOPLISTELEMENT_GEM_ONCLICKPURCHASEBUTTON_OFFSET UNITYSDK_OFFSET(0xAB5110)
#define UISHOPLISTELEMENT_GEM_SETDATA_MONTHLYPURCHASEINMAILBOX_OFFSET UNITYSDK_OFFSET(0xAB5130)
#define UISHOPLISTELEMENT_GEM_SETDATA_MONTHLYPURCHASE_OFFSET UNITYSDK_OFFSET(0xAB51E0)
#define UISHOPLISTELEMENT_GEM_SETDATA_OFFSET UNITYSDK_OFFSET(0xAB52B0)
#define UISHOPLISTELEMENT_GEM_SETDATA_OFFSET UNITYSDK_OFFSET(0xAB5360)
#define UISHOPLISTELEMENT_GEM_SETDISABLEINDICATOR_OFFSET UNITYSDK_OFFSET(0xAB5440)
#define UISHOPLISTELEMENT_GEM_SETREPURCHASABLEDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xAB5530)
#define UISHOPLISTELEMENT_GEM_SETEFFECTENDDATE_OFFSET UNITYSDK_OFFSET(0xAB5B10)
#define UISHOPLISTELEMENT_GEM_SETPRODUCTIMAGE_OFFSET UNITYSDK_OFFSET(0xAB5F20)
#define UISHOPLISTELEMENT_GEM_SETPRODUCTIMAGE_OFFSET UNITYSDK_OFFSET(0xAB5FD0)
#define UISHOPLISTELEMENT_GEM_SETDISPLAYTAG_OFFSET UNITYSDK_OFFSET(0xAB6080)
#define UISHOPLISTELEMENT_GEM_SETDATELIMIT_OFFSET UNITYSDK_OFFSET(0xAB6130)
#define UISHOPLISTELEMENT_GEM_SETSTARTDASHDATELIMIT_OFFSET UNITYSDK_OFFSET(0xAB6990)
#define UISHOPLISTELEMENT_GEM_SETPURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0xAB6C60)
#define UISHOPLISTELEMENT_GEM_SETPURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0xAB6F60)
#define UISHOPLISTELEMENT_GEM_SETPURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0xAB6F90)
#define UISHOPLISTELEMENT_GEM_SETPURCHASELIMIT_OFFSET UNITYSDK_OFFSET(0xAB6CA0)
#define UISHOPLISTELEMENT_GEM_CHECKLIMITCONDITION_OFFSET UNITYSDK_OFFSET(0xAB6FD0)
#define UISHOPLISTELEMENT_GEM_REFRESH_OFFSET UNITYSDK_OFFSET(0xAB7290)
#define UISHOPLISTELEMENT_GEM_REFRESH_OFFSET UNITYSDK_OFFSET(0xAB72F0)
#define UISHOPLISTELEMENT_GEM_SETBUTTONVISIBILITY_OFFSET UNITYSDK_OFFSET(0xAB7950)
#define UISHOPLISTELEMENT_GEM_REFRESHPRODUCTIMAGE_OFFSET UNITYSDK_OFFSET(0xAB7A60)
#define UISHOPLISTELEMENT_GEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB7AF0)

	inline static constexpr unsigned int UIShopListElement_Gem_TypeDefinitionIndex = 8014;

	class UIShopListElement_Gem : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x18
		UITexture* productImageTexture; // 0x20
		UITexture* displayTagTexture; // 0x28
		UILabel* dateLimitLabel; // 0x30
		UISprite* dateLimitLabelBg; // 0x38
		UISprite* dateLimitLabelClosedBg; // 0x40
		UILabel* saleDayLimitLabel; // 0x48
		UISprite* saleDayLimitLabelBg; // 0x50
		UISprite* saleDayLimitLabelRemainOneDayBg; // 0x58
		::UnityEngine::GameObject* purchaseLimitTag; // 0x60
		UILabel* purchaseLimitTagLabel; // 0x68
		::UnityEngine::GameObject* disableIndicator; // 0x70
		::UnityEngine::GameObject* disablePurchaseLimitTag; // 0x78
		UILabel* disablePurchaseLimitTagLabel; // 0x80
		::UnityEngine::GameObject* disablePurchaseLockTag; // 0x88
		::UnityEngine::Transform* purchaseButtonRoot; // 0x90
		MXButton* purchaseButton; // 0x98
		::UnityEngine::GameObject* priceLabelRoot; // 0xA0
		UILabel* priceLabel; // 0xA8
		UILabel* priceFreeLabel; // 0xB0
		UILabel* purchaseButtonLabel; // 0xB8
		UILabel* purchaseButtonClosedLabel; // 0xC0
		::UnityEngine::GameObject* priceOnlyLabelRoot; // 0xC8
		UILabel* priceOnlyLabel; // 0xD0
		UILabel* remainTimeMessage; // 0xD8
		UIFreeProductRedDot* freeRedDot; // 0xE0
		UILabel* costCodeLabel; // 0xE8
		UILabel* costCodeOnlyLabel; // 0xF0
		::System::String* currentIconPath; // 0xF8
		::MX::GameLogic::DBModel::PurchaseCountDB* _PurchaseCount_k__BackingField; // 0x100
		::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* _MonthlyPurchase_k__BackingField; // 0x108
		::System::Boolean _IsMonthlyProductInMailbox_k__BackingField; // 0x110
		::System::Boolean _IsTeenage_k__BackingField; // 0x111
		Il2CppObject* OnClick; // 0x118

		::MX::GameLogic::DBModel::PurchaseCountDB* get_PurchaseCount()
		{
			return ((::MX::GameLogic::DBModel::PurchaseCountDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::MX::GameLogic::DBModel::PurchaseCountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* get_MonthlyPurchase()
		{
			return ((::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_GET_MONTHLYPURCHASE_OFFSET))(nullptr);
		}

		::System::Void set_MonthlyPurchase(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SET_MONTHLYPURCHASE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMonthlyProductInMailbox()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_GET_ISMONTHLYPRODUCTINMAILBOX_OFFSET))(nullptr);
		}

		::System::Void set_IsMonthlyProductInMailbox(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SET_ISMONTHLYPRODUCTINMAILBOX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_GET_ISTEENAGE_OFFSET))(nullptr);
		}

		::System::Void set_IsTeenage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SET_ISTEENAGE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnClick(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_ADD_ONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnClick(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_REMOVE_ONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickPurchaseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_ONCLICKPURCHASEBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SetData_MonthlyPurchaseInMailBox(::MX::GameLogic::DBModel::PurchaseCountDB* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETDATA_MONTHLYPURCHASEINMAILBOX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* SetData_MonthlyPurchase(::MX::GameLogic::DBModel::PurchaseCountDB* arg, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETDATA_MONTHLYPURCHASE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* SetData(::MX::GameLogic::DBModel::PurchaseCountDB* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* SetData(::MX::GameLogic::DBModel::PurchaseCountDB* arg, ::System::Boolean arg2, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg3, ::System::Boolean arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::System::Boolean, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetDisableIndicator(DisableState* arg, ::System::String* str)
		{
			((::System::Void(*)(DisableState*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETDISABLEINDICATOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetRepurchasableDateMessage(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg, ::MX::Data::Excel::ShopCashExcel* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETREPURCHASABLEDATEMESSAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SetEffectEndDate(::MX::Data::Excel::ShopCashExcel* arg, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopCashExcel*, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETEFFECTENDDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* SetProductImage(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETPRODUCTIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SetProductImage(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETPRODUCTIMAGE_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* SetDisplayTag(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETDISPLAYTAG_OFFSET))(arg, nullptr);
		}

		::System::Void SetDateLimit(::MX::Data::Excel::ShopCashExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopCashExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETDATELIMIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetStartDashDateLimit(::MX::Data::Excel::ShopCashExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETSTARTDASHDATELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPurchaseLimit(::MX::Data::Excel::ProductExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETPURCHASELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPurchaseLimit(::MX::Data::Excel::ProductMonthlyExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductMonthlyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETPURCHASELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPurchaseLimit(::MX::Data::Excel::ProductSelectExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductSelectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETPURCHASELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPurchaseLimit(::FlatData::PurchasePeriodType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::PurchasePeriodType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETPURCHASELIMIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckLimitCondition(::MX::Data::Excel::ShopCashExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_CHECKLIMITCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh(::MX::GameLogic::DBModel::PurchaseCountDB* arg, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PurchaseCountDB*, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_REFRESH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SetButtonVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_SETBUTTONVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RefreshProductImage()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_REFRESHPRODUCTIMAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENT_GEM_.CTOR_OFFSET))(nullptr);
		}

	};

