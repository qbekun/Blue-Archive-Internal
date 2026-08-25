#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGGrid; }

#define <REPOSITIONASYNC>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E9B970)
#define <REPOSITIONASYNC>D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E9C0A0)

	inline static constexpr unsigned int <RepositionAsync>d__11_TypeDefinitionIndex = 21215;

	class <RepositionAsync>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGGrid* __4__this; // 0x28
		Il2CppObject* ignore; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REPOSITIONASYNC>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REPOSITIONASYNC>D__11_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

