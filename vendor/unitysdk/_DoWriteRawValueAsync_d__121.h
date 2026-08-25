#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOWRITERAWVALUEASYNC>D__121_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9480690)
#define <DOWRITERAWVALUEASYNC>D__121_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9480990)

	inline static constexpr unsigned int <DoWriteRawValueAsync>d__121_TypeDefinitionIndex = 31756;

	class <DoWriteRawValueAsync>d__121 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x38
		::System::String* json; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWRITERAWVALUEASYNC>D__121_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOWRITERAWVALUEASYNC>D__121_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

