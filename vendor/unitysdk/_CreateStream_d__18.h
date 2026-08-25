#pragma once
#include "unitysdk.h"

#define <CREATESTREAM>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A80B70)
#define <CREATESTREAM>D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A814A0)

	inline static constexpr unsigned int <CreateStream>d__18_TypeDefinitionIndex = 29806;

	class <CreateStream>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::WebConnection* __4__this; // 0x30
		::System::Net::WebOperation* operation; // 0x38
		::System::Boolean reused; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::System::Net::Sockets::NetworkStream* _stream_5__2; // 0x50
		ConfiguredTaskAwaiter* __u__1; // 0x58
		Il2CppObject* __u__2; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTREAM>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CREATESTREAM>D__18_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

