#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class ReadType; }
namespace Newtonsoft::Json { class JsonTextReader; }

#define <PARSENUMBERNANASYNC>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946EB10)
#define <PARSENUMBERNANASYNC>D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946EE00)

	inline static constexpr unsigned int <ParseNumberNaNAsync>d__26_TypeDefinitionIndex = 31728;

	class <ParseNumberNaNAsync>d__26 : public Il2CppObject
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
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSENUMBERNANASYNC>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSENUMBERNANASYNC>D__26_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

