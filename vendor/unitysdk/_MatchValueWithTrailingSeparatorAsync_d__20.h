#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <MATCHVALUEWITHTRAILINGSEPARATORASYNC>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946CF60)
#define <MATCHVALUEWITHTRAILINGSEPARATORASYNC>D__20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946D390)

	inline static constexpr unsigned int <MatchValueWithTrailingSeparatorAsync>d__20_TypeDefinitionIndex = 31724;

	class <MatchValueWithTrailingSeparatorAsync>d__20 : public Il2CppObject
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
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MATCHVALUEWITHTRAILINGSEPARATORASYNC>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <MATCHVALUEWITHTRAILINGSEPARATORASYNC>D__20_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

