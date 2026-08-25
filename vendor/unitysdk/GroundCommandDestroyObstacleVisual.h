#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandDestroyObstacle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDDESTROYOBSTACLEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF800)
#define GROUNDCOMMANDDESTROYOBSTACLEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF810)
#define GROUNDCOMMANDDESTROYOBSTACLEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AF8D0)

	inline static constexpr unsigned int GroundCommandDestroyObstacleVisual_TypeDefinitionIndex = 1137;

	class GroundCommandDestroyObstacleVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandDestroyObstacle* DestroyObstacle; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDDESTROYOBSTACLEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDDESTROYOBSTACLEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDDESTROYOBSTACLEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

