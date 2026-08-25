#pragma once
#include "unitysdk.h"

class UIEventFortuneGachaShop;

#define <CO_STARTSHOWPURCHASEDRESULT>D__43_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A9590)
#define <CO_STARTSHOWPURCHASEDRESULT>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24AB3E0)
#define <CO_STARTSHOWPURCHASEDRESULT>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24AB3F0)
#define <CO_STARTSHOWPURCHASEDRESULT>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24AB4B0)
#define <CO_STARTSHOWPURCHASEDRESULT>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24AB4C0)
#define <CO_STARTSHOWPURCHASEDRESULT>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24AB510)

	inline static constexpr unsigned int <Co_StartShowPurchasedResult>d__43_TypeDefinitionIndex = 5826;

	class <Co_StartShowPurchasedResult>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventFortuneGachaShop* __4__this; // 0x20
		::System::Int32 startAniIndex; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTSHOWPURCHASEDRESULT>D__43_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTSHOWPURCHASEDRESULT>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTSHOWPURCHASEDRESULT>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTSHOWPURCHASEDRESULT>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTSHOWPURCHASEDRESULT>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTSHOWPURCHASEDRESULT>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

