#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonToken; }

#define <<INTERNALWRITEENDASYNC>G__AWAITPROPERTY|11_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9497D10)
#define <<INTERNALWRITEENDASYNC>G__AWAITPROPERTY|11_0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9498200)

	inline static constexpr unsigned int <<InternalWriteEndAsync>g__AwaitProperty|11_0>d_TypeDefinitionIndex = 31780;

	class <<InternalWriteEndAsync>g__AwaitProperty|11_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::JsonWriter* __4__this; // 0x38
		::System::Threading::CancellationToken* CancellationToken; // 0x40
		::Newtonsoft::Json::JsonToken* token; // 0x48
		::System::Int32 LevelsToComplete; // 0x4C
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<INTERNALWRITEENDASYNC>G__AWAITPROPERTY|11_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<INTERNALWRITEENDASYNC>G__AWAITPROPERTY|11_0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

