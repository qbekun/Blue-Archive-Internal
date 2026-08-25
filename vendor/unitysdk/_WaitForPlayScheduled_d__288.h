#pragma once
#include "unitysdk.h"

namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }

#define <WAITFORPLAYSCHEDULED>D__288_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DABC70)
#define <WAITFORPLAYSCHEDULED>D__288_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB00B0)
#define <WAITFORPLAYSCHEDULED>D__288_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DB00C0)
#define <WAITFORPLAYSCHEDULED>D__288_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB0170)
#define <WAITFORPLAYSCHEDULED>D__288_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DB0180)
#define <WAITFORPLAYSCHEDULED>D__288_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB01D0)

	inline static constexpr unsigned int <WaitForPlayScheduled>d__288_TypeDefinitionIndex = 20419;

	class <WaitForPlayScheduled>d__288 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single time; // 0x20
		::MX::MinigameRhythm::MinigameRhythmLogicManager* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITFORPLAYSCHEDULED>D__288_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORPLAYSCHEDULED>D__288_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORPLAYSCHEDULED>D__288_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORPLAYSCHEDULED>D__288_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORPLAYSCHEDULED>D__288_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORPLAYSCHEDULED>D__288_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

