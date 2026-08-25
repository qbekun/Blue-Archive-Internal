#pragma once
#include "unitysdk.h"

class GroundCommandChangeLookTarget;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDCHANGELOOKTARGETVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AD910)
#define GROUNDCOMMANDCHANGELOOKTARGETVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AD920)
#define GROUNDCOMMANDCHANGELOOKTARGETVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ADDB0)
#define GROUNDCOMMANDCHANGELOOKTARGETVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ADDC0)

	inline static constexpr unsigned int GroundCommandChangeLookTargetVisual_TypeDefinitionIndex = 1128;

	class GroundCommandChangeLookTargetVisual : public Il2CppObject
	{
	public:
		GroundCommandChangeLookTarget* Command; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGETVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGETVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGETVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGELOOKTARGETVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

