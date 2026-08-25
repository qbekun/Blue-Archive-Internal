#pragma once
#include "unitysdk.h"

#define <READFROMUNDERLYINGSTREAMASYNC>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x93106C0)
#define <READFROMUNDERLYINGSTREAMASYNC>D__51_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9311330)

	inline static constexpr unsigned int <ReadFromUnderlyingStreamAsync>d__51_TypeDefinitionIndex = 25274;

	class <ReadFromUnderlyingStreamAsync>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Threading::Tasks::Task* semaphoreLockTask; // 0x38
		::System::IO::BufferedStream* __4__this; // 0x40
		Il2CppObject* buffer; // 0x48
		::System::Int32 bytesAlreadySatisfied; // 0x58
		::System::Threading::CancellationToken* cancellationToken; // 0x60
		ConfiguredTaskAwaiter* __u__1; // 0x68
		::System::Int32 __7__wrap1; // 0x78
		Il2CppObject* __u__2; // 0x80

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READFROMUNDERLYINGSTREAMASYNC>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READFROMUNDERLYINGSTREAMASYNC>D__51_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

