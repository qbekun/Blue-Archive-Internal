#pragma once
#include "unitysdk.h"

class GroundCommandFadeOutInV2;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDFADEOUTINV2VISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AF9C0)
#define GROUNDCOMMANDFADEOUTINV2VISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AFAB0)
#define GROUNDCOMMANDFADEOUTINV2VISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AFB70)
#define GROUNDCOMMANDFADEOUTINV2VISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AFB80)

	inline static constexpr unsigned int GroundCommandFadeOutInV2Visual_TypeDefinitionIndex = 1139;

	class GroundCommandFadeOutInV2Visual : public Il2CppObject
	{
	public:
		GroundCommandFadeOutInV2* Command; // 0x18

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2VISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2VISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2VISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFADEOUTINV2VISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

