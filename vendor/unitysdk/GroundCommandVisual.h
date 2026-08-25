#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x18124B0)
#define GROUNDCOMMANDVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1812820)
#define GROUNDCOMMANDVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUNDCOMMANDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1812590)
#define GROUNDCOMMANDVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int GroundCommandVisual_TypeDefinitionIndex = 1210;

	class GroundCommandVisual : public Il2CppObject
	{
	public:
		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDVISUAL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

