#pragma once
#include "unitysdk.h"

class UIEventFortuneGachaShop_851;
namespace MX::NetworkProtocol { class EventContentFortuneGachaPurchaseResponse; }

#define <CO_SHOWPURCHASEDRESULT>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x24AD6C0)
#define <CO_SHOWPURCHASEDRESULT>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24AD890)
#define <CO_SHOWPURCHASEDRESULT>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24AD8A0)
#define <CO_SHOWPURCHASEDRESULT>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24ADD00)
#define <CO_SHOWPURCHASEDRESULT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24ADD10)
#define <CO_SHOWPURCHASEDRESULT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24ADD60)

	inline static constexpr unsigned int <Co_ShowPurchasedResult>d__9_TypeDefinitionIndex = 5836;

	class <Co_ShowPurchasedResult>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventFortuneGachaShop_851* __4__this; // 0x20
		::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* response; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWPURCHASEDRESULT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

