#pragma once
#include "unitysdk.h"

class UIDefeat;
class PopupType;
class <>c__DisplayClass70_0;
class <>c__DisplayClass70_1;
class <>c__DisplayClass70_2;
class <>c__DisplayClass70_4;
class <>c__DisplayClass70_5;
class <>c__DisplayClass70_7;
class UIEventStageResult;

#define <SHOWPOPUP>D__70_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C9DB0)
#define <SHOWPOPUP>D__70_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x23CE5C0)
#define <SHOWPOPUP>D__70_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x23CE5D0)
#define <SHOWPOPUP>D__70_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23CF6D0)
#define <SHOWPOPUP>D__70_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x23CF6E0)
#define <SHOWPOPUP>D__70_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23CF730)

	inline static constexpr unsigned int <ShowPopup>d__70_TypeDefinitionIndex = 5296;

	class <ShowPopup>d__70 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIDefeat* __4__this; // 0x20
		PopupType* popupType; // 0x28
		<>c__DisplayClass70_0* __8__1; // 0x30
		<>c__DisplayClass70_1* __8__2; // 0x38
		<>c__DisplayClass70_2* __8__3; // 0x40
		<>c__DisplayClass70_4* __8__4; // 0x48
		<>c__DisplayClass70_5* __8__5; // 0x50
		<>c__DisplayClass70_7* __8__6; // 0x58
		UIEventStageResult* _ui_5__2; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__70_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__70_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__70_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__70_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__70_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWPOPUP>D__70_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

