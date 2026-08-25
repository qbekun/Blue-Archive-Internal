#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json { class JsonWriter; }

#define <<WRITETOASYNC>G__AWAITPROPERTIES|0_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9505BB0)
#define <<WRITETOASYNC>G__AWAITPROPERTIES|0_0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9506030)

	inline static constexpr unsigned int <<WriteToAsync>g__AwaitProperties|0_0>d_TypeDefinitionIndex = 32024;

	class <<WriteToAsync>g__AwaitProperties|0_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::Linq::JObject* __4__this; // 0x38
		::System::Int32 i; // 0x40
		::Newtonsoft::Json::JsonWriter* Writer; // 0x48
		::System::Threading::CancellationToken* CancellationToken; // 0x50
		::Il2CppArray<::System::Object*>* Converters; // 0x58
		ConfiguredTaskAwaiter* __u__1; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<WRITETOASYNC>G__AWAITPROPERTIES|0_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<WRITETOASYNC>G__AWAITPROPERTIES|0_0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

