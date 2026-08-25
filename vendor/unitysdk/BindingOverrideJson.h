#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputBinding; }

#define BINDINGOVERRIDEJSON_FROMBINDING_OFFSET UNITYSDK_OFFSET(0x9E4BD90)
#define BINDINGOVERRIDEJSON_FROMBINDING_OFFSET UNITYSDK_OFFSET(0x9E4BEF0)
#define BINDINGOVERRIDEJSON_TOBINDING_OFFSET UNITYSDK_OFFSET(0x9E4BF50)

	inline static constexpr unsigned int BindingOverrideJson_TypeDefinitionIndex = 28390;

	class BindingOverrideJson : public Il2CppObject
	{
	public:
		::System::String* action; // 0x10
		::System::String* id; // 0x18
		::System::String* path; // 0x20
		::System::String* interactions; // 0x28
		::System::String* processors; // 0x30

		BindingOverrideJson* FromBinding(::UnityEngine::InputSystem::InputBinding* arg, ::System::String* str)
		{
			return (return (BindingOverrideJson*(*)(::UnityEngine::InputSystem::InputBinding*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGOVERRIDEJSON_FROMBINDING_OFFSET))(arg, str, nullptr);
		}

		BindingOverrideJson* FromBinding(::UnityEngine::InputSystem::InputBinding* arg)
		{
			return (return (BindingOverrideJson*(*)(::UnityEngine::InputSystem::InputBinding*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGOVERRIDEJSON_FROMBINDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputBinding* ToBinding(BindingOverrideJson* arg)
		{
			return (return (::UnityEngine::InputSystem::InputBinding*(*)(BindingOverrideJson*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGOVERRIDEJSON_TOBINDING_OFFSET))(arg, nullptr);
		}

	};

