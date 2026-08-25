#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }

#define READACTIONJSON_TOACTION_OFFSET UNITYSDK_OFFSET(0x9E4C3A0)

	inline static constexpr unsigned int ReadActionJson_TypeDefinitionIndex = 28392;

	class ReadActionJson : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* type; // 0x18
		::System::String* id; // 0x20
		::System::String* expectedControlType; // 0x28
		::System::String* expectedControlLayout; // 0x30
		::System::String* processors; // 0x38
		::System::String* interactions; // 0x40
		::System::Boolean passThrough; // 0x48
		::System::Boolean initialStateCheck; // 0x49
		::Il2CppArray<::System::Object*>* bindings; // 0x50

		::UnityEngine::InputSystem::InputAction* ToAction(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + READACTIONJSON_TOACTION_OFFSET))(str, nullptr);
		}

	};

