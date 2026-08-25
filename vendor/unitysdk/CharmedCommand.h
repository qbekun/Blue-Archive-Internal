#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define CHARMEDCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EA760)

	inline static constexpr unsigned int CharmedCommand_TypeDefinitionIndex = 13001;

	class CharmedCommand : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* invoker; // 0x10
		::System::Int32 battleFrameToEnd; // 0x18
		::System::Int64 moveSpeedRate; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARMEDCOMMAND_.CTOR_OFFSET))(nullptr);
		}

	};

