#pragma once
#include "unitysdk.h"

class UIShopListElement_Gem;
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
class UILabel;

#define RENEWALGEMPRODUCTNOTICE_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET UNITYSDK_OFFSET(0x26FF9C0)
#define RENEWALGEMPRODUCTNOTICE_CO_SETSHOPLISTELEMENT_OFFSET UNITYSDK_OFFSET(0x26FF9D0)
#define RENEWALGEMPRODUCTNOTICE_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x26FFA90)
#define RENEWALGEMPRODUCTNOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FFAA0)
#define RENEWALGEMPRODUCTNOTICE_ONOK_OFFSET UNITYSDK_OFFSET(0x26FFC00)
#define RENEWALGEMPRODUCTNOTICE_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x26FFC10)
#define RENEWALGEMPRODUCTNOTICE_SETLOCALIZE_OFFSET UNITYSDK_OFFSET(0x26FFC20)

	inline static constexpr unsigned int RenewalGemProductNotice_TypeDefinitionIndex = 7069;

	class RenewalGemProductNotice : public Il2CppObject
	{
	public:
		Il2CppObject* productList; // 0x10

		::System::Void OnChangeDoNotOpenTodayToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RENEWALGEMPRODUCTNOTICE_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_SetShopListElement(UIShopListElement_Gem* arg, ::MX::GameLogic::DBModel::PurchaseCountDB* arg2, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(UIShopListElement_Gem*, ::MX::GameLogic::DBModel::PurchaseCountDB*, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + RENEWALGEMPRODUCTNOTICE_CO_SETSHOPLISTELEMENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENEWALGEMPRODUCTNOTICE_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RENEWALGEMPRODUCTNOTICE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* OnOk()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENEWALGEMPRODUCTNOTICE_ONOK_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENEWALGEMPRODUCTNOTICE_GETPRODUCTLIST_OFFSET))(nullptr);
		}

		::System::Void SetLocalize(UILabel* arg, UILabel* arg2, UILabel* arg3)
		{
			((::System::Void(*)(UILabel*, UILabel*, UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + RENEWALGEMPRODUCTNOTICE_SETLOCALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

