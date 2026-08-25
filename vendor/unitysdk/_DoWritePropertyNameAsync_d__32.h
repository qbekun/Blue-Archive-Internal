#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOWRITEPROPERTYNAMEASYNC>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x947FE50)
#define <DOWRITEPROPERTYNAMEASYNC>D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9480630)

	inline static constexpr unsigned int <DoWritePropertyNameAsync>d__32_TypeDefinitionIndex = 31755;

	class <DoWritePropertyNameAsync>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x30
		::System::String* name; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::Boolean escape; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEPROPERTYNAMEASYNC>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEPROPERTYNAMEASYNC>D__32_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

