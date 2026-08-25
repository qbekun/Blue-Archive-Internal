#pragma once
#include "unitysdk.h"

class ControllerManager;

#define <VIBRATIONCOROUTINE>D__83_.CTOR_OFFSET UNITYSDK_OFFSET(0xC7D420)
#define <VIBRATIONCOROUTINE>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7DDD0)
#define <VIBRATIONCOROUTINE>D__83_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC7DDE0)
#define <VIBRATIONCOROUTINE>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC7DF70)
#define <VIBRATIONCOROUTINE>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC7DF80)
#define <VIBRATIONCOROUTINE>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC7DFD0)

	inline static constexpr unsigned int <VibrationCoroutine>d__83_TypeDefinitionIndex = 9051;

	class <VibrationCoroutine>d__83 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ControllerManager* __4__this; // 0x20
		::System::Single _startTime_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <VIBRATIONCOROUTINE>D__83_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <VIBRATIONCOROUTINE>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <VIBRATIONCOROUTINE>D__83_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <VIBRATIONCOROUTINE>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <VIBRATIONCOROUTINE>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <VIBRATIONCOROUTINE>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

