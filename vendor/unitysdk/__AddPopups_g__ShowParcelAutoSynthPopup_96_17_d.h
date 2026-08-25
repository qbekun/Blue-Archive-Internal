#pragma once
#include "unitysdk.h"

class <>c__DisplayClass96_17;

#define <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2646600)
#define <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2667E30)
#define <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2667E40)
#define <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2668A20)
#define <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2668A30)
#define <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2668A80)

	inline static constexpr unsigned int <<AddPopups>g__ShowParcelAutoSynthPopup|96_17>d_TypeDefinitionIndex = 6676;

	class <<AddPopups>g__ShowParcelAutoSynthPopup|96_17>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass96_17* __8__1; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWPARCELAUTOSYNTHPOPUP|96_17>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

