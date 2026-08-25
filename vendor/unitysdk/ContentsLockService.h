#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentLockType; }
namespace FlatData { class EventTargetType; }

#define CONTENTSLOCKSERVICE_ISLOCK_OFFSET UNITYSDK_OFFSET(0x1FC2E90)
#define CONTENTSLOCKSERVICE_ISLOCK_OFFSET UNITYSDK_OFFSET(0x1FC3130)
#define CONTENTSLOCKSERVICE_ISLOCKEVENT_OFFSET UNITYSDK_OFFSET(0x1FC35A0)
#define CONTENTSLOCKSERVICE_OPENLOCKPOPUP_OFFSET UNITYSDK_OFFSET(0x1FC35D0)

	inline static constexpr unsigned int ContentsLockService_TypeDefinitionIndex = 2959;

	class ContentsLockService : public Il2CppObject
	{
	public:
		::System::Boolean IsLock(::FlatData::ContentLockType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::ContentLockType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSLOCKSERVICE_ISLOCK_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLock(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSLOCKSERVICE_ISLOCK_OFFSET))(str, nullptr);
		}

		::System::Boolean IsLockEvent(::FlatData::EventTargetType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSLOCKSERVICE_ISLOCKEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OpenLockPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSLOCKSERVICE_OPENLOCKPOPUP_OFFSET))(arg, nullptr);
		}

	};

