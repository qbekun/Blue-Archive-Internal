#pragma once
#include "unitysdk.h"

class <>c__DisplayClass96_13;
class UIManager;

#define <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2646390)
#define <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2667280)
#define <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2667290)
#define <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2667950)
#define <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2667960)
#define <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26679B0)

	inline static constexpr unsigned int <<AddPopups>g__ShowRepurchaseProductPopup|96_13>d_TypeDefinitionIndex = 6674;

	class <<AddPopups>g__ShowRepurchaseProductPopup|96_13>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass96_13* __8__1; // 0x20
		UIManager* _uiManager_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ADDPOPUPS>G__SHOWREPURCHASEPRODUCTPOPUP|96_13>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

