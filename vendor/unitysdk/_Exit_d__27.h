#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class CCGHandManager;
class Awaiter;

#define <EXIT>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26F0D50)
#define <EXIT>D__27_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26F1A00)

	inline static constexpr unsigned int <Exit>d__27_TypeDefinitionIndex = 417;

	class <Exit>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		CCGHandManager* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXIT>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXIT>D__27_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

