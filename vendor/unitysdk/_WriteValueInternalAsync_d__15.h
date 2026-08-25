#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <WRITEVALUEINTERNALASYNC>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94842F0)
#define <WRITEVALUEINTERNALASYNC>D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9484610)

	inline static constexpr unsigned int <WriteValueInternalAsync>d__15_TypeDefinitionIndex = 31768;

	class <WriteValueInternalAsync>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x38
		::System::String* value; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEVALUEINTERNALASYNC>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEVALUEINTERNALASYNC>D__15_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

