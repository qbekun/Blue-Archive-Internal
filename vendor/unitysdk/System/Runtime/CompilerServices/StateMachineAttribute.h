#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227510)
#define SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_GET_STATEMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x9228290)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int StateMachineAttribute_TypeDefinitionIndex = 24763;

	class StateMachineAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* _StateMachineType_k__BackingField; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_StateMachineType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STATEMACHINEATTRIBUTE_GET_STATEMACHINETYPE_OFFSET))(nullptr);
		}

	};
}

