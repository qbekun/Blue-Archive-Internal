#pragma once
#include "unitysdk.h"

#define <FINISHREADING>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A77B80)
#define <FINISHREADING>D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A78180)

	inline static constexpr unsigned int <FinishReading>d__8_TypeDefinitionIndex = 29786;

	class <FinishReading>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::MonoChunkStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40
		::Il2CppArray<::System::Object*>* _buffer_5__2; // 0x50
		Il2CppObject* __u__2; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINISHREADING>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FINISHREADING>D__8_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

