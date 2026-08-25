#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGObjectPool; }

#define <REGISTERTOPOOL>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E9C3D0)
#define <REGISTERTOPOOL>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E9CAC0)

	inline static constexpr unsigned int <RegisterToPool>d__5_TypeDefinitionIndex = 21218;

	class <RegisterToPool>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGObjectPool* __4__this; // 0x28
		::System::String* _addressKey; // 0x30
		Il2CppObject* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REGISTERTOPOOL>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REGISTERTOPOOL>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

