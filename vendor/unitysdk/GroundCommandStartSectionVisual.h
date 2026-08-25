#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandStartSection; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSTARTSECTIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BAB30)
#define GROUNDCOMMANDSTARTSECTIONVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BAB40)
#define GROUNDCOMMANDSTARTSECTIONVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BAC00)

	inline static constexpr unsigned int GroundCommandStartSectionVisual_TypeDefinitionIndex = 1205;

	class GroundCommandStartSectionVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandStartSection* StartSection; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSTARTSECTIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSTARTSECTIONVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSTARTSECTIONVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

