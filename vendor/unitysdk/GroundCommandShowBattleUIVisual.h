#pragma once
#include "unitysdk.h"

class GroundCommandShowBattleUI;
class UIHPBar;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }
class UIBattle;

#define GROUNDCOMMANDSHOWBATTLEUIVISUAL__VISUALIZE_B__3_1_OFFSET UNITYSDK_OFFSET(0x15B9830)
#define GROUNDCOMMANDSHOWBATTLEUIVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B98A0)
#define GROUNDCOMMANDSHOWBATTLEUIVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA0C0)
#define GROUNDCOMMANDSHOWBATTLEUIVISUAL__VISUALIZE_B__3_0_OFFSET UNITYSDK_OFFSET(0x15BA180)
#define GROUNDCOMMANDSHOWBATTLEUIVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BA1D0)
#define GROUNDCOMMANDSHOWBATTLEUIVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA1E0)

	inline static constexpr unsigned int GroundCommandShowBattleUIVisual_TypeDefinitionIndex = 1198;

	class GroundCommandShowBattleUIVisual : public Il2CppObject
	{
	public:
		GroundCommandShowBattleUI* ShowBattleUI; // 0x18

		::System::Void _Visualize_b__3_1(UIHPBar* arg)
		{
			((::System::Void(*)(UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUIVISUAL__VISUALIZE_B__3_1_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUIVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUIVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void _Visualize_b__3_0(UIBattle* arg)
		{
			((::System::Void(*)(UIBattle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUIVISUAL__VISUALIZE_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUIVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUIVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

