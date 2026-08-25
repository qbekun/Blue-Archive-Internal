#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOWRITEVALUEASYNC>D__60_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9481B60)
#define <DOWRITEVALUEASYNC>D__60_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x94823A0)

	inline static constexpr unsigned int <DoWriteValueAsync>d__60_TypeDefinitionIndex = 31761;

	class <DoWriteValueAsync>d__60 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::DateTime* value; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEVALUEASYNC>D__60_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEVALUEASYNC>D__60_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

