#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class InternedString; }

#define UNITYENGINE_INPUTSYSTEM_COMMONUSAGES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E99E70)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int CommonUsages_TypeDefinitionIndex = 28459;

	class CommonUsages : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::InternedString* Primary2DMotion; // 0x0
		::UnityEngine::InputSystem::Utilities::InternedString* Secondary2DMotion; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString* PrimaryAction; // 0x20
		::UnityEngine::InputSystem::Utilities::InternedString* SecondaryAction; // 0x30
		::UnityEngine::InputSystem::Utilities::InternedString* PrimaryTrigger; // 0x40
		::UnityEngine::InputSystem::Utilities::InternedString* SecondaryTrigger; // 0x50
		::UnityEngine::InputSystem::Utilities::InternedString* Modifier; // 0x60
		::UnityEngine::InputSystem::Utilities::InternedString* Position; // 0x70
		::UnityEngine::InputSystem::Utilities::InternedString* Orientation; // 0x80
		::UnityEngine::InputSystem::Utilities::InternedString* Hatswitch; // 0x90
		::UnityEngine::InputSystem::Utilities::InternedString* Back; // 0xA0
		::UnityEngine::InputSystem::Utilities::InternedString* Forward; // 0xB0
		::UnityEngine::InputSystem::Utilities::InternedString* Menu; // 0xC0
		::UnityEngine::InputSystem::Utilities::InternedString* Submit; // 0xD0
		::UnityEngine::InputSystem::Utilities::InternedString* Cancel; // 0xE0
		::UnityEngine::InputSystem::Utilities::InternedString* Horizontal; // 0xF0
		::UnityEngine::InputSystem::Utilities::InternedString* Vertical; // 0x100
		::UnityEngine::InputSystem::Utilities::InternedString* Twist; // 0x110
		::UnityEngine::InputSystem::Utilities::InternedString* Pressure; // 0x120
		::UnityEngine::InputSystem::Utilities::InternedString* ScrollHorizontal; // 0x130
		::UnityEngine::InputSystem::Utilities::InternedString* ScrollVertical; // 0x140
		::UnityEngine::InputSystem::Utilities::InternedString* Point; // 0x150
		::UnityEngine::InputSystem::Utilities::InternedString* LowFreqMotor; // 0x160
		::UnityEngine::InputSystem::Utilities::InternedString* HighFreqMotor; // 0x170
		::UnityEngine::InputSystem::Utilities::InternedString* LeftHand; // 0x180
		::UnityEngine::InputSystem::Utilities::InternedString* RightHand; // 0x190
		::UnityEngine::InputSystem::Utilities::InternedString* BatteryStrength; // 0x1A0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMMONUSAGES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

