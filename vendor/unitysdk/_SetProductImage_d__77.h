#pragma once
#include "unitysdk.h"

class UIShop_Popup_Gem_Confirm;
namespace MX::Data::Excel { class ShopCashExcel; }
class <>c__DisplayClass77_0;

#define <SETPRODUCTIMAGE>D__77_.CTOR_OFFSET UNITYSDK_OFFSET(0xACC730)
#define <SETPRODUCTIMAGE>D__77_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD11E0)
#define <SETPRODUCTIMAGE>D__77_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAD11F0)
#define <SETPRODUCTIMAGE>D__77_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAD13B0)
#define <SETPRODUCTIMAGE>D__77_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xAD13C0)
#define <SETPRODUCTIMAGE>D__77_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAD1410)

	inline static constexpr unsigned int <SetProductImage>d__77_TypeDefinitionIndex = 8050;

	class <SetProductImage>d__77 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIShop_Popup_Gem_Confirm* __4__this; // 0x20
		::MX::Data::Excel::ShopCashExcel* shopCashExcel; // 0x28
		<>c__DisplayClass77_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__77_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__77_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__77_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__77_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__77_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__77_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

