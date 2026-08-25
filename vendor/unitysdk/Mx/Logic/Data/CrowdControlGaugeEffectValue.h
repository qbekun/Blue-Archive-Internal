#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class CrowdControlGaugeApplyType; }
namespace MX::GameData::DAO::Battle { class CrowdControlGaugeEffectDAO; }

#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_IGNORELOGICEFFECTTEMPLATEIDLIST_OFFSET UNITYSDK_OFFSET(0x12370E0)
#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_GAUGEREDUCESTARTDELAY_OFFSET UNITYSDK_OFFSET(0x12370F0)
#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_MAXGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x1237100)
#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1237110)
#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_GAUGEFILLCAP_OFFSET UNITYSDK_OFFSET(0x1237440)
#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1237450)
#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_ISCALCULATEOPPRESSION_OFFSET UNITYSDK_OFFSET(0x1237460)
#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_MAXGAUGELOGICEFFECTGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1237470)
#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_GAUGEREDUCEVALUEPERSECOND_OFFSET UNITYSDK_OFFSET(0x1237480)
#define MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1237490)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CrowdControlGaugeEffectValue_TypeDefinitionIndex = 13872;

	class CrowdControlGaugeEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Data::CrowdControlGaugeApplyType* ApplyCrowdControlType; // 0x48
		::System::Int32 _DurationFrame_k__BackingField; // 0x4C
		::System::Int32 _MaxGaugeValue_k__BackingField; // 0x50
		Il2CppObject* _IgnoreLogicEffectTemplateIdList_k__BackingField; // 0x58
		Il2CppObject* _MaxGaugeLogicEffectGroupIdList_k__BackingField; // 0x60
		::System::Boolean _IsCalculateOppression_k__BackingField; // 0x68
		::System::Int64 _GaugeReduceValuePerSecond_k__BackingField; // 0x70
		::System::Int64 _GaugeReduceStartDelay_k__BackingField; // 0x78
		::System::Int32 _GaugeFillCap_k__BackingField; // 0x80
		::System::Boolean _Dispellable_k__BackingField; // 0x84

		Il2CppObject* get_IgnoreLogicEffectTemplateIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_IGNORELOGICEFFECTTEMPLATEIDLIST_OFFSET))(nullptr);
		}

		::System::Int64 get_GaugeReduceStartDelay()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_GAUGEREDUCESTARTDELAY_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxGaugeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_MAXGAUGEVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GaugeFillCap()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_GAUGEFILLCAP_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCalculateOppression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_ISCALCULATEOPPRESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_MaxGaugeLogicEffectGroupIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_MAXGAUGELOGICEFFECTGROUPIDLIST_OFFSET))(nullptr);
		}

		::System::Int64 get_GaugeReduceValuePerSecond()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_GAUGEREDUCEVALUEPERSECOND_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CROWDCONTROLGAUGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

	};
}

