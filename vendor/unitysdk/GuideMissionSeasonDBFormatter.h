#pragma once
#include "unitysdk.h"

#define GUIDEMISSIONSEASONDBFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1001250)
#define GUIDEMISSIONSEASONDBFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x10012A0)
#define GUIDEMISSIONSEASONDBFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10009B0)

	inline static constexpr unsigned int GuideMissionSeasonDBFormatter_TypeDefinitionIndex = 12634;

	class GuideMissionSeasonDBFormatter : public ::System::Collections::Generic::GenericEqualityComparer`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameLogic::DBModel::GuideMissionSeasonDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameLogic::DBModel::GuideMissionSeasonDB&*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONDBFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameLogic::DBModel::GuideMissionSeasonDB&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameLogic::DBModel::GuideMissionSeasonDB&*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONDBFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONSEASONDBFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

