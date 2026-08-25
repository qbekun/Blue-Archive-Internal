#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackSerializerOptions; }
namespace MemoryPack::Internal { class ReusableReadOnlySequenceBuilder; }

#define <DESERIALIZEASYNC>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x906B060)
#define <DESERIALIZEASYNC>D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x906C350)

	inline static constexpr unsigned int <DeserializeAsync>d__15_TypeDefinitionIndex = 35433;

	class <DeserializeAsync>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::IO::Stream* stream; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::System::Type* type; // 0x50
		::MemoryPack::MemoryPackSerializerOptions* options; // 0x58
		::MemoryPack::Internal::ReusableReadOnlySequenceBuilder* _builder_5__2; // 0x60
		::Il2CppArray<::System::Object*>* _buffer_5__3; // 0x68
		::System::Int32 _offset_5__4; // 0x70
		Il2CppObject* __u__1; // 0x78

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DESERIALIZEASYNC>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DESERIALIZEASYNC>D__15_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

