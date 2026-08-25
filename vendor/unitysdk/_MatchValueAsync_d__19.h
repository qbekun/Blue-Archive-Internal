#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <MATCHVALUEASYNC>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946CC20)
#define <MATCHVALUEASYNC>D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946CEF0)

	inline static constexpr unsigned int <MatchValueAsync>d__19_TypeDefinitionIndex = 31723;

	class <MatchValueAsync>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::String* value; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MATCHVALUEASYNC>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <MATCHVALUEASYNC>D__19_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

