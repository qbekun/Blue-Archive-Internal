#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AbilityActivateTag; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_DATA_EXSKILLENTITYTIMELINEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FAAB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ExSkillEntityTimelineData_TypeDefinitionIndex = 13673;

	class ExSkillEntityTimelineData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::AbilityActivateTag* Tag; // 0x28
		::MX::Logic::Skills::SpawnDirectionTypes* InvokerDirectionOverride; // 0x2C
		::UnityEngine::Vector2* InvokerDirectionOverrideWorldPosition; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXSKILLENTITYTIMELINEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

