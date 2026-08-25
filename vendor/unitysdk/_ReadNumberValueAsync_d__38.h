#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }
namespace Newtonsoft::Json { class ReadType; }

#define <READNUMBERVALUEASYNC>D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9474BD0)
#define <READNUMBERVALUEASYNC>D__38_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9475C40)

	inline static constexpr unsigned int <ReadNumberValueAsync>d__38_TypeDefinitionIndex = 31746;

	class <ReadNumberValueAsync>d__38 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::Newtonsoft::Json::ReadType* readType; // 0x40
		Il2CppObject* __u__1; // 0x48
		ConfiguredTaskAwaiter* __u__2; // 0x58
		Il2CppObject* __u__3; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READNUMBERVALUEASYNC>D__38_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READNUMBERVALUEASYNC>D__38_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

