#pragma once
#include "unitysdk.h"

class GroundCommandTurnOffCameraShake;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDTURNOFFCAMERASHAKEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1812380)
#define GROUNDCOMMANDTURNOFFCAMERASHAKEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x1812390)
#define GROUNDCOMMANDTURNOFFCAMERASHAKEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x18124C0)
#define GROUNDCOMMANDTURNOFFCAMERASHAKEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1812580)

	inline static constexpr unsigned int GroundCommandTurnOffCameraShakeVisual_TypeDefinitionIndex = 1207;

	class GroundCommandTurnOffCameraShakeVisual : public Il2CppObject
	{
	public:
		GroundCommandTurnOffCameraShake* Command; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTURNOFFCAMERASHAKEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

