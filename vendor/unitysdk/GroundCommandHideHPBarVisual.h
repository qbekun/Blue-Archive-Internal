#pragma once
#include "unitysdk.h"

class GroundCommandHideHPBar;
class CharacterVisual;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDHIDEHPBARVISUAL__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x15B1340)
#define GROUNDCOMMANDHIDEHPBARVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B1410)
#define GROUNDCOMMANDHIDEHPBARVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B1420)
#define GROUNDCOMMANDHIDEHPBARVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B14E0)
#define GROUNDCOMMANDHIDEHPBARVISUAL_SHOW_OFFSET UNITYSDK_OFFSET(0x15B14F0)
#define GROUNDCOMMANDHIDEHPBARVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B17C0)

	inline static constexpr unsigned int GroundCommandHideHPBarVisual_TypeDefinitionIndex = 1153;

	class GroundCommandHideHPBarVisual : public Il2CppObject
	{
	public:
		GroundCommandHideHPBar* HideHPBar; // 0x18

		::System::Void _Show_b__4_0(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBARVISUAL__SHOW_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBARVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBARVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBARVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Show(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBARVISUAL_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDHIDEHPBARVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

