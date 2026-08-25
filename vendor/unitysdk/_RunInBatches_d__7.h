#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }

#define <RUNINBATCHES>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18063C0)
#define <RUNINBATCHES>D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x18074B0)

	inline static constexpr unsigned int <RunInBatches>d__7_TypeDefinitionIndex = 15686;

	class <RunInBatches>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::Int32 batchSize; // 0x28
		<>c__DisplayClass7_0* __8__1; // 0x30
		::System::Threading::CancellationToken* token; // 0x38
		<>c__DisplayClass7_2* __8__2; // 0x40
		Il2CppObject* _dataFactories_5__2; // 0x48
		Il2CppObject* _tasks_5__3; // 0x50
		Awaiter* __u__1; // 0x58
		::System::Int32 _i_5__4; // 0x5C
		::System::Int32 _count_5__5; // 0x60
		::System::Int32 _j_5__6; // 0x64
		::System::Runtime::CompilerServices::TaskAwaiter* __u__2; // 0x68
		Awaiter* __u__3; // 0x70
		Awaiter* __u__4; // 0x80

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUNINBATCHES>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUNINBATCHES>D__7_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

