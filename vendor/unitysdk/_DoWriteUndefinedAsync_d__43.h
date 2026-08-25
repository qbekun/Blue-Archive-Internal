#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOWRITEUNDEFINEDASYNC>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94817B0)
#define <DOWRITEUNDEFINEDASYNC>D__43_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9481B00)

	inline static constexpr unsigned int <DoWriteUndefinedAsync>d__43_TypeDefinitionIndex = 31760;

	class <DoWriteUndefinedAsync>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEUNDEFINEDASYNC>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEUNDEFINEDASYNC>D__43_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

