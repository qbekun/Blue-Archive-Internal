#pragma once
#include "unitysdk.h"

#define UIELIMINATERAIDROOMEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E2390)

	inline static constexpr unsigned int UIEliminateRaidRoomEnd_TypeDefinitionIndex = 5377;

	class UIEliminateRaidRoomEnd : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDROOMEND_.CTOR_OFFSET))(nullptr);
		}

	};

