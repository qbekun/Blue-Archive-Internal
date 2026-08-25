#pragma once
#include "unitysdk.h"

class UIPopup_MinigameRhythmOption_Timing;
namespace UnityEngine { class Animation; }

#define <WAITANDPLAYTIMINGMEASURE>D__52_.CTOR_OFFSET UNITYSDK_OFFSET(0xE3F050)
#define <WAITANDPLAYTIMINGMEASURE>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE3F0B0)
#define <WAITANDPLAYTIMINGMEASURE>D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE3F0C0)
#define <WAITANDPLAYTIMINGMEASURE>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE3F310)
#define <WAITANDPLAYTIMINGMEASURE>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE3F320)
#define <WAITANDPLAYTIMINGMEASURE>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE3F370)

	inline static constexpr unsigned int <WaitAndPlayTimingMeasure>d__52_TypeDefinitionIndex = 722;

	class <WaitAndPlayTimingMeasure>d__52 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_MinigameRhythmOption_Timing* __4__this; // 0x20
		::UnityEngine::Animation* noteAnimation; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITANDPLAYTIMINGMEASURE>D__52_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDPLAYTIMINGMEASURE>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDPLAYTIMINGMEASURE>D__52_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDPLAYTIMINGMEASURE>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDPLAYTIMINGMEASURE>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDPLAYTIMINGMEASURE>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

