#pragma once
#include "unitysdk.h"

namespace Mono::Net::Security { class MonoSslAuthenticationOptions; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }

#define <PROCESSAUTHENTICATION>D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96D6220)
#define <PROCESSAUTHENTICATION>D__48_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x96D6D50)

	inline static constexpr unsigned int <ProcessAuthentication>d__48_TypeDefinitionIndex = 29069;

	class <ProcessAuthentication>d__48 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Mono::Net::Security::MonoSslAuthenticationOptions* options; // 0x30
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x38
		::System::Boolean runSynchronously; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSAUTHENTICATION>D__48_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSAUTHENTICATION>D__48_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

