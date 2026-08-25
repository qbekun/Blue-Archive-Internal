#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERPERMANENTRAID_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C41F0)
#define UIDEFEATHANDLERPERMANENTRAID_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C4290)
#define UIDEFEATHANDLERPERMANENTRAID_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C42A0)

	inline static constexpr unsigned int UIDefeatHandlerPermanentRaid_TypeDefinitionIndex = 5263;

	class UIDefeatHandlerPermanentRaid : public Il2CppObject
	{
	public:
		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERPERMANENTRAID_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERPERMANENTRAID_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERPERMANENTRAID_GET_BATTLETYPE_OFFSET))(nullptr);
		}

	};

