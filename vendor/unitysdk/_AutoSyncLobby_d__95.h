#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class <>c__DisplayClass95_0;
class InteractiveWorldRaidTask;
class <>c__DisplayClass95_2;
class WorldRaidObject;
class Awaiter;

#define <AUTOSYNCLOBBY>D__95_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26E0B50)
#define <AUTOSYNCLOBBY>D__95_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26E2A20)

	inline static constexpr unsigned int <AutoSyncLobby>d__95_TypeDefinitionIndex = 383;

	class <AutoSyncLobby>d__95 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x28
		<>c__DisplayClass95_0* __8__1; // 0x30
		InteractiveWorldRaidTask* __4__this; // 0x48
		<>c__DisplayClass95_2* __8__2; // 0x50
		WorldRaidObject* _worldRaidObject_5__2; // 0x58
		::System::Boolean _isBossDamaged_5__3; // 0x60
		Awaiter* __u__1; // 0x68
		Il2CppObject* _beforeSyncBossList_5__4; // 0x78

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <AUTOSYNCLOBBY>D__95_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <AUTOSYNCLOBBY>D__95_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

