#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackSerializerOptions; }
namespace MemoryPack::Internal { class ReusableLinkedArrayBufferWriter; }

#define <SERIALIZEASYNC>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x906A7C0)
#define <SERIALIZEASYNC>D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x906B050)

	inline static constexpr unsigned int <SerializeAsync>d__9_TypeDefinitionIndex = 35432;

	class <SerializeAsync>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder* __t__builder; // 0x18
		::System::Type* type; // 0x38
		::System::Object* value; // 0x40
		::MemoryPack::MemoryPackSerializerOptions* options; // 0x48
		::System::IO::Stream* stream; // 0x50
		::System::Threading::CancellationToken* cancellationToken; // 0x58
		::MemoryPack::Internal::ReusableLinkedArrayBufferWriter* _tempWriter_5__2; // 0x60
		ConfiguredValueTaskAwaiter* __u__1; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SERIALIZEASYNC>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SERIALIZEASYNC>D__9_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

