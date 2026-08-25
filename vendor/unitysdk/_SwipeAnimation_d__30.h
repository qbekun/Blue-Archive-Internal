#pragma once
#include "unitysdk.h"

class UIScenarioMode_ModeSelectSeriesController;

#define <SWIPEANIMATION>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0x280EDD0)
#define <SWIPEANIMATION>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x280EEF0)
#define <SWIPEANIMATION>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x280EF00)
#define <SWIPEANIMATION>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x280F080)
#define <SWIPEANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x280F090)
#define <SWIPEANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x280F0E0)

	inline static constexpr unsigned int <SwipeAnimation>d__30_TypeDefinitionIndex = 7788;

	class <SwipeAnimation>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIScenarioMode_ModeSelectSeriesController* __4__this; // 0x20
		::System::Boolean isReverse; // 0x28
		::System::String* aniName; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SWIPEANIMATION>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWIPEANIMATION>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWIPEANIMATION>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWIPEANIMATION>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWIPEANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SWIPEANIMATION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

