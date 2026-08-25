#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <DOREADASDATETIMEASYNC>D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946A4C0)
#define <DOREADASDATETIMEASYNC>D__45_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946A830)

	inline static constexpr unsigned int <DoReadAsDateTimeAsync>d__45_TypeDefinitionIndex = 31713;

	class <DoReadAsDateTimeAsync>d__45 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOREADASDATETIMEASYNC>D__45_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOREADASDATETIMEASYNC>D__45_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

