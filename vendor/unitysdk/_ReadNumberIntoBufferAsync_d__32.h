#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <READNUMBERINTOBUFFERASYNC>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9474880)
#define <READNUMBERINTOBUFFERASYNC>D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9474B70)

	inline static constexpr unsigned int <ReadNumberIntoBufferAsync>d__32_TypeDefinitionIndex = 31745;

	class <ReadNumberIntoBufferAsync>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Int32 _charPos_5__2; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READNUMBERINTOBUFFERASYNC>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READNUMBERINTOBUFFERASYNC>D__32_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

