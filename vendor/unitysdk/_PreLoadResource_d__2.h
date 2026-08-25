#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionGamePrepare; }

#define <PRELOADRESOURCE>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E6A730)
#define <PRELOADRESOURCE>D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E6AD70)

	inline static constexpr unsigned int <PreLoadResource>d__2_TypeDefinitionIndex = 21100;

	class <PreLoadResource>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionGamePrepare* __4__this; // 0x28
		::Il2CppArray<::System::Object*>* strikerChars; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PRELOADRESOURCE>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PRELOADRESOURCE>D__2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

