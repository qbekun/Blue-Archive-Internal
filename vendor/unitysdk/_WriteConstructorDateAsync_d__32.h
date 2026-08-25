#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }

#define <WRITECONSTRUCTORDATEASYNC>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9498D70)
#define <WRITECONSTRUCTORDATEASYNC>D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9499580)

	inline static constexpr unsigned int <WriteConstructorDateAsync>d__32_TypeDefinitionIndex = 31784;

	class <WriteConstructorDateAsync>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* reader; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::Newtonsoft::Json::JsonWriter* __4__this; // 0x40
		::System::DateTime* _date_5__2; // 0x48
		Il2CppObject* __u__1; // 0x50
		ConfiguredTaskAwaiter* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITECONSTRUCTORDATEASYNC>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITECONSTRUCTORDATEASYNC>D__32_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

