#pragma once
#include "../../../unitysdk.h"

namespace NPA { class INXPToyUIDialogHandler; }

#define NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_GET_HANDLER_OFFSET UNITYSDK_OFFSET(0x9C49240)
#define NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_SET_HANDLER_OFFSET UNITYSDK_OFFSET(0x9C49290)
#define NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_NOTIFYDIALOGSHOWN_OFFSET UNITYSDK_OFFSET(0x9C49300)
#define NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_NOTIFYDIALOGCLOSED_OFFSET UNITYSDK_OFFSET(0x9C496A0)
#define NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C49A40)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPUIDialogHandler_TypeDefinitionIndex = 26856;

	class NXPUIDialogHandler : public Il2CppObject
	{
	public:
		::NPA::INXPToyUIDialogHandler* _Handler_k__BackingField; // 0x0
		::System::Text::StringBuilder* LogMessageBuffer; // 0x8

		::NPA::INXPToyUIDialogHandler* get_Handler()
		{
			return (return (::NPA::INXPToyUIDialogHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_GET_HANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Handler(::NPA::INXPToyUIDialogHandler* arg)
		{
			((::System::Void(*)(::NPA::INXPToyUIDialogHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_SET_HANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyDialogShown(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_NOTIFYDIALOGSHOWN_OFFSET))(str, str, nullptr);
		}

		::System::Void NotifyDialogClosed(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_NOTIFYDIALOGCLOSED_OFFSET))(str, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPUIDIALOGHANDLER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

