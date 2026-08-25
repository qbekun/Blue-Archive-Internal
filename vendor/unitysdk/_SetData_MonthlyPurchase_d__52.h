#pragma once
#include "unitysdk.h"

class UIShopListElement_Gem;
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }
namespace MX::GameLogic::DBModel { class MonthlyProductPurchaseDB; }

#define <SETDATA_MONTHLYPURCHASE>D__52_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB5290)
#define <SETDATA_MONTHLYPURCHASE>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB7BF0)
#define <SETDATA_MONTHLYPURCHASE>D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAB7C00)
#define <SETDATA_MONTHLYPURCHASE>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB7C70)
#define <SETDATA_MONTHLYPURCHASE>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xAB7C80)
#define <SETDATA_MONTHLYPURCHASE>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB7CD0)

	inline static constexpr unsigned int <SetData_MonthlyPurchase>d__52_TypeDefinitionIndex = 8004;

	class <SetData_MonthlyPurchase>d__52 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIShopListElement_Gem* __4__this; // 0x20
		::MX::GameLogic::DBModel::PurchaseCountDB* purchaseCount; // 0x28
		::System::Boolean isTeenage; // 0x30
		::MX::GameLogic::DBModel::MonthlyProductPurchaseDB* monthlyPurchase; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASE>D__52_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASE>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASE>D__52_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASE>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASE>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASE>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

