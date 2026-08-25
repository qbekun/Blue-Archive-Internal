#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandChangeGroundNodeType; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDCHANGEGROUNDNODETYPEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AD790)
#define GROUNDCOMMANDCHANGEGROUNDNODETYPEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AD8F0)
#define GROUNDCOMMANDCHANGEGROUNDNODETYPEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AD900)

	inline static constexpr unsigned int GroundCommandChangeGroundNodeTypeVisual_TypeDefinitionIndex = 1127;

	class GroundCommandChangeGroundNodeTypeVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandChangeGroundNodeType* AreaToChangeNodeType; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGEGROUNDNODETYPEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGEGROUNDNODETYPEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGEGROUNDNODETYPEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

