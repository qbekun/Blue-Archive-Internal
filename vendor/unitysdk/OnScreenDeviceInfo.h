#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::OnScreen { class OnScreenControl; }

#define ONSCREENDEVICEINFO_REMOVECONTROL_OFFSET UNITYSDK_OFFSET(0x9F3EC40)
#define ONSCREENDEVICEINFO_ADDCONTROL_OFFSET UNITYSDK_OFFSET(0x9F3E800)
#define ONSCREENDEVICEINFO_DESTROY_OFFSET UNITYSDK_OFFSET(0x9F3E740)

	inline static constexpr unsigned int OnScreenDeviceInfo_TypeDefinitionIndex = 28652;

	class OnScreenDeviceInfo : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::InputEventPtr* eventPtr; // 0x10
		Il2CppObject* buffer; // 0x18
		::UnityEngine::InputSystem::InputDevice* device; // 0x28
		::UnityEngine::InputSystem::OnScreen::OnScreenControl* firstControl; // 0x30

		OnScreenDeviceInfo* RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* arg)
		{
			return (return (OnScreenDeviceInfo*(*)(::UnityEngine::InputSystem::OnScreen::OnScreenControl*, ::PVOID))((::PBYTE)hIl2Cpp + ONSCREENDEVICEINFO_REMOVECONTROL_OFFSET))(arg, nullptr);
		}

		OnScreenDeviceInfo* AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* arg)
		{
			return (return (OnScreenDeviceInfo*(*)(::UnityEngine::InputSystem::OnScreen::OnScreenControl*, ::PVOID))((::PBYTE)hIl2Cpp + ONSCREENDEVICEINFO_ADDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONSCREENDEVICEINFO_DESTROY_OFFSET))(nullptr);
		}

	};

