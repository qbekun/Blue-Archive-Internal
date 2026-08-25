#pragma once
#include "unitysdk.h"

class <>c__DisplayClass96_9;

#define <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2645EA0)
#define <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26655B0)
#define <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26655C0)
#define <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2666000)
#define <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2666010)
#define <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2666060)

	inline static constexpr unsigned int <<AddPopups>g__ShowExpireEndItemExchange|96_9>d_TypeDefinitionIndex = 6670;

	class <<AddPopups>g__ShowExpireEndItemExchange|96_9>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass96_9* __8__1; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWEXPIREENDITEMEXCHANGE|96_9>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

