#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }

#define UIVICTORYHANDLERPERMANENTRAID_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAAAB0)
#define UIVICTORYHANDLERPERMANENTRAID_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBAAAC0)
#define UIVICTORYHANDLERPERMANENTRAID_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBAAB60)

	inline static constexpr unsigned int UIVictoryHandlerPermanentRaid_TypeDefinitionIndex = 8558;

	class UIVictoryHandlerPermanentRaid : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERPERMANENTRAID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERPERMANENTRAID_HANDLECLOSE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERPERMANENTRAID_GET_BATTLETYPE_OFFSET))(nullptr);
		}

	};

