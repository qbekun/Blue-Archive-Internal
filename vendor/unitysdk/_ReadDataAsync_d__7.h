#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <READDATAASYNC>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9472F10)
#define <READDATAASYNC>D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9473290)

	inline static constexpr unsigned int <ReadDataAsync>d__7_TypeDefinitionIndex = 31740;

	class <ReadDataAsync>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Boolean append; // 0x38
		::System::Int32 charsRequired; // 0x3C
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READDATAASYNC>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READDATAASYNC>D__7_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

