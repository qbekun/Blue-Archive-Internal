#pragma once
#include "../unitysdk.h"

class RefreshEventType;

#define MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xDB1BC0)
#define MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1BD0)
#define MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_SET_QUICKSLOTON_OFFSET UNITYSDK_OFFSET(0xDB1BF0)
#define MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_GET_QUICKSLOTON_OFFSET UNITYSDK_OFFSET(0xDB1C00)
#define MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_SET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xDB1C10)

namespace MXUnderCover
{
	inline static constexpr unsigned int RefreshMainUIButtonsMessage_TypeDefinitionIndex = 9951;

	class RefreshMainUIButtonsMessage : public Il2CppObject
	{
	public:
		RefreshEventType* _EventType_k__BackingField; // 0x10
		::System::Boolean _QuickSlotOn_k__BackingField; // 0x14

		RefreshEventType* get_EventType()
		{
			return ((RefreshEventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_GET_EVENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(RefreshEventType* arg)
		{
			((::System::Void(*)(RefreshEventType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_QuickSlotOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_SET_QUICKSLOTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_QuickSlotOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_GET_QUICKSLOTON_OFFSET))(nullptr);
		}

		::System::Void set_EventType(RefreshEventType* arg)
		{
			((::System::Void(*)(RefreshEventType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_REFRESHMAINUIBUTTONSMESSAGE_SET_EVENTTYPE_OFFSET))(arg, nullptr);
		}

	};
}

