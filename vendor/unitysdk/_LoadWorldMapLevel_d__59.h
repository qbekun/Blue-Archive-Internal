#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class InteractiveWorldRaidTask;
class Awaiter;

#define <LOADWORLDMAPLEVEL>D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26DC180)
#define <LOADWORLDMAPLEVEL>D__59_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26DC940)

	inline static constexpr unsigned int <LoadWorldMapLevel>d__59_TypeDefinitionIndex = 364;

	class <LoadWorldMapLevel>d__59 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::String* artLevel; // 0x28
		InteractiveWorldRaidTask* __4__this; // 0x30
		::System::String* designLevel; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADWORLDMAPLEVEL>D__59_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADWORLDMAPLEVEL>D__59_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

