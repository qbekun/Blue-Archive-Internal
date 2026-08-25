#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UIWidget;

#define UIACADEMYZONE_GET_LOCKOBJECT_OFFSET UNITYSDK_OFFSET(0x21E3C90)
#define UIACADEMYZONE_GET_ADDITIONALLOCKOBJECT_OFFSET UNITYSDK_OFFSET(0x21E3CA0)
#define UIACADEMYZONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E3CB0)
#define UIACADEMYZONE_REFRESH_OFFSET UNITYSDK_OFFSET(0x21E3CD0)
#define UIACADEMYZONE_SETUI_OFFSET UNITYSDK_OFFSET(0x21E3EA0)
#define UIACADEMYZONE_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21E4620)
#define UIACADEMYZONE_SHOWUNLOCK_OFFSET UNITYSDK_OFFSET(0x21E4630)

	inline static constexpr unsigned int UIAcademyZone_TypeDefinitionIndex = 4232;

	class UIAcademyZone : public Il2CppObject
	{
	public:
		::System::Int64 zoneId; // 0x58
		::UnityEngine::GameObject* Lock; // 0x60
		::UnityEngine::GameObject* additionalLockObject; // 0x68
		::System::Int64 LocationId; // 0x70
		UIWidget* widget; // 0x78

		::UnityEngine::GameObject* get_LockObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONE_GET_LOCKOBJECT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_AdditionalLockObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONE_GET_ADDITIONALLOCKOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONE_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONE_SETUI_OFFSET))(nullptr);
		}

		::System::Int64 get_ZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONE_GET_ZONEID_OFFSET))(nullptr);
		}

		::System::Void ShowUnlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYZONE_SHOWUNLOCK_OFFSET))(nullptr);
		}

	};

