#pragma once
#include "unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }

#define <SENDWEBREQUESTASYNC>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D0FC00)
#define <SENDWEBREQUESTASYNC>D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9D10350)

	inline static constexpr unsigned int <SendWebRequestAsync>d__9_TypeDefinitionIndex = 25885;

	class <SendWebRequestAsync>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::System::String* payload; // 0x38
		::System::Int32 handle; // 0x40
		::UnityEngine::Networking::UnityWebRequest* _request_5__2; // 0x48
		Awaiter* __u__1; // 0x50
		UnityWebRequestAsyncOperationAwaiter* __u__2; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDWEBREQUESTASYNC>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SENDWEBREQUESTASYNC>D__9_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

