#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }
namespace Newtonsoft::Json { class ReadType; }

#define <READSTRINGVALUEASYNC>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9476AB0)
#define <READSTRINGVALUEASYNC>D__37_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9477D10)

	inline static constexpr unsigned int <ReadStringValueAsync>d__37_TypeDefinitionIndex = 31748;

	class <ReadStringValueAsync>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::Newtonsoft::Json::ReadType* readType; // 0x40
		Il2CppObject* __u__1; // 0x48
		::System::String* _expected_5__2; // 0x58
		ConfiguredTaskAwaiter* __u__2; // 0x60
		Il2CppObject* __u__3; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READSTRINGVALUEASYNC>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READSTRINGVALUEASYNC>D__37_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

