#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }

#define ACTIONEVENT_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0x9F1F6A0)
#define ACTIONEVENT_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x9F1F6B0)
#define ACTIONEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F1F6C0)
#define ACTIONEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F1F700)
#define ACTIONEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F1F8F0)

	inline static constexpr unsigned int ActionEvent_TypeDefinitionIndex = 28559;

	class ActionEvent : public ::UnityEngine::InputSystem::Controls::AxisControl
	{
	public:
		::System::String* m_ActionId; // 0x30
		::System::String* m_ActionName; // 0x38

		::System::String* get_actionId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENT_GET_ACTIONID_OFFSET))(nullptr);
		}

		::System::String* get_actionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENT_GET_ACTIONNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Guid* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIONEVENT_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};

