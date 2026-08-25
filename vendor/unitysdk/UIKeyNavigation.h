#pragma once
#include "unitysdk.h"

class Constraint;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }
class UIKeyNavigation;
namespace UnityEngine { class KeyCode; }

#define UIKEYNAVIGATION_GETCENTER_OFFSET UNITYSDK_OFFSET(0xA081D0)
#define UIKEYNAVIGATION_START_OFFSET UNITYSDK_OFFSET(0xA08460)
#define UIKEYNAVIGATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FA0C0)
#define UIKEYNAVIGATION_GETUP_OFFSET UNITYSDK_OFFSET(0xA08600)
#define UIKEYNAVIGATION_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA08CC0)
#define UIKEYNAVIGATION_ONKEY_OFFSET UNITYSDK_OFFSET(0xA08D70)
#define UIKEYNAVIGATION_GETDOWN_OFFSET UNITYSDK_OFFSET(0xA092F0)
#define UIKEYNAVIGATION_ONCLICK_OFFSET UNITYSDK_OFFSET(0xA094D0)
#define UIKEYNAVIGATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA09560)
#define UIKEYNAVIGATION_GETRIGHT_OFFSET UNITYSDK_OFFSET(0xA093E0)
#define UIKEYNAVIGATION_GETLEFT_OFFSET UNITYSDK_OFFSET(0xA09200)
#define UIKEYNAVIGATION_GET_ISCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xA084E0)
#define UIKEYNAVIGATION_GET_OFFSET UNITYSDK_OFFSET(0xA08820)
#define UIKEYNAVIGATION_ONNAVIGATE_OFFSET UNITYSDK_OFFSET(0xA09600)
#define UIKEYNAVIGATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA1F0)
#define UIKEYNAVIGATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA09780)
#define UIKEYNAVIGATION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA086F0)

	inline static constexpr unsigned int UIKeyNavigation_TypeDefinitionIndex = 50;

	class UIKeyNavigation : public Il2CppObject
	{
	public:
		Il2CppObject* list; // 0x0
		Constraint* constraint; // 0x18
		::UnityEngine::GameObject* onUp; // 0x20
		::UnityEngine::GameObject* onDown; // 0x28
		::UnityEngine::GameObject* onLeft; // 0x30
		::UnityEngine::GameObject* onRight; // 0x38
		::UnityEngine::GameObject* onClick; // 0x40
		::UnityEngine::GameObject* onTab; // 0x48
		::System::Boolean startsSelected; // 0x50
		::System::Boolean mStarted; // 0x51
		::System::Int32 mLastFrame; // 0x8

		::UnityEngine::Vector3* GetCenter(::UnityEngine::GameObject* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_GETCENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetUp()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_GETUP_OFFSET))(nullptr);
		}

		UIKeyNavigation* get_current()
		{
			return ((UIKeyNavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void OnKey(::UnityEngine::KeyCode* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_ONKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* GetDown()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_GETDOWN_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_ONDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetRight()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_GETRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetLeft()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_GETLEFT_OFFSET))(nullptr);
		}

		::System::Boolean get_isColliderEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_GET_ISCOLLIDERENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* Get(::UnityEngine::Vector3* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_GET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnNavigate(::UnityEngine::KeyCode* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_ONNAVIGATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIKEYNAVIGATION_ISACTIVE_OFFSET))(arg, nullptr);
		}

	};

