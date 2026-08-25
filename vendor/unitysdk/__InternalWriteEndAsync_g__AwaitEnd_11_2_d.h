#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }

#define <<INTERNALWRITEENDASYNC>G__AWAITEND|11_2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9497570)
#define <<INTERNALWRITEENDASYNC>G__AWAITEND|11_2>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9497870)

	inline static constexpr unsigned int <<InternalWriteEndAsync>g__AwaitEnd|11_2>d_TypeDefinitionIndex = 31778;

	class <<InternalWriteEndAsync>g__AwaitEnd|11_2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::JsonWriter* __4__this; // 0x38
		::System::Int32 LevelsToComplete; // 0x40
		::System::Threading::CancellationToken* CancellationToken; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INTERNALWRITEENDASYNC>G__AWAITEND|11_2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<INTERNALWRITEENDASYNC>G__AWAITEND|11_2>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

