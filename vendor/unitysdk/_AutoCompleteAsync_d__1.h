#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }

#define <AUTOCOMPLETEASYNC>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9498730)
#define <AUTOCOMPLETEASYNC>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9498A50)

	inline static constexpr unsigned int <AutoCompleteAsync>d__1_TypeDefinitionIndex = 31782;

	class <AutoCompleteAsync>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonWriter* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <AUTOCOMPLETEASYNC>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <AUTOCOMPLETEASYNC>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

