#pragma once
#include "unitysdk.h"

class UIShopListElement_Gem;
namespace MX::GameLogic::DBModel { class PurchaseCountDB; }

#define <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB51C0)
#define <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB7B00)
#define <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAB7B10)
#define <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB7B80)
#define <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xAB7B90)
#define <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB7BE0)

	inline static constexpr unsigned int <SetData_MonthlyPurchaseInMailBox>d__51_TypeDefinitionIndex = 8003;

	class <SetData_MonthlyPurchaseInMailBox>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIShopListElement_Gem* __4__this; // 0x20
		::MX::GameLogic::DBModel::PurchaseCountDB* purchaseCount; // 0x28
		::System::Boolean isTeenage; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETDATA_MONTHLYPURCHASEINMAILBOX>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

