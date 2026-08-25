#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <READFINISHEDASYNC>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9473300)
#define <READFINISHEDASYNC>D__36_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9473880)

	inline static constexpr unsigned int <ReadFinishedAsync>d__36_TypeDefinitionIndex = 31741;

	class <ReadFinishedAsync>d__36 : public Il2CppObject
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
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READFINISHEDASYNC>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READFINISHEDASYNC>D__36_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

