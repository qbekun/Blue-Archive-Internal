#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <READFROMFINISHEDASYNC>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94738E0)
#define <READFROMFINISHEDASYNC>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9473E80)

	inline static constexpr unsigned int <ReadFromFinishedAsync>d__5_TypeDefinitionIndex = 31742;

	class <ReadFromFinishedAsync>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40
		ConfiguredTaskAwaiter* __u__2; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READFROMFINISHEDASYNC>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READFROMFINISHEDASYNC>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

