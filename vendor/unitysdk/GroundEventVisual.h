#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundEvent; }

#define GROUNDEVENTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814A50)

	inline static constexpr unsigned int GroundEventVisual_TypeDefinitionIndex = 1242;

	class GroundEventVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundEvent* GroundEvent; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDEVENTVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

