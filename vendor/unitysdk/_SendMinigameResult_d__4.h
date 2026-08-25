#pragma once
#include "unitysdk.h"

class UIMinigameRhythmVictoryBase;
class MiniGameRhythmSummaryNetworkTask;

#define <SENDMINIGAMERESULT>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0xD23C50)
#define <SENDMINIGAMERESULT>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD241B0)
#define <SENDMINIGAMERESULT>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD241C0)
#define <SENDMINIGAMERESULT>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD24380)
#define <SENDMINIGAMERESULT>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD24390)
#define <SENDMINIGAMERESULT>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD243E0)

	inline static constexpr unsigned int <SendMinigameResult>d__4_TypeDefinitionIndex = 716;

	class <SendMinigameResult>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIMinigameRhythmVictoryBase* __4__this; // 0x20
		MiniGameRhythmSummaryNetworkTask* _task_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SENDMINIGAMERESULT>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDMINIGAMERESULT>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDMINIGAMERESULT>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDMINIGAMERESULT>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDMINIGAMERESULT>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDMINIGAMERESULT>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

