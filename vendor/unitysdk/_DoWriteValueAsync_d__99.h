#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOWRITEVALUEASYNC>D__99_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9483510)
#define <DOWRITEVALUEASYNC>D__99_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9483AC0)

	inline static constexpr unsigned int <DoWriteValueAsync>d__99_TypeDefinitionIndex = 31765;

	class <DoWriteValueAsync>d__99 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::TimeSpan* value; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEVALUEASYNC>D__99_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEVALUEASYNC>D__99_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

