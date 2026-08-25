#pragma once
#include "unitysdk.h"

#define IUIACTIONS_ONMIDDLECLICK_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIACTIONS_ONTRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIACTIONS_ONSCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIACTIONS_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIACTIONS_ONRIGHTCLICK_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIACTIONS_ONCLICK_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIACTIONS_ONPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIACTIONS_ONNAVIGATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIACTIONS_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define IUIACTIONS_ONTRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IUIActions_TypeDefinitionIndex = 28556;

	class IUIActions : public Il2CppObject
	{
	public:
		::System::Void OnMiddleClick(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONMIDDLECLICK_OFFSET))(arg, nullptr);
		}

		::System::Void OnTrackedDeviceOrientation(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONTRACKEDDEVICEORIENTATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnScrollWheel(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONSCROLLWHEEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnCancel(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnRightClick(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONRIGHTCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void OnPoint(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void OnNavigate(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONNAVIGATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSubmit(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnTrackedDevicePosition(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IUIACTIONS_ONTRACKEDDEVICEPOSITION_OFFSET))(arg, nullptr);
		}

	};

