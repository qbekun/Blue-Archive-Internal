#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class InteractiveWorldRaidCommandShowDialogWidget;
class Awaiter;

#define <EXECUTE>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x259DD10)
#define <EXECUTE>D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259E700)

	inline static constexpr unsigned int <Execute>d__8_TypeDefinitionIndex = 302;

	class <Execute>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		InteractiveWorldRaidCommandShowDialogWidget* __4__this; // 0x28
		::System::Threading::CancellationToken* cancelToken; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__8_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

