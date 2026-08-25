#pragma once
#include "unitysdk.h"

class EventContentBoxGachaProgress;

#define EVENTBOXGACHASCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x247BF50)
#define EVENTBOXGACHASCROLLCONTROLLER_REFRESHELEMENTS_OFFSET UNITYSDK_OFFSET(0x247BF90)
#define EVENTBOXGACHASCROLLCONTROLLER_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x247C120)

	inline static constexpr unsigned int EventBoxGachaScrollController_TypeDefinitionIndex = 5673;

	class EventBoxGachaScrollController : public Entry
	{
	public:
		::System::Int32 columnCount; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHASCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshElements(EventContentBoxGachaProgress* arg)
		{
			((::System::Void(*)(EventContentBoxGachaProgress*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHASCROLLCONTROLLER_REFRESHELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshList(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHASCROLLCONTROLLER_REFRESHLIST_OFFSET))(arg, nullptr);
		}

	};

