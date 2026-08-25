#pragma once
#include "unitysdk.h"

class UIShopListElement_Gem;
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
class RepurchaseGemProductNotice;

#define <CO_SETSHOPLISTELEMENT>D__3_.CTOR_OFFSET UNITYSDK_OFFSET(0x27005E0)
#define <CO_SETSHOPLISTELEMENT>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2700E90)
#define <CO_SETSHOPLISTELEMENT>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2700EA0)
#define <CO_SETSHOPLISTELEMENT>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2701060)
#define <CO_SETSHOPLISTELEMENT>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2701070)
#define <CO_SETSHOPLISTELEMENT>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27010C0)

	inline static constexpr unsigned int <Co_SetShopListElement>d__3_TypeDefinitionIndex = 7071;

	class <Co_SetShopListElement>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIShopListElement_Gem* shopListElement; // 0x20
		::MX::GameLogic::DBModel::PurchaseCountDB* purchaseCountDB; // 0x28
		::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* monthlyProductPurchaseDB; // 0x30
		RepurchaseGemProductNotice* __4__this; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSHOPLISTELEMENT>D__3_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSHOPLISTELEMENT>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSHOPLISTELEMENT>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSHOPLISTELEMENT>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSHOPLISTELEMENT>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSHOPLISTELEMENT>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

