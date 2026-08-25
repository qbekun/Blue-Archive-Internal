#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonToken; }
namespace Newtonsoft::Json { class JsonContainerType; }

#define <INTERNALWRITESTARTASYNC>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9498AB0)
#define <INTERNALWRITESTARTASYNC>D__20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9498D10)

	inline static constexpr unsigned int <InternalWriteStartAsync>d__20_TypeDefinitionIndex = 31783;

	class <InternalWriteStartAsync>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonWriter* __4__this; // 0x30
		::Newtonsoft::Json::JsonToken* token; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::Newtonsoft::Json::JsonContainerType* container; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INTERNALWRITESTARTASYNC>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INTERNALWRITESTARTASYNC>D__20_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

