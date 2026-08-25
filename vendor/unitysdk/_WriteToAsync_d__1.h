#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json::Linq { class JProperty; }
namespace Newtonsoft::Json { class JsonWriter; }

#define <WRITETOASYNC>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x95089F0)
#define <WRITETOASYNC>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9508D40)

	inline static constexpr unsigned int <WriteToAsync>d__1_TypeDefinitionIndex = 32032;

	class <WriteToAsync>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::Newtonsoft::Json::Linq::JProperty* __4__this; // 0x38
		::Newtonsoft::Json::JsonWriter* writer; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::Il2CppArray<::System::Object*>* converters; // 0x50
		ConfiguredTaskAwaiter* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITETOASYNC>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITETOASYNC>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

