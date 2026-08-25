#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }

#define UIVICTORYHANDLERTUTORIALADVENTURE_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBACBB0)
#define UIVICTORYHANDLERTUTORIALADVENTURE_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBACBC0)
#define UIVICTORYHANDLERTUTORIALADVENTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xBACD40)

	inline static constexpr unsigned int UIVictoryHandlerTutorialAdventure_TypeDefinitionIndex = 8567;

	class UIVictoryHandlerTutorialAdventure : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTUTORIALADVENTURE_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTUTORIALADVENTURE_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERTUTORIALADVENTURE_.CTOR_OFFSET))(nullptr);
		}

	};

