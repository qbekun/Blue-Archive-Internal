#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Battles { class DamageResultEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x134C230)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_END_OFFSET UNITYSDK_OFFSET(0x134C400)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x134C240)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x134C560)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_START_OFFSET UNITYSDK_OFFSET(0x134D200)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x134D2B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x134D1B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET UNITYSDK_OFFSET(0x134DBA0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionCharacterHPChanged_TypeDefinitionIndex = 14321;

	class GroundConditionCharacterHPChanged : public Il2CppObject
	{
	public:
		::System::Int64 TriggerRateUnder; // 0x28
		::System::Int64 TriggerRateOver; // 0x30
		::System::Int32 TriggerMaxCount; // 0x38
		::MX::Core::Math::BasisPoint* triggerRateUnderBasisPoint; // 0x40
		::MX::Core::Math::BasisPoint* triggerRateOverBasisPoint; // 0x48
		::System::Int32 triggerCountCurrent; // 0x50

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_END_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionCharacterHPChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionCharacterHPChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_START_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionCharacterHPChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionCharacterHPChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_DamageProcessed(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERHPCHANGED_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

