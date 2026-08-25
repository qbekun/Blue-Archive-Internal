#pragma once
#include "unitysdk.h"

#define EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6EBC0)
#define EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6EBD0)
#define EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6EBF0)

	inline static constexpr unsigned int EventContentPurchasePlayCountHardStageResponseMessage_TypeDefinitionIndex = 2495;

	class EventContentPurchasePlayCountHardStageResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPURCHASEPLAYCOUNTHARDSTAGERESPONSEMESSAGE_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};

