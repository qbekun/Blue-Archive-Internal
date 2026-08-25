#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundGlobal; }

#define GROUNDGLOBALVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814A70)

	inline static constexpr unsigned int GroundGlobalVisual_TypeDefinitionIndex = 1244;

	class GroundGlobalVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundGlobal* Global; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDGLOBALVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

