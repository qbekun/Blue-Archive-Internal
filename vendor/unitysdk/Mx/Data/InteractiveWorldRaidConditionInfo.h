#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MultipleConditionCheckType; }
namespace MX::Data::Excel { class InteractiveWorldRaidConditionExcel; }

#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1866060)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1866070)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x1866080)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_MULTIPLECONDITIONCHECKPARAMETER_OFFSET UNITYSDK_OFFSET(0x1866090)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x18660A0)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x18660B0)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x18660C0)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x18660D0)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x18660E0)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x18660F0)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_MULTIPLECONDITIONCHECKPARAMETER_OFFSET UNITYSDK_OFFSET(0x1866100)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1866110)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x18662F0)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1866300)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x1866310)
#define MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int InteractiveWorldRaidConditionInfo_TypeDefinitionIndex = 15926;

	class InteractiveWorldRaidConditionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _SeasonId_k__BackingField; // 0x18
		::System::Int64 _PhaseId_k__BackingField; // 0x20
		::System::Int64 _Priority_k__BackingField; // 0x28
		::FlatData::MultipleConditionCheckType* _MultipleConditionCheckType_k__BackingField; // 0x30
		::System::Int64 _MultipleConditionCheckParameter_k__BackingField; // 0x38
		Il2CppObject* _Conditions_k__BackingField; // 0x40

		::System::Void set_MultipleConditionCheckType(::FlatData::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::FlatData::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Priority(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Conditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_CONDITIONS_OFFSET))(nullptr);
		}

		::System::Void set_MultipleConditionCheckParameter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_MULTIPLECONDITIONCHECKPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Priority()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Int64 get_MultipleConditionCheckParameter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_MULTIPLECONDITIONCHECKPARAMETER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::InteractiveWorldRaidConditionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::InteractiveWorldRaidConditionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::FlatData::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return (return (::FlatData::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_Conditions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_SET_CONDITIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckCondition(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_INTERACTIVEWORLDRAIDCONDITIONINFO_CHECKCONDITION_OFFSET))(arg, arg, nullptr);
		}

	};
}

