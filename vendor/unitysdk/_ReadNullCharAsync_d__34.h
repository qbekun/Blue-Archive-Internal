#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <READNULLCHARASYNC>D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9474540)
#define <READNULLCHARASYNC>D__34_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9474810)

	inline static constexpr unsigned int <ReadNullCharAsync>d__34_TypeDefinitionIndex = 31744;

	class <ReadNullCharAsync>d__34 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READNULLCHARASYNC>D__34_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READNULLCHARASYNC>D__34_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

