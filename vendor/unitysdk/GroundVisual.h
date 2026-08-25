#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Ground; }

#define GROUNDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814B20)
#define GROUNDVISUAL_INIT_OFFSET UNITYSDK_OFFSET(0x1814B90)

	inline static constexpr unsigned int GroundVisual_TypeDefinitionIndex = 1250;

	class GroundVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Ground* Ground; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::MX::Logic::Battles::Ground* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Ground*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDVISUAL_INIT_OFFSET))(arg, nullptr);
		}

	};

