#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class InteractiveWorldRaidCommandMoveCamera;
class <>c__DisplayClass6_0;
class InteractiveWorldRaidDesignLevel;
class Awaiter;

#define <EXECUTE>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2599140)
#define <EXECUTE>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2599F90)

	inline static constexpr unsigned int <Execute>d__6_TypeDefinitionIndex = 282;

	class <Execute>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		InteractiveWorldRaidCommandMoveCamera* __4__this; // 0x28
		::System::Threading::CancellationToken* cancelToken; // 0x30
		<>c__DisplayClass6_0* __8__1; // 0x38
		InteractiveWorldRaidDesignLevel* _designLevel_5__2; // 0x40
		::System::Boolean _needSkipping_5__3; // 0x48
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

