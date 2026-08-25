#pragma once
#include "unitysdk.h"

class <>c__DisplayClass96_0;

#define <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2660580)
#define <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661610)
#define <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2661670)
#define <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x2661970)
#define <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26619C0)
#define <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26619D0)
#define <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2661A20)

	inline static constexpr unsigned int <<AddPopups>g__ShowGuidePopup|14>d_TypeDefinitionIndex = 6641;

	class <<AddPopups>g__ShowGuidePopup|14>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass96_0* __4__this; // 0x20
		::System::Boolean _alreadySurveyPopupShowed_5__2; // 0x28
		Il2CppObject* __7__wrap2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWGUIDEPOPUP|14>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

