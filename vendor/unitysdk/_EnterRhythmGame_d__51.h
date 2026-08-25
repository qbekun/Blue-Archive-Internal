#pragma once
#include "unitysdk.h"

class <>c__DisplayClass51_0;
class UIMinigameRhythmLobby;
namespace MX::Data { class MiniGameRhythmBgmInfo; }

#define <ENTERRHYTHMGAME>D__51_.CTOR_OFFSET UNITYSDK_OFFSET(0xD1EAB0)
#define <ENTERRHYTHMGAME>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1EFA0)
#define <ENTERRHYTHMGAME>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD1EFB0)
#define <ENTERRHYTHMGAME>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1F460)
#define <ENTERRHYTHMGAME>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD1F470)
#define <ENTERRHYTHMGAME>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1F4C0)

	inline static constexpr unsigned int <EnterRhythmGame>d__51_TypeDefinitionIndex = 689;

	class <EnterRhythmGame>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass51_0* __8__1; // 0x20
		UIMinigameRhythmLobby* __4__this; // 0x28
		::MX::Data::MiniGameRhythmBgmInfo* bgmInfo; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ENTERRHYTHMGAME>D__51_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERRHYTHMGAME>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERRHYTHMGAME>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERRHYTHMGAME>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERRHYTHMGAME>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERRHYTHMGAME>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

