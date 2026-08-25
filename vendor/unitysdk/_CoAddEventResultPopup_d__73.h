#pragma once
#include "unitysdk.h"

class UIDefeat;
class <>c__DisplayClass73_0;

#define <COADDEVENTRESULTPOPUP>D__73_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C9F40)
#define <COADDEVENTRESULTPOPUP>D__73_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x23CF940)
#define <COADDEVENTRESULTPOPUP>D__73_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x23CF950)
#define <COADDEVENTRESULTPOPUP>D__73_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23D0350)
#define <COADDEVENTRESULTPOPUP>D__73_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x23D0360)
#define <COADDEVENTRESULTPOPUP>D__73_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23D03B0)

	inline static constexpr unsigned int <CoAddEventResultPopup>d__73_TypeDefinitionIndex = 5299;

	class <CoAddEventResultPopup>d__73 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIDefeat* __4__this; // 0x20
		<>c__DisplayClass73_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COADDEVENTRESULTPOPUP>D__73_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADDEVENTRESULTPOPUP>D__73_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADDEVENTRESULTPOPUP>D__73_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADDEVENTRESULTPOPUP>D__73_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADDEVENTRESULTPOPUP>D__73_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COADDEVENTRESULTPOPUP>D__73_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

