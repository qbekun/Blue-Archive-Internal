#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }

#define <<RUNINBATCHES>B__2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1805990)
#define <<RUNINBATCHES>B__2>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x18063B0)

	inline static constexpr unsigned int <<RunInBatches>b__2>d_TypeDefinitionIndex = 15684;

	class <<RunInBatches>b__2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		<>c__DisplayClass7_2* __4__this; // 0x28
		::System::Object* __7__wrap1; // 0x30
		::System::Int32 __7__wrap2; // 0x38
		::System::Object* __7__wrap3; // 0x40
		::System::Int32 __7__wrap4; // 0x48
		Awaiter* __u__1; // 0x50
		::System::Exception* _ex_5__6; // 0x60
		Awaiter* __u__2; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<RUNINBATCHES>B__2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<RUNINBATCHES>B__2>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

