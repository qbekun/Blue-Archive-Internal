#pragma once
#include "unitysdk.h"

namespace NPA::Editor::methinks { class NXPMTKSurveyModule; }

#define <ONTIMERELAPSED>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C34980)
#define <ONTIMERELAPSED>D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C35750)

	inline static constexpr unsigned int <OnTimerElapsed>d__25_TypeDefinitionIndex = 26766;

	class <OnTimerElapsed>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::methinks::NXPMTKSurveyModule* __4__this; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONTIMERELAPSED>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ONTIMERELAPSED>D__25_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

