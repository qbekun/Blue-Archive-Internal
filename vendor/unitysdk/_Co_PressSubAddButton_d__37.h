#pragma once
#include "unitysdk.h"

class ButtonActivator;
class UIPotentialBatchModeSlotDisplay;

#define <CO_PRESSSUBADDBUTTON>D__37_.CTOR_OFFSET UNITYSDK_OFFSET(0x2725F50)
#define <CO_PRESSSUBADDBUTTON>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2726900)
#define <CO_PRESSSUBADDBUTTON>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2726910)
#define <CO_PRESSSUBADDBUTTON>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2726B30)
#define <CO_PRESSSUBADDBUTTON>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2726B40)
#define <CO_PRESSSUBADDBUTTON>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2726B90)

	inline static constexpr unsigned int <Co_PressSubAddButton>d__37_TypeDefinitionIndex = 7174;

	class <Co_PressSubAddButton>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ButtonActivator* button; // 0x20
		UIPotentialBatchModeSlotDisplay* __4__this; // 0x28
		::System::Single _accumulatedDeltaTime_5__2; // 0x30
		::System::Single _executionDelay_5__3; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PRESSSUBADDBUTTON>D__37_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRESSSUBADDBUTTON>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRESSSUBADDBUTTON>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRESSSUBADDBUTTON>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRESSSUBADDBUTTON>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PRESSSUBADDBUTTON>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

