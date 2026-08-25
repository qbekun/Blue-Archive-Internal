#pragma once
#include "unitysdk.h"

namespace NPA::Editor::methinks { class NXPMTKSurveyModule; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define <REQUESTLOGINWITHDATA>D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C33D60)
#define <REQUESTLOGINWITHDATA>D__24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C34920)

	inline static constexpr unsigned int <RequestLoginWithData>d__24_TypeDefinitionIndex = 26765;

	class <RequestLoginWithData>d__24 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::methinks::NXPMTKSurveyModule* __4__this; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _request_5__2; // 0x38
		::UnityEngine::Networking::UnityWebRequestAsyncOperation* _operation_5__3; // 0x40
		YieldAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTLOGINWITHDATA>D__24_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REQUESTLOGINWITHDATA>D__24_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

