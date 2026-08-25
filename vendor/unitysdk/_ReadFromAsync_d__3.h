#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }

#define <READFROMASYNC>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9517310)
#define <READFROMASYNC>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9517D70)

	inline static constexpr unsigned int <ReadFromAsync>d__3_TypeDefinitionIndex = 32048;

	class <ReadFromAsync>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* reader; // 0x30
		::Newtonsoft::Json::Linq::JsonLoadSettings* settings; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		Il2CppObject* __u__1; // 0x48
		Il2CppObject* __u__2; // 0x58
		Il2CppObject* __u__3; // 0x68
		Il2CppObject* __u__4; // 0x78
		Il2CppObject* __u__5; // 0x88

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READFROMASYNC>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READFROMASYNC>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

