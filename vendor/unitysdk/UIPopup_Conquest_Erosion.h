#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class UIConquest;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::GameLogic::Service { class StepState; }

#define UIPOPUP_CONQUEST_EROSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x2371B70)
#define UIPOPUP_CONQUEST_EROSION_SETDATA_OFFSET UNITYSDK_OFFSET(0x2371D80)
#define UIPOPUP_CONQUEST_EROSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2372980)
#define UIPOPUP_CONQUEST_EROSION_SAVECURRENTSTEPSTATE_OFFSET UNITYSDK_OFFSET(0x2372870)
#define UIPOPUP_CONQUEST_EROSION_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2372A00)

	inline static constexpr unsigned int UIPopup_Conquest_Erosion_TypeDefinitionIndex = 5089;

	class UIPopup_Conquest_Erosion : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0xD8
		MXButton* okButton; // 0xE0
		MXButton* closeButton; // 0xE8
		Il2CppObject* Grounds; // 0xF0
		UIConquest* uiConquest; // 0xF8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_EROSION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_EROSION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_EROSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SaveCurrentStepState(::System::Int32 arg, ::MX::GameLogic::Service::StepState* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::MX::GameLogic::Service::StepState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_EROSION_SAVECURRENTSTEPSTATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_EROSION_ONCLICKCANCEL_OFFSET))(nullptr);
		}

	};

