#pragma once
#include "../../../unitysdk.h"

class ComparisonOperator;
namespace MX::Logic::Battles { class SkillInfo; }

#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x12AABF0)
#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_SET_ISRESETCONDITION_OFFSET UNITYSDK_OFFSET(0x12AAD00)
#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_GET_CURRENTAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0x12AAD10)
#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12AAD20)
#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_GET_ISRESETCONDITION_OFFSET UNITYSDK_OFFSET(0x12AAEF0)
#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12AAF00)
#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x12AB3E0)
#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_SET_CURRENTAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0x12AB3F0)
#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12AB400)
#define MX_LOGIC_BATTLES_APPLYSKILLSETTING_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12AAD30)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ApplySkillSetting_TypeDefinitionIndex = 14122;

	class ApplySkillSetting : public Il2CppObject
	{
	public:
		::System::Int64 GaugeBarRate; // 0x10
		ComparisonOperator* Operator; // 0x18
		::MX::Logic::Battles::SkillInfo* SkillToUse; // 0x20
		::System::Int32 MaxApplyCount; // 0x30
		::System::Int32 _CurrentApplyCount_k__BackingField; // 0x34
		::System::Boolean _IsResetCondition_k__BackingField; // 0x38

		::System::Boolean CheckCondition(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_CHECKCONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_IsResetCondition(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_SET_ISRESETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentApplyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_GET_CURRENTAPPLYCOUNT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsResetCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_GET_ISRESETCONDITION_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::ApplySkillSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::ApplySkillSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentApplyCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_SET_CURRENTAPPLYCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::ApplySkillSetting&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::ApplySkillSetting&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_APPLYSKILLSETTING_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

