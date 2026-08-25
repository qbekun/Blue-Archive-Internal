#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOWRITEVALUEASYNC>D__97_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9483130)
#define <DOWRITEVALUEASYNC>D__97_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x94834B0)

	inline static constexpr unsigned int <DoWriteValueAsync>d__97_TypeDefinitionIndex = 31764;

	class <DoWriteValueAsync>d__97 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::System::String* value; // 0x38
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEVALUEASYNC>D__97_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEVALUEASYNC>D__97_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

