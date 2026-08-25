#pragma once
#include "unitysdk.h"

class TriggerType;
class InteractiveWorldRaidInputReceiver;
namespace Cinemachine { class CinemachineVirtualCamera; }
class InteractiveWorldRaidCharacter;
class InteractiveWorldRaidPath;
class InteractiveWorldRaidUITriggerMessage;

#define INTERACTIVEWORLDRAIDTRIGGER_ONPATHVERTEXARRIVE_OFFSET UNITYSDK_OFFSET(0x26E2A40)
#define INTERACTIVEWORLDRAIDTRIGGER_GET_ISTRIGGEREDBYCOMMAND_OFFSET UNITYSDK_OFFSET(0x26E2B20)
#define INTERACTIVEWORLDRAIDTRIGGER_REMOVE_TRIGGERED_OFFSET UNITYSDK_OFFSET(0x26E2B30)
#define INTERACTIVEWORLDRAIDTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x26E2BD0)
#define INTERACTIVEWORLDRAIDTRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x26E2F10)
#define INTERACTIVEWORLDRAIDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E2FC0)
#define INTERACTIVEWORLDRAIDTRIGGER_ONCAMERACHANGED_OFFSET UNITYSDK_OFFSET(0x26E2FD0)
#define INTERACTIVEWORLDRAIDTRIGGER_EXECUTETRIGGER_OFFSET UNITYSDK_OFFSET(0x26E2AE0)
#define INTERACTIVEWORLDRAIDTRIGGER_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x26E3060)
#define INTERACTIVEWORLDRAIDTRIGGER_ADD_TRIGGERED_OFFSET UNITYSDK_OFFSET(0x26E30B0)
#define INTERACTIVEWORLDRAIDTRIGGER_GET_HASNOTRIGGERTYPES_OFFSET UNITYSDK_OFFSET(0x26E3150)
#define INTERACTIVEWORLDRAIDTRIGGER_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x26E3160)
#define INTERACTIVEWORLDRAIDTRIGGER_ONENTER_OFFSET UNITYSDK_OFFSET(0x26E3270)
#define INTERACTIVEWORLDRAIDTRIGGER_HANDLEUITRIGGERMESSAGE_OFFSET UNITYSDK_OFFSET(0x26E3380)

	inline static constexpr unsigned int InteractiveWorldRaidTrigger_TypeDefinitionIndex = 388;

	class InteractiveWorldRaidTrigger : public Il2CppObject
	{
	public:
		::System::Action* Triggered; // 0x18
		TriggerType* triggerType; // 0x20
		::System::Int32 cooltime; // 0x24
		InteractiveWorldRaidInputReceiver* inputReceiver; // 0x28
		::Cinemachine::CinemachineVirtualCamera* targetCamera; // 0x30
		InteractiveWorldRaidCharacter* targetCharacter; // 0x38
		InteractiveWorldRaidPath* targetPath; // 0x40
		::System::Int32 targetPathVertexIndex; // 0x48
		::System::Single repeatTime; // 0x4C
		TriggerType* targetUI; // 0x50
		::System::Single _cooltimeTimer; // 0x54
		::System::Single _repeatTimer; // 0x58
		::System::Boolean _isDesignLevelActive; // 0x5C
		::System::Boolean _isOnCooltime; // 0x5D

		::System::Void OnPathVertexArrive(InteractiveWorldRaidPath* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(InteractiveWorldRaidPath*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_ONPATHVERTEXARRIVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsTriggeredByCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_GET_ISTRIGGEREDBYCOMMAND_OFFSET))(nullptr);
		}

		::System::Void remove_Triggered(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_REMOVE_TRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCameraChanged(::Cinemachine::CinemachineVirtualCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_ONCAMERACHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteTrigger()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_EXECUTETRIGGER_OFFSET))(nullptr);
		}

		::System::Void OnInitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_ONINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void add_Triggered(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_ADD_TRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasNoTriggerTypes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_GET_HASNOTRIGGERTYPES_OFFSET))(nullptr);
		}

		::System::Void OnLeave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_ONLEAVE_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_ONENTER_OFFSET))(nullptr);
		}

		::System::Boolean HandleUITriggerMessage(InteractiveWorldRaidUITriggerMessage* arg)
		{
			return ((::System::Boolean(*)(InteractiveWorldRaidUITriggerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDTRIGGER_HANDLEUITRIGGERMESSAGE_OFFSET))(arg, nullptr);
		}

	};

