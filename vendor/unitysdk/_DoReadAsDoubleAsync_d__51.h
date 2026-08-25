#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <DOREADASDOUBLEASYNC>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946B0A0)
#define <DOREADASDOUBLEASYNC>D__51_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946B410)

	inline static constexpr unsigned int <DoReadAsDoubleAsync>d__51_TypeDefinitionIndex = 31716;

	class <DoReadAsDoubleAsync>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOREADASDOUBLEASYNC>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOREADASDOUBLEASYNC>D__51_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

