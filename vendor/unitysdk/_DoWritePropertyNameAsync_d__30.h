#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOWRITEPROPERTYNAMEASYNC>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x947FA00)
#define <DOWRITEPROPERTYNAMEASYNC>D__30_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x947FDF0)

	inline static constexpr unsigned int <DoWritePropertyNameAsync>d__30_TypeDefinitionIndex = 31754;

	class <DoWritePropertyNameAsync>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x38
		::System::String* name; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEPROPERTYNAMEASYNC>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOWRITEPROPERTYNAMEASYNC>D__30_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

