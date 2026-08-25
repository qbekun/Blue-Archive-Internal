#pragma once
#include "unitysdk.h"

class UIScenarioMode_Volume;
namespace UnityEngine { class Animation; }

#define UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_ONANIMATIONPREV_OFFSET UNITYSDK_OFFSET(0x2814420)
#define UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_ONANIMATIONNEXT_OFFSET UNITYSDK_OFFSET(0x2814430)
#define UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2814440)
#define UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_ONANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x2814450)
#define UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2814550)

	inline static constexpr unsigned int UIScenarioMode_VolumeAnimationEventHandler_TypeDefinitionIndex = 7801;

	class UIScenarioMode_VolumeAnimationEventHandler : public Il2CppObject
	{
	public:
		UIScenarioMode_Volume* volume; // 0x18
		::UnityEngine::Animation* volumeAnimation; // 0x20

		::System::Void OnAnimationPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_ONANIMATIONPREV_OFFSET))(nullptr);
		}

		::System::Void OnAnimationNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_ONANIMATIONNEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAnimationEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_ONANIMATIONEND_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEANIMATIONEVENTHANDLER_ONDISABLE_OFFSET))(nullptr);
		}

	};

