#pragma once
#include "unitysdk.h"

class UILabel;
class ChangeStatLogicApplicationGauge;
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define LOGICEFFECTDURATIONGAUGEMODULE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x25F00F0)
#define LOGICEFFECTDURATIONGAUGEMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25F0120)
#define LOGICEFFECTDURATIONGAUGEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F0310)
#define LOGICEFFECTDURATIONGAUGEMODULE_UPDATE_OFFSET UNITYSDK_OFFSET(0x25F0320)
#define LOGICEFFECTDURATIONGAUGEMODULE_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0x25F0130)

	inline static constexpr unsigned int LogicEffectDurationGaugeModule_TypeDefinitionIndex = 6420;

	class LogicEffectDurationGaugeModule : public Il2CppObject
	{
	public:
		UILabel* percentValueLabel; // 0x18
		ChangeStatLogicApplicationGauge* gauge; // 0x20
		::System::String* logicEffectGroupId; // 0x28

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTDURATIONGAUGEMODULE_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTDURATIONGAUGEMODULE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTDURATIONGAUGEMODULE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTDURATIONGAUGEMODULE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTDURATIONGAUGEMODULE_UPDATELABEL_OFFSET))(nullptr);
		}

	};

