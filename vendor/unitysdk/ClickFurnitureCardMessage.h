#pragma once
#include "unitysdk.h"

#define CLICKFURNITURECARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25832E0)
#define CLICKFURNITURECARDMESSAGE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2583300)
#define CLICKFURNITURECARDMESSAGE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2583310)

	inline static constexpr unsigned int ClickFurnitureCardMessage_TypeDefinitionIndex = 6216;

	class ClickFurnitureCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLICKFURNITURECARDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKFURNITURECARDMESSAGE_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLICKFURNITURECARDMESSAGE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

	};

