#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }

#define <READANDMOVETOCONTENTASYNC>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9456AB0)
#define <READANDMOVETOCONTENTASYNC>D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9456EB0)

	inline static constexpr unsigned int <ReadAndMoveToContentAsync>d__12_TypeDefinitionIndex = 31700;

	class <ReadAndMoveToContentAsync>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		Il2CppObject* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READANDMOVETOCONTENTASYNC>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READANDMOVETOCONTENTASYNC>D__12_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

