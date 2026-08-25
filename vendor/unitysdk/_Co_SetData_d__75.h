#pragma once
#include "unitysdk.h"

class UIShop_Popup_Gem_Confirm;
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
class <>c__DisplayClass75_0;

#define <CO_SETDATA>D__75_.CTOR_OFFSET UNITYSDK_OFFSET(0xACC1F0)
#define <CO_SETDATA>D__75_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD0850)
#define <CO_SETDATA>D__75_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAD0860)
#define <CO_SETDATA>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAD1120)
#define <CO_SETDATA>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xAD1130)
#define <CO_SETDATA>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAD1180)

	inline static constexpr unsigned int <Co_SetData>d__75_TypeDefinitionIndex = 8048;

	class <Co_SetData>d__75 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIShop_Popup_Gem_Confirm* __4__this; // 0x20
		::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* monthlyPurchase; // 0x28
		::System::Boolean isMonthlyProductInMailbox; // 0x30
		::System::Boolean isTeenage; // 0x31
		::MX::GameLogic::DBModel::PurchaseCountDB* purchaseCount; // 0x38
		<>c__DisplayClass75_0* __8__1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATA>D__75_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATA>D__75_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATA>D__75_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATA>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATA>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATA>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

