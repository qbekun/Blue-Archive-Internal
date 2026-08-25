#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <READINTOWRAPPEDTYPEOBJECTASYNC>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9473EF0)
#define <READINTOWRAPPEDTYPEOBJECTASYNC>D__43_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x94744E0)

	inline static constexpr unsigned int <ReadIntoWrappedTypeObjectAsync>d__43_TypeDefinitionIndex = 31743;

	class <ReadIntoWrappedTypeObjectAsync>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READINTOWRAPPEDTYPEOBJECTASYNC>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READINTOWRAPPEDTYPEOBJECTASYNC>D__43_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

