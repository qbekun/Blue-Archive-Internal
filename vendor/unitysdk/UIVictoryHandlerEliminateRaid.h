#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }

#define UIVICTORYHANDLERELIMINATERAID_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBA98A0)
#define UIVICTORYHANDLERELIMINATERAID_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA98B0)
#define UIVICTORYHANDLERELIMINATERAID_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBA98D0)

	inline static constexpr unsigned int UIVictoryHandlerEliminateRaid_TypeDefinitionIndex = 8555;

	class UIVictoryHandlerEliminateRaid : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERELIMINATERAID_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERELIMINATERAID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERELIMINATERAID_HANDLECLOSE_OFFSET))(nullptr);
		}

	};

