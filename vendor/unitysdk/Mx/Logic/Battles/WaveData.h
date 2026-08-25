#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_WAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1330480)
#define MX_LOGIC_BATTLES_WAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1331AE0)
#define MX_LOGIC_BATTLES_WAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1333810)
#define MX_LOGIC_BATTLES_WAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1333820)
#define MX_LOGIC_BATTLES_WAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1333800)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int WaveData_TypeDefinitionIndex = 14264;

	class WaveData : public Il2CppObject
	{
	public:
		::System::String* SpawnPointCommandId; // 0x10
		::System::Int32 EndCount; // 0x18
		::System::Int64 WaveDelay; // 0x20
		::System::String* StartOperator; // 0x28
		::System::String* ClearOperator; // 0x30
		::System::Int64 SpawnDelay; // 0x38

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::WaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::WaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::WaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::WaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

