#pragma once
#include "unitysdk.h"

namespace NPA::InfaceSDK::Component { class GameAuth; }
namespace NPA::Editor::Auth { class Token; }

#define <GETLINKS>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D0BC00)
#define <GETLINKS>D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9D0C000)

	inline static constexpr unsigned int <GetLinks>d__29_TypeDefinitionIndex = 25870;

	class <GetLinks>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::NPA::InfaceSDK::Component::GameAuth* __4__this; // 0x30
		::System::String* traceId; // 0x38
		::NPA::Editor::Auth::Token* token; // 0x40
		Awaiter* __u__1; // 0x48
		Il2CppObject* __u__2; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETLINKS>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GETLINKS>D__29_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

