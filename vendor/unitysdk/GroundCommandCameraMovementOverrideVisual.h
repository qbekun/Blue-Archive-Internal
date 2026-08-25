#pragma once
#include "unitysdk.h"

class GroundCommandCameraMovementOverride;
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ACDF0)
#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15ACEB0)
#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15ACEC0)
#define GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ACFC0)

	inline static constexpr unsigned int GroundCommandCameraMovementOverrideVisual_TypeDefinitionIndex = 1123;

	class GroundCommandCameraMovementOverrideVisual : public Il2CppObject
	{
	public:
		GroundCommandCameraMovementOverride* Command; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCAMERAMOVEMENTOVERRIDEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

