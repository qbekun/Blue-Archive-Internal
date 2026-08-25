#pragma once
#include "unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOUSEBUTTONEVENTDATA_RELEASEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xA498D90)
#define MOUSEBUTTONEVENTDATA_PRESSEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0xA498E50)
#define MOUSEBUTTONEVENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA498CD0)

	inline static constexpr unsigned int MouseButtonEventData_TypeDefinitionIndex = 34927;

	class MouseButtonEventData : public Il2CppObject
	{
	public:
		FramePressState* buttonState; // 0x10
		::UnityEngine::EventSystems::PointerEventData* buttonData; // 0x18

		::System::Boolean ReleasedThisFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSEBUTTONEVENTDATA_RELEASEDTHISFRAME_OFFSET))(nullptr);
		}

		::System::Boolean PressedThisFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSEBUTTONEVENTDATA_PRESSEDTHISFRAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSEBUTTONEVENTDATA_.CTOR_OFFSET))(nullptr);
		}

	};

