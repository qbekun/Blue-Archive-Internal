#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandOperator; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDOPERATORVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B2CE0)
#define GROUNDCOMMANDOPERATORVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B2DA0)
#define GROUNDCOMMANDOPERATORVISUAL_COVISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B2DB0)
#define GROUNDCOMMANDOPERATORVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B2E40)
#define GROUNDCOMMANDOPERATORVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B2EC0)

	inline static constexpr unsigned int GroundCommandOperatorVisual_TypeDefinitionIndex = 1159;

	class GroundCommandOperatorVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandOperator* Operator; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOPERATORVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOPERATORVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoVisualize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOPERATORVISUAL_COVISUALIZE_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOPERATORVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDOPERATORVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

