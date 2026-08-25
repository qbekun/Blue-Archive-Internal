#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class WaveEnemyClearedArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1355FB0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_START_OFFSET UNITYSDK_OFFSET(0x1357450)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_ONWAVEENEMYCLEARED_OFFSET UNITYSDK_OFFSET(0x13574E0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1357590)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1357820)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13575A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_.CTOR_OFFSET UNITYSDK_OFFSET(0x1357400)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_END_OFFSET UNITYSDK_OFFSET(0x13587E0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionClearedWaves_TypeDefinitionIndex = 14332;

	class GroundConditionClearedWaves : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x28
		Il2CppObject* Waves; // 0x30

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionClearedWaves&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionClearedWaves&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_START_OFFSET))(nullptr);
		}

		::System::Void OnWaveEnemyCleared(::System::Object* arg, ::MX::Logic::Battles::WaveEnemyClearedArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::WaveEnemyClearedArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_ONWAVEENEMYCLEARED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionClearedWaves&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionClearedWaves&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCLEAREDWAVES_END_OFFSET))(nullptr);
		}

	};
}

