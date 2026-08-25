#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JProperty; }

#define <LOADASYNC>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x95082A0)
#define <LOADASYNC>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9508980)

	inline static constexpr unsigned int <LoadAsync>d__4_TypeDefinitionIndex = 32031;

	class <LoadAsync>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* reader; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::Newtonsoft::Json::Linq::JsonLoadSettings* settings; // 0x40
		::Newtonsoft::Json::Linq::JProperty* _p_5__2; // 0x48
		Il2CppObject* __u__1; // 0x50
		ConfiguredTaskAwaiter* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADASYNC>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADASYNC>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

