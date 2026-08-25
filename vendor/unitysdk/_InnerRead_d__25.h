#pragma once
#include "unitysdk.h"

namespace Mono::Net::Security { class AsyncProtocolRequest; }

#define <INNERREAD>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96D22B0)
#define <INNERREAD>D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x96D2800)

	inline static constexpr unsigned int <InnerRead>d__25_TypeDefinitionIndex = 29059;

	class <InnerRead>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Mono::Net::Security::AsyncProtocolRequest* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* _totalRead_5__2; // 0x40
		::System::Int32 _requestedSize_5__3; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INNERREAD>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INNERREAD>D__25_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

