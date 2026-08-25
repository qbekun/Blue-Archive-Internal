#pragma once
#include "unitysdk.h"

#define MISSIONPROGRESSDBFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1004860)
#define MISSIONPROGRESSDBFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1004250)
#define MISSIONPROGRESSDBFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x10048B0)

	inline static constexpr unsigned int MissionProgressDBFormatter_TypeDefinitionIndex = 12663;

	class MissionProgressDBFormatter : public ::System::IO::FileOptions
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameLogic::DBModel::MissionProgressDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameLogic::DBModel::MissionProgressDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONPROGRESSDBFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONPROGRESSDBFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameLogic::DBModel::MissionProgressDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameLogic::DBModel::MissionProgressDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONPROGRESSDBFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

