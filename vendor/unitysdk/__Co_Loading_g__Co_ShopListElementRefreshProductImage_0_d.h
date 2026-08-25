#pragma once
#include "unitysdk.h"

class <>c__DisplayClass26_0;
class UIShopListElement_Gem;

#define <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xAC83E0)
#define <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC8510)
#define <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAC8520)
#define <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAC8660)
#define <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xAC8670)
#define <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAC86C0)

	inline static constexpr unsigned int <<Co_Loading>g__Co_ShopListElementRefreshProductImage|0>d_TypeDefinitionIndex = 8035;

	class <<Co_Loading>g__Co_ShopListElementRefreshProductImage|0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass26_0* __4__this; // 0x20
		UIShopListElement_Gem* shopListElement; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_LOADING>G__CO_SHOPLISTELEMENTREFRESHPRODUCTIMAGE|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

