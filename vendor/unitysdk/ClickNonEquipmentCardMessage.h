#pragma once
#include "unitysdk.h"

#define CLICKNONEQUIPMENTCARDMESSAGE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x26B34D0)
#define CLICKNONEQUIPMENTCARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B34E0)
#define CLICKNONEQUIPMENTCARDMESSAGE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x26B3500)

	inline static constexpr unsigned int ClickNonEquipmentCardMessage_TypeDefinitionIndex = 6902;

	class ClickNonEquipmentCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x18

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKNONEQUIPMENTCARDMESSAGE_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLICKNONEQUIPMENTCARDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLICKNONEQUIPMENTCARDMESSAGE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

	};

