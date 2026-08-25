#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Network { class INXPRequest; }

#define <EXECUTEASYNC>D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9C1A3E0)
#define <EXECUTEASYNC>D__0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9C1A610)

	inline static constexpr unsigned int <ExecuteAsync>d__0_TypeDefinitionIndex = 26634;

	class <ExecuteAsync>d__0 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::NPA::Editor::Network::INXPRequest* request; // 0x38
		Il2CppObject* callback; // 0x40
		Awaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEASYNC>D__0_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEASYNC>D__0_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

