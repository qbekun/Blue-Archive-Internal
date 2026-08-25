#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandRemoveFromCameraTarget; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDADDTOCAMERATARGETVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AC7C0)
#define GROUNDCOMMANDADDTOCAMERATARGETVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AC8E0)
#define GROUNDCOMMANDADDTOCAMERATARGETVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AC8F0)
#define GROUNDCOMMANDADDTOCAMERATARGETVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AC900)

	inline static constexpr unsigned int GroundCommandAddToCameraTargetVisual_TypeDefinitionIndex = 1118;

	class GroundCommandAddToCameraTargetVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget* Command; // 0x18

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGETVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGETVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGETVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDTOCAMERATARGETVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

