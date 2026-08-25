#pragma once
#include "unitysdk.h"

namespace NPA::Editor::methinks { class NXPMTKSurveyModule; }

#define <<ONTIMERELAPSED>B__25_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C35760)
#define <<ONTIMERELAPSED>B__25_0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C35900)

	inline static constexpr unsigned int <<OnTimerElapsed>b__25_0>d_TypeDefinitionIndex = 26767;

	class <<OnTimerElapsed>b__25_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::methinks::NXPMTKSurveyModule* __4__this; // 0x38
		::System::Runtime::CompilerServices::TaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONTIMERELAPSED>B__25_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<ONTIMERELAPSED>B__25_0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

