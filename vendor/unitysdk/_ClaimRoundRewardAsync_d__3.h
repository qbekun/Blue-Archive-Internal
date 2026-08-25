#pragma once
#include "unitysdk.h"

class <>c__DisplayClass3_0;

#define <CLAIMROUNDREWARDASYNC>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2492150)
#define <CLAIMROUNDREWARDASYNC>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x24929E0)

	inline static constexpr unsigned int <ClaimRoundRewardAsync>d__3_TypeDefinitionIndex = 5732;

	class <ClaimRoundRewardAsync>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Int64 eventContentId; // 0x38
		<>c__DisplayClass3_0* __8__1; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLAIMROUNDREWARDASYNC>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CLAIMROUNDREWARDASYNC>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

