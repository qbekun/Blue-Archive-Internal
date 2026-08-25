#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <READCHARSASYNC>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9472BC0)
#define <READCHARSASYNC>D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9472EA0)

	inline static constexpr unsigned int <ReadCharsAsync>d__14_TypeDefinitionIndex = 31739;

	class <ReadCharsAsync>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Int32 relativePosition; // 0x38
		::System::Boolean append; // 0x3C
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::Int32 _charsRequired_5__2; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READCHARSASYNC>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READCHARSASYNC>D__14_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

