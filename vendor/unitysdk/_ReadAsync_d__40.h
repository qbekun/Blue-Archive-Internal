#pragma once
#include "unitysdk.h"

#define <READASYNC>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A8DCD0)
#define <READASYNC>D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A8E870)

	inline static constexpr unsigned int <ReadAsync>d__40_TypeDefinitionIndex = 29828;

	class <ReadAsync>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x30
		::Il2CppArray<::System::Object*>* buffer; // 0x38
		::System::Int32 offset; // 0x40
		::System::Int32 count; // 0x44
		::System::Net::WebResponseStream* __4__this; // 0x48
		::System::Net::WebCompletionSource* _completion_5__2; // 0x50
		::System::Int32 _nbytes_5__3; // 0x58
		::System::Exception* _throwMe_5__4; // 0x60
		Il2CppObject* __u__1; // 0x68
		Il2CppObject* __u__2; // 0x78

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READASYNC>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READASYNC>D__40_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

