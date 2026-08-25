#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Data { class GroundObstacleData&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define GROUNDOBSTACLEDATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x184CE90)
#define GROUNDOBSTACLEDATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x184CEE0)
#define GROUNDOBSTACLEDATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x184A940)

	inline static constexpr unsigned int GroundObstacleDataFormatter_TypeDefinitionIndex = 15835;

	class GroundObstacleDataFormatter : public ::System::Collections::Generic::ComparisonComparer`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Data::GroundObstacleData&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Data::GroundObstacleData&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Data::GroundObstacleData&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Data::GroundObstacleData&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDOBSTACLEDATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

