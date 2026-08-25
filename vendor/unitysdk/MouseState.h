#pragma once
#include "unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOUSESTATE_SETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0xA497E40)
#define MOUSESTATE_GETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0xA498B20)
#define MOUSESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA498A50)
#define MOUSESTATE_ANYRELEASESTHISFRAME_OFFSET UNITYSDK_OFFSET(0xA498CE0)
#define MOUSESTATE_ANYPRESSESTHISFRAME_OFFSET UNITYSDK_OFFSET(0xA498DA0)

	inline static constexpr unsigned int MouseState_TypeDefinitionIndex = 34926;

	class MouseState : public Il2CppObject
	{
	public:
		Il2CppObject* m_TrackedButtons; // 0x10

		::System::Void SetButtonState(InputButton* arg, FramePressState* arg, ::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(InputButton*, FramePressState*, ::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + MOUSESTATE_SETBUTTONSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		ButtonState* GetButtonState(InputButton* arg)
		{
			return (return (ButtonState*(*)(InputButton*, ::PVOID))((::PBYTE)hIl2Cpp + MOUSESTATE_GETBUTTONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSESTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean AnyReleasesThisFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSESTATE_ANYRELEASESTHISFRAME_OFFSET))(nullptr);
		}

		::System::Boolean AnyPressesThisFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSESTATE_ANYPRESSESTHISFRAME_OFFSET))(nullptr);
		}

	};

