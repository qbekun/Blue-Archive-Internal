#pragma once
#include "unitysdk.h"

class <>c__DisplayClass40_0;
class UIWorldRaidLobby;
class WorldRaidObject;
namespace UnityEngine { class WaitForSecondsRealtime; }
class WorldRaidBossListNetworkTask;

#define <COAUTOSYNCLOBBY>D__40_.CTOR_OFFSET UNITYSDK_OFFSET(0xC00640)
#define <COAUTOSYNCLOBBY>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC05570)
#define <COAUTOSYNCLOBBY>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC05580)
#define <COAUTOSYNCLOBBY>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC06940)
#define <COAUTOSYNCLOBBY>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC06950)
#define <COAUTOSYNCLOBBY>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC069A0)

	inline static constexpr unsigned int <CoAutoSyncLobby>d__40_TypeDefinitionIndex = 8788;

	class <CoAutoSyncLobby>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass40_0* __8__1; // 0x20
		UIWorldRaidLobby* __4__this; // 0x38
		WorldRaidObject* _worldRaidObject_5__2; // 0x40
		::UnityEngine::WaitForSecondsRealtime* _clientWaitTime_5__3; // 0x48
		::System::Boolean _isBossDamaged_5__4; // 0x50
		Il2CppObject* _beforeSyncBossList_5__5; // 0x58
		WorldRaidBossListNetworkTask* _task_5__6; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COAUTOSYNCLOBBY>D__40_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOSYNCLOBBY>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOSYNCLOBBY>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOSYNCLOBBY>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOSYNCLOBBY>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAUTOSYNCLOBBY>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

