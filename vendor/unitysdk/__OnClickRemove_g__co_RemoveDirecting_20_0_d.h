#pragma once
#include "unitysdk.h"

class UICardGame_Rest_Popup_RemoveCard;
class <>c__DisplayClass20_2;

#define <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA51E20)
#define <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA521A0)
#define <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA521B0)
#define <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA52460)
#define <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA52470)
#define <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA524C0)

	inline static constexpr unsigned int <<OnClickRemove>g__co_RemoveDirecting|20_0>d_TypeDefinitionIndex = 478;

	class <<OnClickRemove>g__co_RemoveDirecting|20_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICardGame_Rest_Popup_RemoveCard* __4__this; // 0x20
		<>c__DisplayClass20_2* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKREMOVE>G__CO_REMOVEDIRECTING|20_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

