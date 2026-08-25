#pragma once
#include "unitysdk.h"

#define <READASYNC>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A87870)
#define <READASYNC>D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A87E80)

	inline static constexpr unsigned int <ReadAsync>d__28_TypeDefinitionIndex = 29817;

	class <ReadAsync>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::WebReadStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::Il2CppArray<::System::Object*>* buffer; // 0x40
		::System::Int32 offset; // 0x48
		::System::Int32 size; // 0x4C
		Il2CppObject* __u__1; // 0x50
		ConfiguredTaskAwaiter* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READASYNC>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READASYNC>D__28_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

