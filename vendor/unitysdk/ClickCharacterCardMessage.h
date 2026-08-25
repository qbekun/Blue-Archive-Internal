#pragma once
#include "unitysdk.h"

#define CLICKCHARACTERCARDMESSAGE_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x22F2740)
#define CLICKCHARACTERCARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F2750)
#define CLICKCHARACTERCARDMESSAGE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x22F2770)

	inline static constexpr unsigned int ClickCharacterCardMessage_TypeDefinitionIndex = 4897;

	class ClickCharacterCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x18

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLICKCHARACTERCARDMESSAGE_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLICKCHARACTERCARDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKCHARACTERCARDMESSAGE_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};

