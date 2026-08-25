#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <PARSEVALUEASYNC>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94714F0)
#define <PARSEVALUEASYNC>D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9472880)

	inline static constexpr unsigned int <ParseValueAsync>d__8_TypeDefinitionIndex = 31737;

	class <ParseValueAsync>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40
		ConfiguredTaskAwaiter* __u__2; // 0x50
		Il2CppObject* __u__3; // 0x60
		Il2CppObject* __u__4; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSEVALUEASYNC>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSEVALUEASYNC>D__8_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

