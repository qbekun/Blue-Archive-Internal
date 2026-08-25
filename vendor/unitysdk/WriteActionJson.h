#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }

#define WRITEACTIONJSON_FROMACTION_OFFSET UNITYSDK_OFFSET(0x9E4C630)

	inline static constexpr unsigned int WriteActionJson_TypeDefinitionIndex = 28393;

	class WriteActionJson : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* type; // 0x18
		::System::String* id; // 0x20
		::System::String* expectedControlType; // 0x28
		::System::String* processors; // 0x30
		::System::String* interactions; // 0x38
		::System::Boolean initialStateCheck; // 0x40

		WriteActionJson* FromAction(::UnityEngine::InputSystem::InputAction* arg)
		{
			return (return (WriteActionJson*(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEACTIONJSON_FROMACTION_OFFSET))(arg, nullptr);
		}

	};

