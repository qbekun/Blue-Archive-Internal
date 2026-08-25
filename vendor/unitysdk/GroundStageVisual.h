#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundStage; }

#define GROUNDSTAGEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814B10)

	inline static constexpr unsigned int GroundStageVisual_TypeDefinitionIndex = 1249;

	class GroundStageVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundStage* GroundStage; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDSTAGEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

