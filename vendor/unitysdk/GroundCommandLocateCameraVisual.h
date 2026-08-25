#pragma once
#include "unitysdk.h"

class GroundCommandLocateCamera;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }
class BattleGroundCamera;

#define GROUNDCOMMANDLOCATECAMERAVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B20F0)
#define GROUNDCOMMANDLOCATECAMERAVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B2A80)
#define GROUNDCOMMANDLOCATECAMERAVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B2B40)
#define GROUNDCOMMANDLOCATECAMERAVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B2B50)
#define GROUNDCOMMANDLOCATECAMERAVISUAL_SETRAILPOINTS_OFFSET UNITYSDK_OFFSET(0x15B22B0)

	inline static constexpr unsigned int GroundCommandLocateCameraVisual_TypeDefinitionIndex = 1155;

	class GroundCommandLocateCameraVisual : public Il2CppObject
	{
	public:
		GroundCommandLocateCamera* Command; // 0x18

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERAVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERAVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERAVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERAVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRailPoints(::MX::Logic::Battles::Battle* arg, BattleGroundCamera* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, BattleGroundCamera*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDLOCATECAMERAVISUAL_SETRAILPOINTS_OFFSET))(arg, arg2, nullptr);
		}

	};

