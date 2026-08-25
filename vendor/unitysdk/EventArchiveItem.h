#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }

#define EVENTARCHIVEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2468B60)

	inline static constexpr unsigned int EventArchiveItem_TypeDefinitionIndex = 5619;

	class EventArchiveItem : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* SeasonInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTARCHIVEITEM_.CTOR_OFFSET))(nullptr);
		}

	};

