#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Web { class NXPSharedMemoryClient; }

#define <START>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DB3570)
#define <START>D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9DB38E0)

	inline static constexpr unsigned int <Start>d__19_TypeDefinitionIndex = 26400;

	class <Start>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::Web::NXPSharedMemoryClient* __4__this; // 0x30
		Il2CppObject* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <START>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <START>D__19_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

