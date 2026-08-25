#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class HexaEvent; }

#define HEXAEVENTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF79750)

	inline static constexpr unsigned int HexaEventVisual_TypeDefinitionIndex = 829;

	class HexaEventVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaEvent* hexaEvent; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAEVENTVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

