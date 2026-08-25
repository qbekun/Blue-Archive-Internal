#pragma once
#include "unitysdk.h"

#define MISSIONHISTORYDBFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1003CC0)
#define MISSIONHISTORYDBFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1003720)
#define MISSIONHISTORYDBFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1003D10)

	inline static constexpr unsigned int MissionHistoryDBFormatter_TypeDefinitionIndex = 12661;

	class MissionHistoryDBFormatter : public ::System::IO::FileNotFoundException
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameLogic::DBModel::MissionHistoryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameLogic::DBModel::MissionHistoryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONHISTORYDBFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONHISTORYDBFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameLogic::DBModel::MissionHistoryDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameLogic::DBModel::MissionHistoryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONHISTORYDBFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

