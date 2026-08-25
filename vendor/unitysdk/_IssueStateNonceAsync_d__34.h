#pragma once
#include "unitysdk.h"

namespace NPA::InfaceSDK::Component { class GameAuth; }

#define <ISSUESTATENONCEASYNC>D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D0D6C0)
#define <ISSUESTATENONCEASYNC>D__34_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9D0DA60)

	inline static constexpr unsigned int <IssueStateNonceAsync>d__34_TypeDefinitionIndex = 25874;

	class <IssueStateNonceAsync>d__34 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::NPA::InfaceSDK::Component::GameAuth* __4__this; // 0x30
		Il2CppObject* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ISSUESTATENONCEASYNC>D__34_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ISSUESTATENONCEASYNC>D__34_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

