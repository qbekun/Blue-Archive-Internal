#pragma once
#include "unitysdk.h"

#define <SENDASYNC>D__99_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9810260)
#define <SENDASYNC>D__99_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9812630)

	inline static constexpr unsigned int <SendAsync>d__99_TypeDefinitionIndex = 36647;

	class <SendAsync>d__99 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::Http::MonoWebRequestHandler* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Net::Http::HttpRequestMessage* request; // 0x40
		::System::Net::HttpWebRequest* _wrequest_5__2; // 0x48
		::System::Net::HttpWebResponse* _wresponse_5__3; // 0x50
		::System::Threading::CancellationTokenRegistration* __7__wrap3; // 0x58
		::System::Net::Http::HttpContent* _content_5__5; // 0x70
		ConfiguredTaskAwaiter* __u__1; // 0x78
		::System::IO::Stream* _stream_5__6; // 0x88
		Il2CppObject* __u__2; // 0x90
		Il2CppObject* __u__3; // 0xA0
		Il2CppObject* __u__4; // 0xB0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDASYNC>D__99_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SENDASYNC>D__99_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

