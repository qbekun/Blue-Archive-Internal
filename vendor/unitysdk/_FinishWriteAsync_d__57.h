#pragma once
#include "unitysdk.h"

#define <FINISHWRITEASYNC>D__57_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9318800)
#define <FINISHWRITEASYNC>D__57_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9318B00)

	inline static constexpr unsigned int <FinishWriteAsync>d__57_TypeDefinitionIndex = 25286;

	class <FinishWriteAsync>d__57 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* writeTask; // 0x30
		::Il2CppArray<::System::Object*>* localBuffer; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINISHWRITEASYNC>D__57_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FINISHWRITEASYNC>D__57_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

