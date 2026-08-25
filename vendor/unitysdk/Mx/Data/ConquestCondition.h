#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ConquestCondition; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class ConquestConditionType; }

#define MX_DATA_CONQUESTCONDITION_GET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x183A000)
#define MX_DATA_CONQUESTCONDITION_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183A010)
#define MX_DATA_CONQUESTCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x18394C0)
#define MX_DATA_CONQUESTCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x183A510)
#define MX_DATA_CONQUESTCONDITION_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183A520)
#define MX_DATA_CONQUESTCONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x183A530)
#define MX_DATA_CONQUESTCONDITION_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x183A540)
#define MX_DATA_CONQUESTCONDITION_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x183A550)
#define MX_DATA_CONQUESTCONDITION_GET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x183A560)

namespace MX::Data
{
	inline static constexpr unsigned int ConquestCondition_TypeDefinitionIndex = 15758;

	class ConquestCondition : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _Index_k__BackingField; // 0x18

		::System::Int64 get_StepIndex()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTCONDITION_GET_STEPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTCONDITION_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::Data::ConquestCondition* Create(::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::System::Int64 arg, ::FlatData::ConquestConditionType* arg, ::System::String* str)
		{
			return (return (::MX::Data::ConquestCondition*(*)(::System::Int64, ::FlatData::StageDifficulty*, ::System::Int64, ::FlatData::ConquestConditionType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTCONDITION_CREATE_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTCONDITION_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ConquestConditionType* get_Type()
		{
			return (return (::FlatData::ConquestConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTCONDITION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTCONDITION_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Index()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTCONDITION_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_PhaseIndex()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONQUESTCONDITION_GET_PHASEINDEX_OFFSET))(nullptr);
		}

	};
}

