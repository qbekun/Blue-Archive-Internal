#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERELIMINATERAID_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C3680)
#define UIDEFEATHANDLERELIMINATERAID_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C3690)
#define UIDEFEATHANDLERELIMINATERAID_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C36B0)

	inline static constexpr unsigned int UIDefeatHandlerEliminateRaid_TypeDefinitionIndex = 5258;

	class UIDefeatHandlerEliminateRaid : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERELIMINATERAID_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERELIMINATERAID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERELIMINATERAID_HANDLECLOSE_OFFSET))(nullptr);
		}

	};

