#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <DOWRITESTARTOBJECTASYNC>D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9481430)
#define <DOWRITESTARTOBJECTASYNC>D__38_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9481750)

	inline static constexpr unsigned int <DoWriteStartObjectAsync>d__38_TypeDefinitionIndex = 31759;

	class <DoWriteStartObjectAsync>d__38 : public Il2CppObject
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
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWRITESTARTOBJECTASYNC>D__38_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOWRITESTARTOBJECTASYNC>D__38_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

