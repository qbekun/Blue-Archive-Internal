#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class StartWaveArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_START_OFFSET UNITYSDK_OFFSET(0x13678F0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1367980)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_ONSTARTWAVE_OFFSET UNITYSDK_OFFSET(0x1367B80)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1367BE0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1369000)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1369050)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1369060)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_END_OFFSET UNITYSDK_OFFSET(0x1369FE0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionStartWave_TypeDefinitionIndex = 14349;

	class GroundConditionStartWave : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x28
		::System::Int32 Step; // 0x30

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_START_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void OnStartWave(::System::Object* arg, ::MX::Logic::Battles::StartWaveArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::StartWaveArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_ONSTARTWAVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionStartWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionStartWave&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionStartWave&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionStartWave&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTARTWAVE_END_OFFSET))(nullptr);
		}

	};
}

