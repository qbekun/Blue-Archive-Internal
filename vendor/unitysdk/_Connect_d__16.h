#pragma once
#include "unitysdk.h"

#define <CONNECT>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A7F650)
#define <CONNECT>D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A80B10)

	inline static constexpr unsigned int <Connect>d__16_TypeDefinitionIndex = 29805;

	class <Connect>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebConnection* __4__this; // 0x30
		::System::Net::WebOperation* operation; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::Exception* _connectException_5__2; // 0x48
		::Il2CppArray<::System::Object*>* __7__wrap2; // 0x50
		::System::Int32 __7__wrap3; // 0x58
		ConfiguredTaskAwaiter* __u__1; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CONNECT>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CONNECT>D__16_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

