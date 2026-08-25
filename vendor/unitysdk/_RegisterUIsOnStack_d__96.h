#pragma once
#include "unitysdk.h"

class UIManager;
class <>c__DisplayClass96_0;

#define <REGISTERUISONSTACK>D__96_.CTOR_OFFSET UNITYSDK_OFFSET(0x268BA40)
#define <REGISTERUISONSTACK>D__96_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26922F0)
#define <REGISTERUISONSTACK>D__96_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2692300)
#define <REGISTERUISONSTACK>D__96_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26924F0)
#define <REGISTERUISONSTACK>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2692500)
#define <REGISTERUISONSTACK>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2692550)

	inline static constexpr unsigned int <RegisterUIsOnStack>d__96_TypeDefinitionIndex = 6780;

	class <RegisterUIsOnStack>d__96 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::Il2CppArray<::System::Object*>* uiNames; // 0x20
		UIManager* __4__this; // 0x28
		<>c__DisplayClass96_0* __8__1; // 0x30
		::Il2CppArray<::System::Object*>* __7__wrap1; // 0x38
		::System::Int32 __7__wrap2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REGISTERUISONSTACK>D__96_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERUISONSTACK>D__96_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERUISONSTACK>D__96_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERUISONSTACK>D__96_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERUISONSTACK>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERUISONSTACK>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

