#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandActivateArea; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDACTIVATEAREAVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ABB50)
#define GROUNDCOMMANDACTIVATEAREAVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ABC10)
#define GROUNDCOMMANDACTIVATEAREAVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ABC20)

	inline static constexpr unsigned int GroundCommandActivateAreaVisual_TypeDefinitionIndex = 1113;

	class GroundCommandActivateAreaVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandActivateArea* ActivateArea; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEAREAVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEAREAVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEAREAVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

