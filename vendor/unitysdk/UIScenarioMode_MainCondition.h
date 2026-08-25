#pragma once
#include "unitysdk.h"

class StageOpenConditionController;

#define UISCENARIOMODE_MAINCONDITION_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x2801370)
#define UISCENARIOMODE_MAINCONDITION_GET_LOCKOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x28025F0)
#define UISCENARIOMODE_MAINCONDITION_GET_STAGEOPENCONDITIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2802560)
#define UISCENARIOMODE_MAINCONDITION_GET_OPENOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x2802620)
#define UISCENARIOMODE_MAINCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2802650)
#define UISCENARIOMODE_MAINCONDITION_SETTEXT_OFFSET UNITYSDK_OFFSET(0x2802660)
#define UISCENARIOMODE_MAINCONDITION_GET_NEEDDIRECTING_OFFSET UNITYSDK_OFFSET(0x28007C0)

	inline static constexpr unsigned int UIScenarioMode_MainCondition_TypeDefinitionIndex = 7759;

	class UIScenarioMode_MainCondition : public Il2CppObject
	{
	public:
		StageOpenConditionController* stageOpenConditionController; // 0x30

		::System::Single PlayUnlockAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCONDITION_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::String* get_LockObjectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCONDITION_GET_LOCKOBJECTPATH_OFFSET))(nullptr);
		}

		StageOpenConditionController* get_StageOpenConditionController()
		{
			return ((StageOpenConditionController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCONDITION_GET_STAGEOPENCONDITIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::String* get_OpenObjectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCONDITION_GET_OPENOBJECTPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetText(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCONDITION_SETTEXT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_NeedDirecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCONDITION_GET_NEEDDIRECTING_OFFSET))(nullptr);
		}

	};

