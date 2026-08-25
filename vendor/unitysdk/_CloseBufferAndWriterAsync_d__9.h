#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <CLOSEBUFFERANDWRITERASYNC>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x947EC80)
#define <CLOSEBUFFERANDWRITERASYNC>D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x947EF20)

	inline static constexpr unsigned int <CloseBufferAndWriterAsync>d__9_TypeDefinitionIndex = 31751;

	class <CloseBufferAndWriterAsync>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x30
		ConfiguredTaskAwaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLOSEBUFFERANDWRITERASYNC>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CLOSEBUFFERANDWRITERASYNC>D__9_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

