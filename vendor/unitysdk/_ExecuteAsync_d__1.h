#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Network { class INXPRequest; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define <EXECUTEASYNC>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C1AE60)
#define <EXECUTEASYNC>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C1B940)

	inline static constexpr unsigned int <ExecuteAsync>d__1_TypeDefinitionIndex = 26642;

	class <ExecuteAsync>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::Network::INXPRequest* request; // 0x38
		Il2CppObject* callback; // 0x40
		::UnityEngine::Networking::UnityWebRequest* _unityRequest_5__2; // 0x48
		UnityWebRequestAsyncOperationAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEASYNC>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEASYNC>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

