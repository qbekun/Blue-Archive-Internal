#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputBinding&; }
namespace UnityEngine::InputSystem { class InputBinding; }

#define BINDINGJSON_FROMBINDING_OFFSET UNITYSDK_OFFSET(0x9E4C0A0)
#define BINDINGJSON_TOBINDING_OFFSET UNITYSDK_OFFSET(0x9E4C1C0)

	inline static constexpr unsigned int BindingJson_TypeDefinitionIndex = 28391;

	class BindingJson : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* id; // 0x18
		::System::String* path; // 0x20
		::System::String* interactions; // 0x28
		::System::String* processors; // 0x30
		::System::String* groups; // 0x38
		::System::String* action; // 0x40
		::System::Boolean isComposite; // 0x48
		::System::Boolean isPartOfComposite; // 0x49

		BindingJson* FromBinding(::UnityEngine::InputSystem::InputBinding&* arg)
		{
			return (return (BindingJson*(*)(::UnityEngine::InputSystem::InputBinding&*, ::PVOID))((::PBYTE)hIl2Cpp + BINDINGJSON_FROMBINDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputBinding* ToBinding()
		{
			return (return (::UnityEngine::InputSystem::InputBinding*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDINGJSON_TOBINDING_OFFSET))(nullptr);
		}

	};

