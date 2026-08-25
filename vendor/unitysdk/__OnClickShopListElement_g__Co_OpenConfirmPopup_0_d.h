#pragma once
#include "unitysdk.h"

class <>c__DisplayClass29_0;

#define <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xACA970)
#define <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xACA990)
#define <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xACA9A0)
#define <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xACAC30)
#define <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xACAC40)
#define <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xACAC90)

	inline static constexpr unsigned int <<OnClickShopListElement>g__Co_OpenConfirmPopup|0>d_TypeDefinitionIndex = 8040;

	class <<OnClickShopListElement>g__Co_OpenConfirmPopup|0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass29_0* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKSHOPLISTELEMENT>G__CO_OPENCONFIRMPOPUP|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

