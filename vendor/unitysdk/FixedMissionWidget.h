#pragma once
#include "unitysdk.h"

class UILabel;
class UISlider;
class ButtonActivator;
class UISmallParcelCard;
class UIWidget;
class MissionContentBase;

#define FIXEDMISSIONWIDGET_ONCLICKRECEIVE_OFFSET UNITYSDK_OFFSET(0x2696800)
#define FIXEDMISSIONWIDGET_REFRESH_OFFSET UNITYSDK_OFFSET(0x2696830)
#define FIXEDMISSIONWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2696CC0)
#define FIXEDMISSIONWIDGET_START_OFFSET UNITYSDK_OFFSET(0x2696CD0)

	inline static constexpr unsigned int FixedMissionWidget_TypeDefinitionIndex = 6810;

	class FixedMissionWidget : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x18
		UILabel* countLabel; // 0x20
		UILabel* disabledButtonLabel; // 0x28
		UISlider* countSlider; // 0x30
		ButtonActivator* receiveButton; // 0x38
		UISmallParcelCard* parcelCard; // 0x40
		UIWidget* shadeWidget; // 0x48
		MissionContentBase* fixedMission; // 0x50

		::System::Void OnClickReceive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDMISSIONWIDGET_ONCLICKRECEIVE_OFFSET))(nullptr);
		}

		::System::Void Refresh(MissionContentBase* arg)
		{
			((::System::Void(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDMISSIONWIDGET_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDMISSIONWIDGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDMISSIONWIDGET_START_OFFSET))(nullptr);
		}

	};

