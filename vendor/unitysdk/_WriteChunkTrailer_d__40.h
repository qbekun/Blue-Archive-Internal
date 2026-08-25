#pragma once
#include "unitysdk.h"

#define <WRITECHUNKTRAILER>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A8B6E0)
#define <WRITECHUNKTRAILER>D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A8BF80)

	inline static constexpr unsigned int <WriteChunkTrailer>d__40_TypeDefinitionIndex = 29826;

	class <WriteChunkTrailer>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebRequestStream* __4__this; // 0x30
		::System::Threading::CancellationTokenSource* _cts_5__2; // 0x38
		::System::Threading::Tasks::Task* _timeoutTask_5__3; // 0x40
		Il2CppObject* __u__1; // 0x48
		ConfiguredTaskAwaiter* __u__2; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITECHUNKTRAILER>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITECHUNKTRAILER>D__40_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

