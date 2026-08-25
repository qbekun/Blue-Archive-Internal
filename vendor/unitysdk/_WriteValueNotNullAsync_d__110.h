#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextWriter; }

#define <WRITEVALUENOTNULLASYNC>D__110_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9484CF0)
#define <WRITEVALUENOTNULLASYNC>D__110_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9485010)

	inline static constexpr unsigned int <WriteValueNotNullAsync>d__110_TypeDefinitionIndex = 31770;

	class <WriteValueNotNullAsync>d__110 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::JsonTextWriter* __4__this; // 0x38
		::System::Uri* value; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEVALUENOTNULLASYNC>D__110_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEVALUENOTNULLASYNC>D__110_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

