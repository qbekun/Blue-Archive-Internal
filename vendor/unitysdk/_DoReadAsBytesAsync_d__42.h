#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonTextReader; }

#define <DOREADASBYTESASYNC>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9469500)
#define <DOREADASBYTESASYNC>D__42_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x946A450)

	inline static constexpr unsigned int <DoReadAsBytesAsync>d__42_TypeDefinitionIndex = 31712;

	class <DoReadAsBytesAsync>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Newtonsoft::Json::JsonTextReader* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Boolean _isWrapped_5__2; // 0x40
		Il2CppObject* __u__1; // 0x48
		::Il2CppArray<::System::Object*>* _data_5__3; // 0x58
		ConfiguredTaskAwaiter* __u__2; // 0x60
		Il2CppObject* __u__3; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOREADASBYTESASYNC>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DOREADASBYTESASYNC>D__42_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

