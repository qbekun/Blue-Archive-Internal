#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandTemporaryCanUseSkillArea; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDTEMPORARYCANUSESKILLAREAVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BAC10)
#define GROUNDCOMMANDTEMPORARYCANUSESKILLAREAVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BAC20)
#define GROUNDCOMMANDTEMPORARYCANUSESKILLAREAVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BACE0)
#define GROUNDCOMMANDTEMPORARYCANUSESKILLAREAVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15BACF0)

	inline static constexpr unsigned int GroundCommandTemporaryCanUseSkillAreaVisual_TypeDefinitionIndex = 1206;

	class GroundCommandTemporaryCanUseSkillAreaVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandTemporaryCanUseSkillArea* TemporaryCanUseSkillArea; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTEMPORARYCANUSESKILLAREAVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTEMPORARYCANUSESKILLAREAVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTEMPORARYCANUSESKILLAREAVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDTEMPORARYCANUSESKILLAREAVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

