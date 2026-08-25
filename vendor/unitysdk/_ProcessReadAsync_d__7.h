#pragma once
#include "unitysdk.h"

#define <PROCESSREADASYNC>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A77690)
#define <PROCESSREADASYNC>D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A77B10)

	inline static constexpr unsigned int <ProcessReadAsync>d__7_TypeDefinitionIndex = 29785;

	class <ProcessReadAsync>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x30
		::System::Net::MonoChunkStream* __4__this; // 0x38
		::Il2CppArray<::System::Object*>* buffer; // 0x40
		::System::Int32 offset; // 0x48
		::System::Int32 size; // 0x4C
		::Il2CppArray<::System::Object*>* _moreBytes_5__2; // 0x50
		Il2CppObject* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSREADASYNC>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSREADASYNC>D__7_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

