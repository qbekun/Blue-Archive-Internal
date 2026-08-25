#pragma once
#include "unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }

#define <INNERREAD>D__66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96D7770)
#define <INNERREAD>D__66_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x96D7CA0)

	inline static constexpr unsigned int <InnerRead>d__66_TypeDefinitionIndex = 29072;

	class <InnerRead>d__66 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Int32 requestedSize; // 0x40
		::System::Boolean sync; // 0x44
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INNERREAD>D__66_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INNERREAD>D__66_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

