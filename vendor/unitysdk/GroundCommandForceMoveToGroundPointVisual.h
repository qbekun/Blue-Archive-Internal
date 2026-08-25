#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandForceMoveToGroundPoint; }
namespace MX::Logic::Battles { class GroundCommand; }
class CharacterVisual;
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B0B70)
#define GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B0B80)
#define GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL__VISUALIZE_B__2_0_OFFSET UNITYSDK_OFFSET(0x15B0C40)
#define GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B0C80)
#define GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B0C90)

	inline static constexpr unsigned int GroundCommandForceMoveToGroundPointVisual_TypeDefinitionIndex = 1148;

	class GroundCommandForceMoveToGroundPointVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandForceMoveToGroundPoint* Command; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void _Visualize_b__2_0(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL__VISUALIZE_B__2_0_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEMOVETOGROUNDPOINTVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

	};

