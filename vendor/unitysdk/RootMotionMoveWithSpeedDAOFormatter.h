#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class RootMotionMoveWithSpeedDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define ROOTMOTIONMOVEWITHSPEEDDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17770B0)
#define ROOTMOTIONMOVEWITHSPEEDDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1775E30)
#define ROOTMOTIONMOVEWITHSPEEDDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1777100)

	inline static constexpr unsigned int RootMotionMoveWithSpeedDAOFormatter_TypeDefinitionIndex = 15532;

	class RootMotionMoveWithSpeedDAOFormatter : public ::System::IO::FileAttributes
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEWITHSPEEDDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEWITHSPEEDDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTIONMOVEWITHSPEEDDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

