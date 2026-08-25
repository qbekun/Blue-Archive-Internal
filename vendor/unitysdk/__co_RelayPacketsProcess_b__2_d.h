#pragma once
#include "unitysdk.h"

class <>c__DisplayClass48_0;

#define <<CO_RELAYPACKETSPROCESS>B__2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x201EC40)
#define <<CO_RELAYPACKETSPROCESS>B__2>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x201EF40)

	inline static constexpr unsigned int <<co_RelayPacketsProcess>b__2>d_TypeDefinitionIndex = 3166;

	class <<co_RelayPacketsProcess>b__2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		<>c__DisplayClass48_0* __4__this; // 0x30
		Il2CppObject* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_RELAYPACKETSPROCESS>B__2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<CO_RELAYPACKETSPROCESS>B__2>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

