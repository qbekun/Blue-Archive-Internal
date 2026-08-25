#pragma once
#include "unitysdk.h"

#define <INITCONNECTION>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A81510)
#define <INITCONNECTION>D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A81B10)

	inline static constexpr unsigned int <InitConnection>d__19_TypeDefinitionIndex = 29807;

	class <InitConnection>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::WebOperation* operation; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Net::WebConnection* __4__this; // 0x40
		::System::Boolean _reused_5__2; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50
		Il2CppObject* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITCONNECTION>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INITCONNECTION>D__19_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

