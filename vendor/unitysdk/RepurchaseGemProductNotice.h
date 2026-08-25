#pragma once
#include "unitysdk.h"

class UIShopListElement_Gem;
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
class UILabel;

#define REPURCHASEGEMPRODUCTNOTICE_ONOK_OFFSET UNITYSDK_OFFSET(0x26FFF80)
#define REPURCHASEGEMPRODUCTNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27003D0)
#define REPURCHASEGEMPRODUCTNOTICE_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x2700450)
#define REPURCHASEGEMPRODUCTNOTICE_CO_SETSHOPLISTELEMENT_OFFSET UNITYSDK_OFFSET(0x2700520)
#define REPURCHASEGEMPRODUCTNOTICE_SETLOCALIZE_OFFSET UNITYSDK_OFFSET(0x2700600)
#define REPURCHASEGEMPRODUCTNOTICE_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET UNITYSDK_OFFSET(0x2700760)
#define REPURCHASEGEMPRODUCTNOTICE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x2700870)
#define REPURCHASEGEMPRODUCTNOTICE_SENDDISMISSMESSAGEANDCLOSE_OFFSET UNITYSDK_OFFSET(0x2700360)

	inline static constexpr unsigned int RepurchaseGemProductNotice_TypeDefinitionIndex = 7073;

	class RepurchaseGemProductNotice : public Il2CppObject
	{
	public:
		Il2CppObject* repurchasableProductIdList; // 0x10

		::System::String* OnOk()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPURCHASEGEMPRODUCTNOTICE_ONOK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPURCHASEGEMPRODUCTNOTICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPURCHASEGEMPRODUCTNOTICE_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_SetShopListElement(UIShopListElement_Gem* arg, ::MX::GameLogic::DBModel::PurchaseCountDB* arg2, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(UIShopListElement_Gem*, ::MX::GameLogic::DBModel::PurchaseCountDB*, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + REPURCHASEGEMPRODUCTNOTICE_CO_SETSHOPLISTELEMENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetLocalize(UILabel* arg, UILabel* arg2, UILabel* arg3)
		{
			((::System::Void(*)(UILabel*, UILabel*, UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + REPURCHASEGEMPRODUCTNOTICE_SETLOCALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnChangeDoNotOpenTodayToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REPURCHASEGEMPRODUCTNOTICE_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPURCHASEGEMPRODUCTNOTICE_GETPRODUCTLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SendDismissMessageAndClose()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPURCHASEGEMPRODUCTNOTICE_SENDDISMISSMESSAGEANDCLOSE_OFFSET))(nullptr);
		}

	};

