#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class RootMotionMoveDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ROOTMOTIONMOVEDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1771010)
#define ROOTMOTIONMOVEDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1773370)
#define ROOTMOTIONMOVEDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17733C0)

	inline static constexpr unsigned int RootMotionMoveDAOFormatter_TypeDefinitionIndex = 15530;

	class RootMotionMoveDAOFormatter : public ::System::IO::BufferedStream
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RootMotionMoveDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RootMotionMoveDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

