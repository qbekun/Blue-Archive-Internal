#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOCLOSEASYNC>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x947EF80)
#define <DOCLOSEASYNC>D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x947F390)

	inline static constexpr unsigned int <DoCloseAsync>d__8_TypeDefinitionIndex = 31752;

	class <DoCloseAsync>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOCLOSEASYNC>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOCLOSEASYNC>D__8_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

