#pragma once
#include "unitysdk.h"

class UIMinigameRhythmBattle;
class <>c__DisplayClass59_0;

#define <PLAYGAMEENDANIMATION>D__59_.CTOR_OFFSET UNITYSDK_OFFSET(0xD1A990)
#define <PLAYGAMEENDANIMATION>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1AE00)
#define <PLAYGAMEENDANIMATION>D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD1AE10)
#define <PLAYGAMEENDANIMATION>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1AFB0)
#define <PLAYGAMEENDANIMATION>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD1AFC0)
#define <PLAYGAMEENDANIMATION>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1B010)

	inline static constexpr unsigned int <PlayGameEndAnimation>d__59_TypeDefinitionIndex = 681;

	class <PlayGameEndAnimation>d__59 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean isGameOver; // 0x20
		UIMinigameRhythmBattle* __4__this; // 0x28
		<>c__DisplayClass59_0* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYGAMEENDANIMATION>D__59_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYGAMEENDANIMATION>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYGAMEENDANIMATION>D__59_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYGAMEENDANIMATION>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYGAMEENDANIMATION>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYGAMEENDANIMATION>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

