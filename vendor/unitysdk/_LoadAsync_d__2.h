#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JObject; }

#define <LOADASYNC>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9506710)
#define <LOADASYNC>D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9506DC0)

	inline static constexpr unsigned int <LoadAsync>d__2_TypeDefinitionIndex = 32027;

	class <LoadAsync>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* reader; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::Newtonsoft::Json::Linq::JsonLoadSettings* settings; // 0x40
		::Newtonsoft::Json::Linq::JObject* _o_5__2; // 0x48
		Il2CppObject* __u__1; // 0x50
		ConfiguredTaskAwaiter* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADASYNC>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADASYNC>D__2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

