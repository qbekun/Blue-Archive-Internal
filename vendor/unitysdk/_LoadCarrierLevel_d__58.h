#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class InteractiveWorldRaidTask;
class <>c__DisplayClass58_0;
class Awaiter;

#define <LOADCARRIERLEVEL>D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26DB840)
#define <LOADCARRIERLEVEL>D__58_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26DC170)

	inline static constexpr unsigned int <LoadCarrierLevel>d__58_TypeDefinitionIndex = 363;

	class <LoadCarrierLevel>d__58 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		InteractiveWorldRaidTask* __4__this; // 0x28
		::System::String* artLevel; // 0x30
		<>c__DisplayClass58_0* __8__1; // 0x38
		::System::String* designLevel; // 0x40
		Awaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADCARRIERLEVEL>D__58_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADCARRIERLEVEL>D__58_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

