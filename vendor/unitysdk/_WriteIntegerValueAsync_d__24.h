#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <WRITEINTEGERVALUEASYNC>D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9483F90)
#define <WRITEINTEGERVALUEASYNC>D__24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9484290)

	inline static constexpr unsigned int <WriteIntegerValueAsync>d__24_TypeDefinitionIndex = 31767;

	class <WriteIntegerValueAsync>d__24 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x38
		::System::UInt64 uvalue; // 0x40
		::System::Boolean negative; // 0x48
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		ConfiguredTaskAwaiter* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEINTEGERVALUEASYNC>D__24_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEINTEGERVALUEASYNC>D__24_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

