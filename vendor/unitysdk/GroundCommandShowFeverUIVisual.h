#pragma once
#include "unitysdk.h"

class GroundCommandShowFeverUI;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDSHOWFEVERUIVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA520)
#define GROUNDCOMMANDSHOWFEVERUIVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5E0)
#define GROUNDCOMMANDSHOWFEVERUIVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA5F0)
#define GROUNDCOMMANDSHOWFEVERUIVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15BA600)

	inline static constexpr unsigned int GroundCommandShowFeverUIVisual_TypeDefinitionIndex = 1200;

	class GroundCommandShowFeverUIVisual : public Il2CppObject
	{
	public:
		GroundCommandShowFeverUI* ShowFeverUI; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUIVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUIVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUIVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUIVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

