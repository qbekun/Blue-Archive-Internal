#pragma once
#include "unitysdk.h"

class UIEventCollection;
class <>c__DisplayClass16_0;

#define <CO_SETSCROLLPOSITION>D__16_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A0B60)
#define <CO_SETSCROLLPOSITION>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24A1ED0)
#define <CO_SETSCROLLPOSITION>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24A1EE0)
#define <CO_SETSCROLLPOSITION>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24A25D0)
#define <CO_SETSCROLLPOSITION>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24A25E0)
#define <CO_SETSCROLLPOSITION>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24A2630)

	inline static constexpr unsigned int <Co_SetScrollPosition>d__16_TypeDefinitionIndex = 5784;

	class <Co_SetScrollPosition>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 bgObjectUniqueId; // 0x20
		UIEventCollection* __4__this; // 0x28
		<>c__DisplayClass16_0* __8__1; // 0x30
		::System::Single _elapsedTime_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSCROLLPOSITION>D__16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSCROLLPOSITION>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSCROLLPOSITION>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSCROLLPOSITION>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSCROLLPOSITION>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETSCROLLPOSITION>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

