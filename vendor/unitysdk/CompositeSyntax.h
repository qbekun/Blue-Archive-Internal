#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define COMPOSITESYNTAX_WITH_OFFSET UNITYSDK_OFFSET(0x9E60450)
#define COMPOSITESYNTAX_GET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x9E607C0)
#define COMPOSITESYNTAX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E5C6A0)

	inline static constexpr unsigned int CompositeSyntax_TypeDefinitionIndex = 28413;

	class CompositeSyntax : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputAction* m_Action; // 0x10
		::UnityEngine::InputSystem::InputActionMap* m_ActionMap; // 0x18
		::System::Int32 m_BindingIndexInMap; // 0x20

		CompositeSyntax* With(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (CompositeSyntax*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COMPOSITESYNTAX_WITH_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Int32 get_bindingIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPOSITESYNTAX_GET_BINDINGINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputActionMap* arg, ::UnityEngine::InputSystem::InputAction* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputAction*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMPOSITESYNTAX_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

