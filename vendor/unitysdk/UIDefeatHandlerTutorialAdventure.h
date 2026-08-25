#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERTUTORIALADVENTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C54A0)
#define UIDEFEATHANDLERTUTORIALADVENTURE_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C54B0)

	inline static constexpr unsigned int UIDefeatHandlerTutorialAdventure_TypeDefinitionIndex = 5272;

	class UIDefeatHandlerTutorialAdventure : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTUTORIALADVENTURE_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERTUTORIALADVENTURE_GET_BATTLETYPE_OFFSET))(nullptr);
		}

	};

