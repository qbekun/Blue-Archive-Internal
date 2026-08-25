#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <DOREADASYNC>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946BB90)
#define <DOREADASYNC>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946BF00)

	inline static constexpr unsigned int <DoReadAsync>d__3_TypeDefinitionIndex = 31719;

	class <DoReadAsync>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		Il2CppObject* task; // 0x30
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOREADASYNC>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOREADASYNC>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

