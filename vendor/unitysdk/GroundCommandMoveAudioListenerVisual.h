#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandMoveAudioListener; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDMOVEAUDIOLISTENERVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B2B60)
#define GROUNDCOMMANDMOVEAUDIOLISTENERVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B2C20)
#define GROUNDCOMMANDMOVEAUDIOLISTENERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B2C30)
#define GROUNDCOMMANDMOVEAUDIOLISTENERVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B2C40)

	inline static constexpr unsigned int GroundCommandMoveAudioListenerVisual_TypeDefinitionIndex = 1156;

	class GroundCommandMoveAudioListenerVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandMoveAudioListener* moveAudioListener; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDMOVEAUDIOLISTENERVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDMOVEAUDIOLISTENERVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDMOVEAUDIOLISTENERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDMOVEAUDIOLISTENERVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

