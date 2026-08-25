#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIWidget;

#define UIACADEMYEVENTZONE_SETUI_OFFSET UNITYSDK_OFFSET(0x21AE280)
#define UIACADEMYEVENTZONE_GET_ADDITIONALLOCKOBJECT_OFFSET UNITYSDK_OFFSET(0x21AE4E0)
#define UIACADEMYEVENTZONE_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21AE4F0)
#define UIACADEMYEVENTZONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21AE610)
#define UIACADEMYEVENTZONE_REFRESH_OFFSET UNITYSDK_OFFSET(0x21AE620)
#define UIACADEMYEVENTZONE_SHOWUNLOCK_OFFSET UNITYSDK_OFFSET(0x21AE7F0)
#define UIACADEMYEVENTZONE_GET_LOCKOBJECT_OFFSET UNITYSDK_OFFSET(0x21AEAC0)

	inline static constexpr unsigned int UIAcademyEventZone_TypeDefinitionIndex = 4179;

	class UIAcademyEventZone : public Il2CppObject
	{
	public:
		::System::Int64 originalZoneId; // 0x58
		::UnityEngine::GameObject* lockObject; // 0x60
		::UnityEngine::GameObject* additionalLockObject; // 0x68
		::System::Int64 _zoneId; // 0x70
		UIWidget* widget; // 0x78

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYEVENTZONE_SETUI_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_AdditionalLockObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYEVENTZONE_GET_ADDITIONALLOCKOBJECT_OFFSET))(nullptr);
		}

		::System::Int64 get_ZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYEVENTZONE_GET_ZONEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYEVENTZONE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYEVENTZONE_REFRESH_OFFSET))(nullptr);
		}

		::System::Void ShowUnlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYEVENTZONE_SHOWUNLOCK_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_LockObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYEVENTZONE_GET_LOCKOBJECT_OFFSET))(nullptr);
		}

	};

