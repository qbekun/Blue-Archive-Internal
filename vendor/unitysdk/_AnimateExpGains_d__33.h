#pragma once
#include "unitysdk.h"

class UIBattlePassLevelInfo;

#define <ANIMATEEXPGAINS>D__33_.CTOR_OFFSET UNITYSDK_OFFSET(0x2241920)
#define <ANIMATEEXPGAINS>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2243580)
#define <ANIMATEEXPGAINS>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2243590)
#define <ANIMATEEXPGAINS>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22439B0)
#define <ANIMATEEXPGAINS>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22439C0)
#define <ANIMATEEXPGAINS>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2243A10)

	inline static constexpr unsigned int <AnimateExpGains>d__33_TypeDefinitionIndex = 4489;

	class <AnimateExpGains>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIBattlePassLevelInfo* __4__this; // 0x20
		::System::Single _remainingExpGain_5__2; // 0x28
		::System::Single _expToAnimate_5__3; // 0x2C
		::System::Single _segmentAnimationDuration_5__4; // 0x30
		::System::Single _startExp_5__5; // 0x34
		::System::Single _endExp_5__6; // 0x38
		::System::Single _elapsedTime_5__7; // 0x3C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEEXPGAINS>D__33_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEEXPGAINS>D__33_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEEXPGAINS>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEEXPGAINS>D__33_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEEXPGAINS>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEEXPGAINS>D__33_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

