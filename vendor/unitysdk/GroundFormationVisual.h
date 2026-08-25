#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundFormation; }

#define GROUNDFORMATIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814A60)

	inline static constexpr unsigned int GroundFormationVisual_TypeDefinitionIndex = 1243;

	class GroundFormationVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundFormation* Formation; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDFORMATIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

