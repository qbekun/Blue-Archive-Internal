#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class NormalAttackCondition; }
namespace MX::Logic::Data { class NormalAttackPhaseName; }

#define MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F6560)
#define MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F68D0)
#define MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F6C10)
#define MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F68C0)
#define MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11F68E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NormalAttackPhaseControl_TypeDefinitionIndex = 13656;

	class NormalAttackPhaseControl : public Il2CppObject
	{
	public:
		::MX::Logic::Data::NormalAttackCondition* Condition; // 0x10
		::MX::Logic::Data::NormalAttackCondition* ConditionSecond; // 0x14
		::MX::Logic::Data::NormalAttackPhaseName* NextPhase; // 0x18

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::NormalAttackPhaseControl&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::NormalAttackPhaseControl&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::NormalAttackPhaseControl&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::NormalAttackPhaseControl&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKPHASECONTROL_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

