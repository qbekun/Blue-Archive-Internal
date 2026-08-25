#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <PROCESSCARRIAGERETURNASYNC>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94728F0)
#define <PROCESSCARRIAGERETURNASYNC>D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9472B60)

	inline static constexpr unsigned int <ProcessCarriageReturnAsync>d__11_TypeDefinitionIndex = 31738;

	class <ProcessCarriageReturnAsync>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		Il2CppObject* task; // 0x30
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSCARRIAGERETURNASYNC>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSCARRIAGERETURNASYNC>D__11_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

