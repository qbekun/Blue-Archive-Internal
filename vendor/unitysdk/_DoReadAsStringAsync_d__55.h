#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <DOREADASSTRINGASYNC>D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946B850)
#define <DOREADASSTRINGASYNC>D__55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946BB20)

	inline static constexpr unsigned int <DoReadAsStringAsync>d__55_TypeDefinitionIndex = 31718;

	class <DoReadAsStringAsync>d__55 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOREADASSTRINGASYNC>D__55_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOREADASSTRINGASYNC>D__55_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

