#pragma once
#include "unitysdk.h"

class UIEventCardShop;
class <>c__DisplayClass49_0;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define <CO_SHOWPURCHASEDRESULT>D__49_.CTOR_OFFSET UNITYSDK_OFFSET(0x24865E0)
#define <CO_SHOWPURCHASEDRESULT>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x248BEB0)
#define <CO_SHOWPURCHASEDRESULT>D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x248BF20)
#define <CO_SHOWPURCHASEDRESULT>D__49___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x248D1B0)
#define <CO_SHOWPURCHASEDRESULT>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x248D200)
#define <CO_SHOWPURCHASEDRESULT>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x248D210)
#define <CO_SHOWPURCHASEDRESULT>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x248D260)

	inline static constexpr unsigned int <Co_ShowPurchasedResult>d__49_TypeDefinitionIndex = 5707;

	class <Co_ShowPurchasedResult>d__49 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventCardShop* __4__this; // 0x20
		Il2CppObject* cardShopPurchaseHistoryDBList; // 0x28
		Il2CppObject* cardShopElementDBList; // 0x30
		<>c__DisplayClass49_0* __8__1; // 0x38
		::MX::GameLogic::Parcel::ParcelResultDB* parcelResultDB; // 0x40
		Il2CppObject* _flipTargetList_5__2; // 0x48
		Il2CppObject* __7__wrap2; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__49_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__49_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__49___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

