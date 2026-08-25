#pragma once
#include "unitysdk.h"

class UILobbyScreenshotMode;

#define <COREFRESHBUTTONDISPLAY>D__15_.CTOR_OFFSET UNITYSDK_OFFSET(0x2676530)
#define <COREFRESHBUTTONDISPLAY>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2676F80)
#define <COREFRESHBUTTONDISPLAY>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2676F90)
#define <COREFRESHBUTTONDISPLAY>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26772C0)
#define <COREFRESHBUTTONDISPLAY>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26772D0)
#define <COREFRESHBUTTONDISPLAY>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2677320)

	inline static constexpr unsigned int <CoRefreshButtonDisplay>d__15_TypeDefinitionIndex = 6718;

	class <CoRefreshButtonDisplay>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UILobbyScreenshotMode* __4__this; // 0x20
		::System::Single _waitTime_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHBUTTONDISPLAY>D__15_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHBUTTONDISPLAY>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHBUTTONDISPLAY>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHBUTTONDISPLAY>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHBUTTONDISPLAY>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COREFRESHBUTTONDISPLAY>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

