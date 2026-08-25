#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class EndWaveArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x135DAF0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_START_OFFSET UNITYSDK_OFFSET(0x135EA70)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x135EB00)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_ONENDWAVE_OFFSET UNITYSDK_OFFSET(0x135FF70)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x135FFD0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x135FF20)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_END_OFFSET UNITYSDK_OFFSET(0x13601D0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1360260)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionEndWave_TypeDefinitionIndex = 14338;

	class GroundConditionEndWave : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x28
		::System::Int32 Step; // 0x30

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionEndWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionEndWave&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_START_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionEndWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionEndWave&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEndWave(::System::Object* arg, ::MX::Logic::Battles::EndWaveArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::EndWaveArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_ONENDWAVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_END_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONENDWAVE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

