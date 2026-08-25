#pragma once
#include "unitysdk.h"

class UIPanel;
class ScenarioCharacterTarget;
class ScenarioScriptInfo;

#define UISCENARIOCHARACTERS_SETTINGEMOTIONRENDERQ_OFFSET UNITYSDK_OFFSET(0x27D9C50)
#define UISCENARIOCHARACTERS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27D9DD0)
#define UISCENARIOCHARACTERS_HIDEALL_OFFSET UNITYSDK_OFFSET(0x27D9DE0)
#define UISCENARIOCHARACTERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x27D9FF0)
#define UISCENARIOCHARACTERS_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x27DA070)
#define UISCENARIOCHARACTERS_SETTODEFAULTPOS_OFFSET UNITYSDK_OFFSET(0x27DA100)
#define UISCENARIOCHARACTERS_GETACTIVECONTROLS_OFFSET UNITYSDK_OFFSET(0x27DA240)
#define UISCENARIOCHARACTERS_AWAKE_OFFSET UNITYSDK_OFFSET(0x27DA560)
#define UISCENARIOCHARACTERS_GETCONTROLS_OFFSET UNITYSDK_OFFSET(0x27DA700)
#define UISCENARIOCHARACTERS_PREINSTANCIATE_OFFSET UNITYSDK_OFFSET(0x27DA970)
#define UISCENARIOCHARACTERS_INITPOSTABLE_OFFSET UNITYSDK_OFFSET(0x27DA5C0)
#define UISCENARIOCHARACTERS_CLEAR_OFFSET UNITYSDK_OFFSET(0x27DABF0)
#define UISCENARIOCHARACTERS_GET_CURRENTTOPRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x27DAC80)
#define UISCENARIOCHARACTERS_INITCHARACTERS_OFFSET UNITYSDK_OFFSET(0x27DAF90)

	inline static constexpr unsigned int UIScenarioCharacters_TypeDefinitionIndex = 7638;

	class UIScenarioCharacters : public Il2CppObject
	{
	public:
		Il2CppObject* controls; // 0x18
		UIPanel* panel; // 0x20
		Il2CppObject* originalPosTable; // 0x28

		::System::Void SettingEmotionRenderQ(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_SETTINGEMOTIONRENDERQ_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HideAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_HIDEALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_.CTOR_OFFSET))(nullptr);
		}

		UIPanel* get_Panel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Void SetToDefaultPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_SETTODEFAULTPOS_OFFSET))(nullptr);
		}

		Il2CppObject* GetActiveControls()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_GETACTIVECONTROLS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_AWAKE_OFFSET))(nullptr);
		}

		Il2CppObject* GetControls(ScenarioCharacterTarget* arg)
		{
			return ((Il2CppObject*(*)(ScenarioCharacterTarget*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_GETCONTROLS_OFFSET))(arg, nullptr);
		}

		::System::Void PreInstanciate(ScenarioScriptInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_PREINSTANCIATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitPosTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_INITPOSTABLE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentTopRenderQueue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_GET_CURRENTTOPRENDERQUEUE_OFFSET))(nullptr);
		}

		::System::Void InitCharacters(Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERS_INITCHARACTERS_OFFSET))(arg, str, nullptr);
		}

	};

