#pragma once
#include "unitysdk.h"

#define <READHEADERS>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A83E70)
#define <READHEADERS>D__43_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A847F0)

	inline static constexpr unsigned int <ReadHeaders>d__43_TypeDefinitionIndex = 29812;

	class <ReadHeaders>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x30
		::System::IO::Stream* stream; // 0x38
		::System::Net::WebConnectionTunnel* __4__this; // 0x40
		::Il2CppArray<::System::Object*>* _retBuffer_5__2; // 0x48
		::System::Int32 _status_5__3; // 0x50
		::Il2CppArray<::System::Object*>* _buffer_5__4; // 0x58
		::System::IO::MemoryStream* _ms_5__5; // 0x60
		Il2CppObject* __u__1; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READHEADERS>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READHEADERS>D__43_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

