#pragma once
#include "unitysdk.h"

#define TBGEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEFF260)

	inline static constexpr unsigned int TBGEventHandler_TypeDefinitionIndex = 11179;

	class TBGEventHandler : public Il2CppObject
	{
	public:
		Il2CppObject* onPlayerDiceRolled; // 0x10
		Il2CppObject* onPayCostRequired; // 0x18
		Il2CppObject* onReceiveRewardAsParcel; // 0x20
		::System::Action* onPortalUsed; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGEVENTHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};

