#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonTextWriter; }

#define <CREATEASYNC>D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x950A410)
#define <CREATEASYNC>D__0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x950AB00)

	inline static constexpr unsigned int <CreateAsync>d__0_TypeDefinitionIndex = 32036;

	class <CreateAsync>d__0 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* reader; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::IO::StringWriter* _sw_5__2; // 0x40
		::Newtonsoft::Json::JsonTextWriter* _jsonWriter_5__3; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATEASYNC>D__0_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CREATEASYNC>D__0_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

