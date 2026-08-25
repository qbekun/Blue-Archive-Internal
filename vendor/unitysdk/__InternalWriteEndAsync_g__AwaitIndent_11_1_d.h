#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonToken; }

#define <<INTERNALWRITEENDASYNC>G__AWAITINDENT|11_1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94978D0)
#define <<INTERNALWRITEENDASYNC>G__AWAITINDENT|11_1>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9497CB0)

	inline static constexpr unsigned int <<InternalWriteEndAsync>g__AwaitIndent|11_1>d_TypeDefinitionIndex = 31779;

	class <<InternalWriteEndAsync>g__AwaitIndent|11_1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::JsonWriter* __4__this; // 0x38
		::Newtonsoft::Json::JsonToken* token; // 0x40
		::System::Threading::CancellationToken* CancellationToken; // 0x48
		::System::Int32 LevelsToComplete; // 0x50
		ConfiguredTaskAwaiter* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INTERNALWRITEENDASYNC>G__AWAITINDENT|11_1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<INTERNALWRITEENDASYNC>G__AWAITINDENT|11_1>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

