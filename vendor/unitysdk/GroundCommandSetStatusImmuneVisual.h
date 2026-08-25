#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetStatusImmune; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSETSTATUSIMMUNEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B94B0)
#define GROUNDCOMMANDSETSTATUSIMMUNEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B94C0)
#define GROUNDCOMMANDSETSTATUSIMMUNEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B9580)

	inline static constexpr unsigned int GroundCommandSetStatusImmuneVisual_TypeDefinitionIndex = 1193;

	class GroundCommandSetStatusImmuneVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetStatusImmune* SetImmune; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSIMMUNEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSIMMUNEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSTATUSIMMUNEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

