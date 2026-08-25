#pragma once
#include "../../unitysdk.h"

namespace FlatData { class DreamMakerEndingCondition; }

#define MX_DATA_MINIGAMEDREAMENDINGCONDITION_GET_CONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1904E00)
#define MX_DATA_MINIGAMEDREAMENDINGCONDITION_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1904E10)
#define MX_DATA_MINIGAMEDREAMENDINGCONDITION_SET_CONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1904E20)
#define MX_DATA_MINIGAMEDREAMENDINGCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x19048A0)
#define MX_DATA_MINIGAMEDREAMENDINGCONDITION_SET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1904E30)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameDreamEndingCondition_TypeDefinitionIndex = 16217;

	class MiniGameDreamEndingCondition : public Il2CppObject
	{
	public:
		::FlatData::DreamMakerEndingCondition* _ConditionType_k__BackingField; // 0x10
		::System::Int64 _ConditionValue_k__BackingField; // 0x18

		::System::Int64 get_ConditionValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGCONDITION_GET_CONDITIONVALUE_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerEndingCondition* get_ConditionType()
		{
			return (return (::FlatData::DreamMakerEndingCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGCONDITION_GET_CONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ConditionValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGCONDITION_SET_CONDITIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConditionType(::FlatData::DreamMakerEndingCondition* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerEndingCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMENDINGCONDITION_SET_CONDITIONTYPE_OFFSET))(arg, nullptr);
		}

	};
}

