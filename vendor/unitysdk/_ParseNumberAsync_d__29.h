#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }
namespace Newtonsoft::Json { class ReadType; }

#define <PARSENUMBERASYNC>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946E800)
#define <PARSENUMBERASYNC>D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946EAB0)

	inline static constexpr unsigned int <ParseNumberAsync>d__29_TypeDefinitionIndex = 31727;

	class <ParseNumberAsync>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::Newtonsoft::Json::ReadType* readType; // 0x40
		::System::Char _firstChar_5__2; // 0x44
		::System::Int32 _initialPosition_5__3; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PARSENUMBERASYNC>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PARSENUMBERASYNC>D__29_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

