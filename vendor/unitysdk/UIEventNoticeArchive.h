#pragma once
#include "unitysdk.h"

class EventNoticeArchiveScrollViewController;
namespace UnityEngine { class GameObject; }

#define UIEVENTNOTICEARCHIVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x246A790)
#define UIEVENTNOTICEARCHIVE_REFRESHEVENTNOTICEINTERNAL_OFFSET UNITYSDK_OFFSET(0x246A7B0)
#define UIEVENTNOTICEARCHIVE_REFRESH_OFFSET UNITYSDK_OFFSET(0x246A7A0)
#define UIEVENTNOTICEARCHIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x246BA70)

	inline static constexpr unsigned int UIEventNoticeArchive_TypeDefinitionIndex = 5630;

	class UIEventNoticeArchive : public Il2CppObject
	{
	public:
		EventNoticeArchiveScrollViewController* EventNoticeScrollView; // 0x18
		::UnityEngine::GameObject* emptyObject; // 0x20
		Il2CppObject* activatedInfos; // 0x28

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTNOTICEARCHIVE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void RefreshEventNoticeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTNOTICEARCHIVE_REFRESHEVENTNOTICEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTNOTICEARCHIVE_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTNOTICEARCHIVE_.CTOR_OFFSET))(nullptr);
		}

	};

