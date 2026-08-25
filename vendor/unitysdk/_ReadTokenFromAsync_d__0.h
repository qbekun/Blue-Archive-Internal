#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }

#define <READTOKENFROMASYNC>D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9501130)
#define <READTOKENFROMASYNC>D__0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9501680)

	inline static constexpr unsigned int <ReadTokenFromAsync>d__0_TypeDefinitionIndex = 32019;

	class <ReadTokenFromAsync>d__0 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* reader; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::Newtonsoft::Json::Linq::JContainer* __4__this; // 0x40
		::Newtonsoft::Json::Linq::JsonLoadSettings* options; // 0x48
		::System::Int32 _startDepth_5__2; // 0x50
		Il2CppObject* __u__1; // 0x58
		ConfiguredTaskAwaiter* __u__2; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READTOKENFROMASYNC>D__0_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READTOKENFROMASYNC>D__0_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

