#pragma once
#include "unitysdk.h"

#define UIRAIDROOMEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A1D70)

	inline static constexpr unsigned int UIRaidRoomEnd_TypeDefinitionIndex = 7487;

	class UIRaidRoomEnd : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDROOMEND_.CTOR_OFFSET))(nullptr);
		}

	};

