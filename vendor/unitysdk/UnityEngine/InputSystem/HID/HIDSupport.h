#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_SET_SUPPORTEDHIDUSAGES_OFFSET UNITYSDK_OFFSET(0x9F494D0)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9F49740)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_GET_SUPPORTEDHIDUSAGES_OFFSET UNITYSDK_OFFSET(0x9F498B0)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HIDSupport_TypeDefinitionIndex = 28677;

	class HIDSupport : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_SupportedHIDUsages; // 0x0

		::System::Void set_supportedHIDUsages(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_SET_SUPPORTEDHIDUSAGES_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_supportedHIDUsages()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_GET_SUPPORTEDHIDUSAGES_OFFSET))(nullptr);
		}

	};
}

