#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandFindGift; }
class UIBattle;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }
class FindGiftProcess;

#define GROUNDCOMMANDFINDGIFTVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B0500)
#define GROUNDCOMMANDFINDGIFTVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B0510)
#define GROUNDCOMMANDFINDGIFTVISUAL_ONENDFINDGIFT_OFFSET UNITYSDK_OFFSET(0x15B0750)
#define GROUNDCOMMANDFINDGIFTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B07A0)
#define GROUNDCOMMANDFINDGIFTVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B07B0)
#define GROUNDCOMMANDFINDGIFTVISUAL_ONSTARTFINDGIFTPROCESS_OFFSET UNITYSDK_OFFSET(0x15B0890)

	inline static constexpr unsigned int GroundCommandFindGiftVisual_TypeDefinitionIndex = 1144;

	class GroundCommandFindGiftVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandFindGift* FindGift; // 0x18
		UIBattle* uiBattle; // 0x20

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFINDGIFTVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFINDGIFTVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndFindGift()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFINDGIFTVISUAL_ONENDFINDGIFT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFINDGIFTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFINDGIFTVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnStartFindGiftProcess(FindGiftProcess* arg)
		{
			((::System::Void(*)(FindGiftProcess*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFINDGIFTVISUAL_ONSTARTFINDGIFTPROCESS_OFFSET))(arg, nullptr);
		}

	};

