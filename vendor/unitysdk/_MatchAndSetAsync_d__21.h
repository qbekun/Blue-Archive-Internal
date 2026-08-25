#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }
namespace Newtonsoft::Json { class JsonToken; }

#define <MATCHANDSETASYNC>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946C880)
#define <MATCHANDSETASYNC>D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946CBC0)

	inline static constexpr unsigned int <MatchAndSetAsync>d__21_TypeDefinitionIndex = 31722;

	class <MatchAndSetAsync>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::String* value; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::Newtonsoft::Json::JsonToken* newToken; // 0x48
		::System::Object* tokenValue; // 0x50
		Il2CppObject* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MATCHANDSETASYNC>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <MATCHANDSETASYNC>D__21_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

