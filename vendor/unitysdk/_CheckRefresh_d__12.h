#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::UI { class UICardGame_Log_Populator; }

#define <CHECKREFRESH>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DEFEB0)
#define <CHECKREFRESH>D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1DF0320)

	inline static constexpr unsigned int <CheckRefresh>d__12_TypeDefinitionIndex = 20702;

	class <CheckRefresh>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_Log_Populator* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKREFRESH>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CHECKREFRESH>D__12_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

