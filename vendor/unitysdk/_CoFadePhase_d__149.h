#pragma once
#include "unitysdk.h"

class UIManager;

#define <COFADEPHASE>D__149_.CTOR_OFFSET UNITYSDK_OFFSET(0x268E930)
#define <COFADEPHASE>D__149_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26941B0)
#define <COFADEPHASE>D__149_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26941C0)
#define <COFADEPHASE>D__149_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2694310)
#define <COFADEPHASE>D__149_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2694320)
#define <COFADEPHASE>D__149_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2694370)

	inline static constexpr unsigned int <CoFadePhase>d__149_TypeDefinitionIndex = 6791;

	class <CoFadePhase>d__149 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIManager* __4__this; // 0x20
		::System::Single fromAlpha; // 0x28
		::System::Single toAlpha; // 0x2C
		::System::Single durationSec; // 0x30
		::System::Single _elapsed_5__2; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COFADEPHASE>D__149_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEPHASE>D__149_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEPHASE>D__149_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEPHASE>D__149_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEPHASE>D__149_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEPHASE>D__149_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

