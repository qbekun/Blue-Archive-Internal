#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TransformDecideTiming; }
namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SpawnTransformOptions_TypeDefinitionIndex = 13714;

	class SpawnTransformOptions : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TransformDecideTiming* DecideTiming; // 0x10
		::MX::Logic::Skills::SpawnPositionTypes* SpawnPositionReference; // 0x14
		::MX::Logic::Skills::SpawnDirectionTypes* SpawnDirectionReference; // 0x18
		::UnityEngine::Vector2* PositionOffset; // 0x1C
		::MX::Logic::Skills::SpawnDirectionTypes* OffsetDirectionReference; // 0x24

	};
}

