#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class ReadType; }
namespace Newtonsoft::Json { class JsonTextReader; }

#define <PARSENUMBERPOSITIVEINFINITYASYNC>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946F1D0)
#define <PARSENUMBERPOSITIVEINFINITYASYNC>D__27_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946F4C0)

	inline static constexpr unsigned int <ParseNumberPositiveInfinityAsync>d__27_TypeDefinitionIndex = 31730;

	class <ParseNumberPositiveInfinityAsync>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::ReadType* readType; // 0x30
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::Newtonsoft::Json::ReadType* __7__wrap1; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSENUMBERPOSITIVEINFINITYASYNC>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSENUMBERPOSITIVEINFINITYASYNC>D__27_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

