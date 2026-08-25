#pragma once
#include "unitysdk.h"

class UIShopListElement_Gem;
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
class UILabel;

#define GEMPRODUCTNOTICEDELEGATOR_CO_SETSHOPLISTELEMENT_OFFSET UNITYSDK_OFFSET(0x26FEB60)
#define GEMPRODUCTNOTICEDELEGATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FEC20)
#define GEMPRODUCTNOTICEDELEGATOR_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define GEMPRODUCTNOTICEDELEGATOR_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0x26FEC30)
#define GEMPRODUCTNOTICEDELEGATOR_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define GEMPRODUCTNOTICEDELEGATOR_ONOK_OFFSET UNITYSDK_OFFSET(0x000000)
#define GEMPRODUCTNOTICEDELEGATOR_SETLOCALIZE_OFFSET UNITYSDK_OFFSET(0x26FECC0)
#define GEMPRODUCTNOTICEDELEGATOR_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int GemProductNoticeDelegator_TypeDefinitionIndex = 7065;

	class GemProductNoticeDelegator : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* Co_SetShopListElement(UIShopListElement_Gem* arg, ::MX::GameLogic::DBModel::PurchaseCountDB* arg2, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(UIShopListElement_Gem*, ::MX::GameLogic::DBModel::PurchaseCountDB*, ::MX::GameLogic::DBModel::MonthlyProductPurchaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + GEMPRODUCTNOTICEDELEGATOR_CO_SETSHOPLISTELEMENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMPRODUCTNOTICEDELEGATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMPRODUCTNOTICEDELEGATOR_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_isTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMPRODUCTNOTICEDELEGATOR_GET_ISTEENAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMPRODUCTNOTICEDELEGATOR_GETPRODUCTLIST_OFFSET))(nullptr);
		}

		::System::String* OnOk()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMPRODUCTNOTICEDELEGATOR_ONOK_OFFSET))(nullptr);
		}

		::System::Void SetLocalize(UILabel* arg, UILabel* arg2, UILabel* arg3)
		{
			((::System::Void(*)(UILabel*, UILabel*, UILabel*, ::PVOID))((::PBYTE)hIl2Cpp + GEMPRODUCTNOTICEDELEGATOR_SETLOCALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnChangeDoNotOpenTodayToggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GEMPRODUCTNOTICEDELEGATOR_ONCHANGEDONOTOPENTODAYTOGGLE_OFFSET))(arg, nullptr);
		}

	};

