#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills::LogicEffects { class ChangeStatLogicApplicationGaugeTraceType; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeEffectDAO; }

#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1236680)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_GAUGETRACEELEMENT_OFFSET UNITYSDK_OFFSET(0x1236690)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_SETGAUGEENERGYTOTARGETHPRATIO_OFFSET UNITYSDK_OFFSET(0x12366A0)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x12366B0)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12366C0)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_STARTGAUGEENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x1236950)
#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_LOGICEFFECTTYPEREDUCEGAUGE_OFFSET UNITYSDK_OFFSET(0x1236960)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeEffectValue_TypeDefinitionIndex = 13864;

	class ChangeStatLogicApplicationGaugeEffectValue : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _SetGaugeEnergyToTargetHpRatio_k__BackingField; // 0x48
		::MX::Core::Math::BasisPoint* _StartGaugeEnergyRatio_k__BackingField; // 0x50
		::System::Boolean _Dispellable_k__BackingField; // 0x58
		Il2CppObject* _LogicEffectTypeReduceGauge_k__BackingField; // 0x60
		::System::String* _UIPath_k__BackingField; // 0x68
		::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeTraceType* _GaugeTraceElement_k__BackingField; // 0x70

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_UIPATH_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeTraceType* get_GaugeTraceElement()
		{
			return ((::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeTraceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_GAUGETRACEELEMENT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_SetGaugeEnergyToTargetHpRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_SETGAUGEENERGYTOTARGETHPRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_StartGaugeEnergyRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_STARTGAUGEENERGYRATIO_OFFSET))(nullptr);
		}

		Il2CppObject* get_LogicEffectTypeReduceGauge()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGEEFFECTVALUE_GET_LOGICEFFECTTYPEREDUCEGAUGE_OFFSET))(nullptr);
		}

	};
}

