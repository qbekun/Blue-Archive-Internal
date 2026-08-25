#pragma once
#include "unitysdk.h"

#define <REQUESTCOMMONASYNC>D__8`2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <REQUESTCOMMONASYNC>D__8`2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <RequestCommonAsync>d__8`2_TypeDefinitionIndex = 10388;

	class <RequestCommonAsync>d__8`2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __t__builder; // 0x0
		Il2CppObject* request; // 0x0
		Il2CppObject* customErrorAction; // 0x0
		Il2CppObject* __u__1; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTCOMMONASYNC>D__8`2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REQUESTCOMMONASYNC>D__8`2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

