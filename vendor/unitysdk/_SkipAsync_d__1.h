#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }

#define <SKIPASYNC>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94576B0)
#define <SKIPASYNC>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9457AB0)

	inline static constexpr unsigned int <SkipAsync>d__1_TypeDefinitionIndex = 31703;

	class <SkipAsync>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40
		::System::Int32 _depth_5__2; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SKIPASYNC>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SKIPASYNC>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

