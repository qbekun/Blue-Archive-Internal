#pragma once
#include "unitysdk.h"

class UIVictory;
class PopupType;
class <>c__DisplayClass94_0;
class <>c__DisplayClass94_1;
class <>c__DisplayClass94_2;
class <>c__DisplayClass94_3;

#define <SHOWPOPUP>D__94_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB48A0)
#define <SHOWPOPUP>D__94_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB8D40)
#define <SHOWPOPUP>D__94_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBB8D50)
#define <SHOWPOPUP>D__94_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBB9AD0)
#define <SHOWPOPUP>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBB9AE0)
#define <SHOWPOPUP>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBB9B30)

	inline static constexpr unsigned int <ShowPopup>d__94_TypeDefinitionIndex = 8587;

	class <ShowPopup>d__94 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIVictory* __4__this; // 0x20
		PopupType* popupType; // 0x28
		<>c__DisplayClass94_0* __8__1; // 0x30
		<>c__DisplayClass94_1* __8__2; // 0x38
		<>c__DisplayClass94_2* __8__3; // 0x40
		<>c__DisplayClass94_3* __8__4; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__94_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__94_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__94_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__94_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

