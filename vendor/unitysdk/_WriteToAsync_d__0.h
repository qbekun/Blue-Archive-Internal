#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JConstructor; }

#define <WRITETOASYNC>D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94FAB40)
#define <WRITETOASYNC>D__0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x94FB000)

	inline static constexpr unsigned int <WriteToAsync>d__0_TypeDefinitionIndex = 32015;

	class <WriteToAsync>d__0 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::Newtonsoft::Json::JsonWriter* writer; // 0x30
		::Newtonsoft::Json::Linq::JConstructor* __4__this; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::Il2CppArray<::System::Object*>* converters; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50
		::System::Int32 _i_5__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITETOASYNC>D__0_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITETOASYNC>D__0_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

