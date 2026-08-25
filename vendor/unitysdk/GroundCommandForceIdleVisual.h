#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandForceIdle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDFORCEIDLEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B09B0)
#define GROUNDCOMMANDFORCEIDLEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B09C0)
#define GROUNDCOMMANDFORCEIDLEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B0A80)

	inline static constexpr unsigned int GroundCommandForceIdleVisual_TypeDefinitionIndex = 1146;

	class GroundCommandForceIdleVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandForceIdle* ForceIdle; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEIDLEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEIDLEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEIDLEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

