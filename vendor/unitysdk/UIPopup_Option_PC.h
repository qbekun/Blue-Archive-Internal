#pragma once
#include "unitysdk.h"

class UIEventTrigger;
class MXButton;
class InformationGroupOpen;
namespace MX::Controller { class InputModeType; }
namespace MX::SaveData { class ClientOption; }
namespace MX::SaveData { class DeviceOption; }

#define UIPOPUP_OPTION_PC_INITIALIZEUI_OFFSET UNITYSDK_OFFSET(0x27240E0)
#define UIPOPUP_OPTION_PC_.CTOR_OFFSET UNITYSDK_OFFSET(0x2724320)
#define UIPOPUP_OPTION_PC_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2724330)
#define UIPOPUP_OPTION_PC_SAVEOPTIONS_OFFSET UNITYSDK_OFFSET(0x27244B0)
#define UIPOPUP_OPTION_PC_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27245A0)
#define UIPOPUP_OPTION_PC_CHANGEID_PCGUIDE_OFFSET UNITYSDK_OFFSET(0x2724740)
#define UIPOPUP_OPTION_PC_ONCLICKSHOWCUSTOMKEYPOPUP_OFFSET UNITYSDK_OFFSET(0x2724880)
#define UIPOPUP_OPTION_PC_ONDOUBLECLICKCHEAT_OFFSET UNITYSDK_OFFSET(0x2724930)
#define UIPOPUP_OPTION_PC_APPLYPCSCREENRESOLUTION_OFFSET UNITYSDK_OFFSET(0x27245C0)
#define UIPOPUP_OPTION_PC_APPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0x27249C0)
#define UIPOPUP_OPTION_PC_AWAKE_OFFSET UNITYSDK_OFFSET(0x2724A90)

	inline static constexpr unsigned int UIPopup_Option_PC_TypeDefinitionIndex = 7167;

	class UIPopup_Option_PC : public Il2CppObject
	{
	public:
		UIEventTrigger* triggerForCheat; // 0x170
		MXButton* showCustomKeyPopupButton; // 0x178

		::System::Void InitializeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_INITIALIZEUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SaveOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_SAVEOPTIONS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void ChangeID_PCGuide(InformationGroupOpen* arg, ::MX::Controller::InputModeType* arg2)
		{
			((::System::Void(*)(InformationGroupOpen*, ::MX::Controller::InputModeType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_CHANGEID_PCGUIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickShowCustomKeyPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_ONCLICKSHOWCUSTOMKEYPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnDoubleClickCheat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_ONDOUBLECLICKCHEAT_OFFSET))(nullptr);
		}

		::System::Void ApplyPCScreenResolution()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_APPLYPCSCREENRESOLUTION_OFFSET))(nullptr);
		}

		::System::Void ApplyOptions(::MX::SaveData::ClientOption* arg, ::MX::SaveData::DeviceOption* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::SaveData::ClientOption*, ::MX::SaveData::DeviceOption*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_APPLYOPTIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_AWAKE_OFFSET))(nullptr);
		}

	};

