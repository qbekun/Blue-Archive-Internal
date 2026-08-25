#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ChangeStatLogicApplicationGaugeEffectValue; }
namespace MX::Logic::Skills::LogicEffects { class ChangeStatLogicApplicationGaugeTraceType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x140C120)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_GAUGETRACEELEMENT_OFFSET UNITYSDK_OFFSET(0x140C130)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_SETGAUGEENERGYTOTARGETHPRATIO_OFFSET UNITYSDK_OFFSET(0x140C150)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140C170)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GETUIPATH_OFFSET UNITYSDK_OFFSET(0x140C230)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140C470)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GETLOADHANDUIPATH_OFFSET UNITYSDK_OFFSET(0x140C320)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_LOGICEFFECTTYPEREDUCEGAUGE_OFFSET UNITYSDK_OFFSET(0x140C490)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_STARTGAUGEENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x140C4B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x140C300)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeEffect_TypeDefinitionIndex = 14713;

	class ChangeStatLogicApplicationGaugeEffect : public Il2CppObject
	{
	public:
		::System::Int64 MaxGauge; // 0xD0
		::MX::Logic::Data::ChangeStatLogicApplicationGaugeEffectValue* effectValue; // 0xD8

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeTraceType* get_GaugeTraceElement()
		{
			return ((::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeTraceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_GAUGETRACEELEMENT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_SetGaugeEnergyToTargetHpRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_SETGAUGEENERGYTOTARGETHPRATIO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ChangeStatLogicApplicationGaugeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ChangeStatLogicApplicationGaugeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GETUIPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::String* GetLoadHandUIPath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GETLOADHANDUIPATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_LogicEffectTypeReduceGauge()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_LOGICEFFECTTYPEREDUCEGAUGE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_StartGaugeEnergyRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_STARTGAUGEENERGYRATIO_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESTATLOGICAPPLICATIONGAUGEEFFECT_GET_UIPATH_OFFSET))(nullptr);
		}

	};
}

