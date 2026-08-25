#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <EATWHITESPACEASYNC>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946BF70)
#define <EATWHITESPACEASYNC>D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946C390)

	inline static constexpr unsigned int <EatWhitespaceAsync>d__17_TypeDefinitionIndex = 31720;

	class <EatWhitespaceAsync>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40
		ConfiguredTaskAwaiter* __u__2; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EATWHITESPACEASYNC>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EATWHITESPACEASYNC>D__17_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

