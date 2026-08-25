#pragma once
#include "unitysdk.h"

class UIShopListElement_Gem;
namespace MX::Data::Excel { class ShopCashExcel; }

#define <SETPRODUCTIMAGE>D__58_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB5FB0)
#define <SETPRODUCTIMAGE>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB8F50)
#define <SETPRODUCTIMAGE>D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAB8F60)
#define <SETPRODUCTIMAGE>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB9080)
#define <SETPRODUCTIMAGE>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xAB9090)
#define <SETPRODUCTIMAGE>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB90E0)

	inline static constexpr unsigned int <SetProductImage>d__58_TypeDefinitionIndex = 8007;

	class <SetProductImage>d__58 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIShopListElement_Gem* __4__this; // 0x20
		::MX::Data::Excel::ShopCashExcel* shopCashExcel; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__58_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__58_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETPRODUCTIMAGE>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

