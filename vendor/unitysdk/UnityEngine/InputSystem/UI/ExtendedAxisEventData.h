#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::EventSystems { class EventSystem; }

#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDAXISEVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F2EE90)
#define UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDAXISEVENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F2EF20)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int ExtendedAxisEventData_TypeDefinitionIndex = 28622;

	class ExtendedAxisEventData : public ::System::Runtime::CompilerServices::SkipLocalsInitAttribute
	{
	public:
		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDAXISEVENTDATA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::EventSystems::EventSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::EventSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_EXTENDEDAXISEVENTDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

