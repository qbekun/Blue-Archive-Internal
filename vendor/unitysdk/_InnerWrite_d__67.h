#pragma once
#include "unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }

#define <INNERWRITE>D__67_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96D7D10)
#define <INNERWRITE>D__67_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x96D8070)

	inline static constexpr unsigned int <InnerWrite>d__67_TypeDefinitionIndex = 29073;

	class <InnerWrite>d__67 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x30
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x38
		::System::Boolean sync; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INNERWRITE>D__67_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INNERWRITE>D__67_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

