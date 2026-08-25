#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGObjectPoolManager; }

#define <REGISTERTOPOOL>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E99260)
#define <REGISTERTOPOOL>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E999A0)

	inline static constexpr unsigned int <RegisterToPool>d__3_TypeDefinitionIndex = 21210;

	class <RegisterToPool>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGObjectPoolManager* __4__this; // 0x28
		::System::String* key; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERTOPOOL>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REGISTERTOPOOL>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

