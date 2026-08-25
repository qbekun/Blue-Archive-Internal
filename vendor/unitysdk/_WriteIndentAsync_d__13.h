#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <WRITEINDENTASYNC>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9483B20)
#define <WRITEINDENTASYNC>D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9483F30)

	inline static constexpr unsigned int <WriteIndentAsync>d__13_TypeDefinitionIndex = 31766;

	class <WriteIndentAsync>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x30
		::System::Int32 newLineLen; // 0x38
		::System::Int32 currentIndentCount; // 0x3C
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEINDENTASYNC>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEINDENTASYNC>D__13_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

