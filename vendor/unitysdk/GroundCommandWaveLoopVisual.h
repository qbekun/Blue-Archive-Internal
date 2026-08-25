#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandWaveLoop; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDWAVELOOPVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x18129A0)
#define GROUNDCOMMANDWAVELOOPVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1812B50)
#define GROUNDCOMMANDWAVELOOPVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1812B60)
#define GROUNDCOMMANDWAVELOOPVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1812C20)

	inline static constexpr unsigned int GroundCommandWaveLoopVisual_TypeDefinitionIndex = 1213;

	class GroundCommandWaveLoopVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandWaveLoop* WaveLoop; // 0x18

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVELOOPVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVELOOPVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVELOOPVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDWAVELOOPVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

