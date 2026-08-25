#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AllClearWaveArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_ONCLEARALLWAVE_OFFSET UNITYSDK_OFFSET(0x1353890)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13538E0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1353AE0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_START_OFFSET UNITYSDK_OFFSET(0x1353AF0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_END_OFFSET UNITYSDK_OFFSET(0x1353B80)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1353C10)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1353C60)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1354FC0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionClearAllWave_TypeDefinitionIndex = 14330;

	class GroundConditionClearAllWave : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x28

		::System::Void OnClearAllWave(::System::Object* arg, ::MX::Logic::Battles::AllClearWaveArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AllClearWaveArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_ONCLEARALLWAVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_START_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_END_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionClearAllWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionClearAllWave&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionClearAllWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionClearAllWave&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEARALLWAVE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

