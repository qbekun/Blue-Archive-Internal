#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }

#define BUTTONACTIVATOR_GET_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0xC0F3C0)
#define BUTTONACTIVATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0F3D0)
#define BUTTONACTIVATOR_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0xC0F3E0)
#define BUTTONACTIVATOR_GET_ONPRESS_OFFSET UNITYSDK_OFFSET(0xC0F400)
#define BUTTONACTIVATOR_GET_ONLONGPRESS_OFFSET UNITYSDK_OFFSET(0xC0F420)
#define BUTTONACTIVATOR_SET_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0xC0F440)
#define BUTTONACTIVATOR_GET_ONCLICK_OFFSET UNITYSDK_OFFSET(0xC0F5F0)
#define BUTTONACTIVATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0F450)
#define BUTTONACTIVATOR_SETBUTTONCOLLIDERACTIVE_OFFSET UNITYSDK_OFFSET(0xC0F610)

	inline static constexpr unsigned int ButtonActivator_TypeDefinitionIndex = 8827;

	class ButtonActivator : public Il2CppObject
	{
	public:
		MXButton* button; // 0x40
		::UnityEngine::GameObject* contentsLockObject; // 0x48
		::System::Boolean isContentsLock; // 0x50

		::System::Boolean get_IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONACTIVATOR_GET_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONACTIVATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONACTIVATOR_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		Il2CppObject* get_onPress()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONACTIVATOR_GET_ONPRESS_OFFSET))(nullptr);
		}

		Il2CppObject* get_onLongPress()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONACTIVATOR_GET_ONLONGPRESS_OFFSET))(nullptr);
		}

		::System::Void set_IsContentsLock(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUTTONACTIVATOR_SET_ISCONTENTSLOCK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_onClick()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONACTIVATOR_GET_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONACTIVATOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetButtonColliderActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUTTONACTIVATOR_SETBUTTONCOLLIDERACTIVE_OFFSET))(arg, nullptr);
		}

	};

