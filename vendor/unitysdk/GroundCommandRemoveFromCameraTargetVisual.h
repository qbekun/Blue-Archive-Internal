#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandRemoveFromCameraTarget; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDREMOVEFROMCAMERATARGETVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B7DE0)
#define GROUNDCOMMANDREMOVEFROMCAMERATARGETVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B7DF0)
#define GROUNDCOMMANDREMOVEFROMCAMERATARGETVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15B7EB0)
#define GROUNDCOMMANDREMOVEFROMCAMERATARGETVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B7FD0)

	inline static constexpr unsigned int GroundCommandRemoveFromCameraTargetVisual_TypeDefinitionIndex = 1180;

	class GroundCommandRemoveFromCameraTargetVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget* Command; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDREMOVEFROMCAMERATARGETVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDREMOVEFROMCAMERATARGETVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDREMOVEFROMCAMERATARGETVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDREMOVEFROMCAMERATARGETVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

