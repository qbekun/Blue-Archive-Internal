#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ForceMoveTargetEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define FORCEMOVETARGETENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1767180)
#define FORCEMOVETARGETENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1765E60)
#define FORCEMOVETARGETENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17671D0)

	inline static constexpr unsigned int ForceMoveTargetEntityDAOFormatter_TypeDefinitionIndex = 15522;

	class ForceMoveTargetEntityDAOFormatter : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORCEMOVETARGETENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORCEMOVETARGETENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORCEMOVETARGETENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

