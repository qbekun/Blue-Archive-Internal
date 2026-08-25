#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }

#define UIDEFEATHANDLERWORLDRAID_.CTOR_OFFSET UNITYSDK_OFFSET(0x23C5E30)
#define UIDEFEATHANDLERWORLDRAID_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0x23C5E40)
#define UIDEFEATHANDLERWORLDRAID_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0x23C6100)
#define UIDEFEATHANDLERWORLDRAID_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x23C63A0)

	inline static constexpr unsigned int UIDefeatHandlerWorldRaid_TypeDefinitionIndex = 5277;

	class UIDefeatHandlerWorldRaid : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWORLDRAID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWORLDRAID_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWORLDRAID_REQUESTRESULT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDEFEATHANDLERWORLDRAID_GET_BATTLETYPE_OFFSET))(nullptr);
		}

	};

