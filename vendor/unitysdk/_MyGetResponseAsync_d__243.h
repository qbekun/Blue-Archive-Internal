#pragma once
#include "unitysdk.h"

#define <MYGETRESPONSEASYNC>D__243_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A72850)
#define <MYGETRESPONSEASYNC>D__243_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A74090)

	inline static constexpr unsigned int <MyGetResponseAsync>d__243_TypeDefinitionIndex = 29776;

	class <MyGetResponseAsync>d__243 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::HttpWebRequest* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Net::WebCompletionSource* _completion_5__2; // 0x40
		::System::Net::WebOperation* _operation_5__3; // 0x48
		::System::Net::WebException* _throwMe_5__4; // 0x50
		::System::Net::HttpWebResponse* _response_5__5; // 0x58
		::System::Net::WebResponseStream* _stream_5__6; // 0x60
		::System::Boolean _redirect_5__7; // 0x68
		::System::Boolean _mustReadAll_5__8; // 0x69
		::System::Net::WebOperation* _ntlm_5__9; // 0x70
		::System::Net::BufferOffsetSize* _writeBuffer_5__10; // 0x78
		Il2CppObject* __u__1; // 0x80
		ConfiguredTaskAwaiter* __u__2; // 0x90
		Il2CppObject* __u__3; // 0xA0
		Il2CppObject* __u__4; // 0xA8

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MYGETRESPONSEASYNC>D__243_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <MYGETRESPONSEASYNC>D__243_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

