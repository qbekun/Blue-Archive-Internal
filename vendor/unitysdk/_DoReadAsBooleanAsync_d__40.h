#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <DOREADASBOOLEANASYNC>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94685D0)
#define <DOREADASBOOLEANASYNC>D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9469490)

	inline static constexpr unsigned int <DoReadAsBooleanAsync>d__40_TypeDefinitionIndex = 31711;

	class <DoReadAsBooleanAsync>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40
		::System::Numerics::BigInteger* _i_5__2; // 0x50
		::System::Boolean _isTrue_5__3; // 0x60
		ConfiguredTaskAwaiter* __u__2; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOREADASBOOLEANASYNC>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOREADASBOOLEANASYNC>D__40_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

