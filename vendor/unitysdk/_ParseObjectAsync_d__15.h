#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <PARSEOBJECTASYNC>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946F530)
#define <PARSEOBJECTASYNC>D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946FBC0)

	inline static constexpr unsigned int <ParseObjectAsync>d__15_TypeDefinitionIndex = 31731;

	class <ParseObjectAsync>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40
		ConfiguredTaskAwaiter* __u__2; // 0x50
		Il2CppObject* __u__3; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSEOBJECTASYNC>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSEOBJECTASYNC>D__15_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

