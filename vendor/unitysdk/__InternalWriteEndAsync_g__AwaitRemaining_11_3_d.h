#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonToken; }

#define <<INTERNALWRITEENDASYNC>G__AWAITREMAINING|11_3>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9498260)
#define <<INTERNALWRITEENDASYNC>G__AWAITREMAINING|11_3>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x94986D0)

	inline static constexpr unsigned int <<InternalWriteEndAsync>g__AwaitRemaining|11_3>d_TypeDefinitionIndex = 31781;

	class <<InternalWriteEndAsync>g__AwaitRemaining|11_3>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonWriter* __4__this; // 0x30
		::System::Threading::CancellationToken* CancellationToken; // 0x38
		::System::Int32 LevelsToComplete; // 0x40
		::Newtonsoft::Json::JsonToken* _token_5__2; // 0x44
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INTERNALWRITEENDASYNC>G__AWAITREMAINING|11_3>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<INTERNALWRITEENDASYNC>G__AWAITREMAINING|11_3>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

