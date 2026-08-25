#pragma once
#include "unitysdk.h"

#define CLICKEQUIPMENTCARDMESSAGE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x24163E0)
#define CLICKEQUIPMENTCARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24163F0)
#define CLICKEQUIPMENTCARDMESSAGE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2416410)

	inline static constexpr unsigned int ClickEquipmentCardMessage_TypeDefinitionIndex = 5474;

	class ClickEquipmentCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x18

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLICKEQUIPMENTCARDMESSAGE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLICKEQUIPMENTCARDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKEQUIPMENTCARDMESSAGE_GET_SERVERID_OFFSET))(nullptr);
		}

	};

