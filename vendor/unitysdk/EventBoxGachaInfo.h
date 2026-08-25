#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentBoxGachaShopData; }

#define EVENTBOXGACHAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x247C9F0)

	inline static constexpr unsigned int EventBoxGachaInfo_TypeDefinitionIndex = 5669;

	class EventBoxGachaInfo : public Il2CppObject
	{
	public:
		::MX::Data::EventContentBoxGachaShopData* GachaData; // 0x10
		::System::Int64 Count; // 0x18

		::System::Void .ctor(::MX::Data::EventContentBoxGachaShopData* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentBoxGachaShopData*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHAINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

