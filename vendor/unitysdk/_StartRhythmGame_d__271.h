#pragma once
#include "unitysdk.h"

namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }
namespace MX::Data { class MiniGameRhythmData; }
namespace MX::Data { class MiniGameRhythmBgmInfo; }
namespace MX::Data { class EventContentSeasonInfo; }

#define <STARTRHYTHMGAME>D__271_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD4C0)
#define <STARTRHYTHMGAME>D__271_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DAECB0)
#define <STARTRHYTHMGAME>D__271_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DAECC0)
#define <STARTRHYTHMGAME>D__271_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB0040)
#define <STARTRHYTHMGAME>D__271_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DB0050)
#define <STARTRHYTHMGAME>D__271_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB00A0)

	inline static constexpr unsigned int <StartRhythmGame>d__271_TypeDefinitionIndex = 20418;

	class <StartRhythmGame>d__271 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::MinigameRhythm::MinigameRhythmLogicManager* __4__this; // 0x20
		<>c__DisplayClass271_0* __8__1; // 0x28
		::MX::Data::MiniGameRhythmData* rhythmData; // 0x30
		MinigameRhythmOption* rhythmOption; // 0x38
		::MX::Data::MiniGameRhythmBgmInfo* settingInfo; // 0x40
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <STARTRHYTHMGAME>D__271_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTRHYTHMGAME>D__271_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTRHYTHMGAME>D__271_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTRHYTHMGAME>D__271_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTRHYTHMGAME>D__271_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTRHYTHMGAME>D__271_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

