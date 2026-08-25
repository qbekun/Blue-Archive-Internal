#pragma once
#include "unitysdk.h"

#define <CREATECONNECTIONASYNC>D__86_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9BA56F0)
#define <CREATECONNECTIONASYNC>D__86_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9BA5B00)

	inline static constexpr unsigned int <CreateConnectionAsync>d__86_TypeDefinitionIndex = 29664;

	class <CreateConnectionAsync>d__86 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::System::Net::FtpWebRequest* __4__this; // 0x38
		::System::Net::Sockets::TcpClient* _client_5__2; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATECONNECTIONASYNC>D__86_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CREATECONNECTIONASYNC>D__86_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

