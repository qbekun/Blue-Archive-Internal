#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <DOREADASINT32ASYNC>D__53_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946B480)
#define <DOREADASINT32ASYNC>D__53_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946B7E0)

	inline static constexpr unsigned int <DoReadAsInt32Async>d__53_TypeDefinitionIndex = 31717;

	class <DoReadAsInt32Async>d__53 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOREADASINT32ASYNC>D__53_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOREADASINT32ASYNC>D__53_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

