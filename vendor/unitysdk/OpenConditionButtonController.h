#pragma once
#include "unitysdk.h"

namespace FlatData { class OpenConditionContent; }
namespace FlatData { class ContentLockType; }
namespace UnityEngine { class GameObject; }
class UIBase;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace FlatData { class OpenCondition; }
namespace MX::GameLogic::Service { class OpenConditionLockReason; }
namespace FlatData { class ContentType; }
class UIPopup_System;

#define OPENCONDITIONBUTTONCONTROLLER_GET_CONTENTLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x1EC2E60)
#define OPENCONDITIONBUTTONCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EC2E70)
#define OPENCONDITIONBUTTONCONTROLLER_ONCLICKDISABLE_OFFSET UNITYSDK_OFFSET(0x1EC30E0)
#define OPENCONDITIONBUTTONCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EC36B0)
#define OPENCONDITIONBUTTONCONTROLLER_GET_ISPLAYINGUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x1EC36F0)
#define OPENCONDITIONBUTTONCONTROLLER_SETCONTENTTYPEWORLDRAID_OFFSET UNITYSDK_OFFSET(0x1EC3700)
#define OPENCONDITIONBUTTONCONTROLLER_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1EC3910)
#define OPENCONDITIONBUTTONCONTROLLER_CHECKPROHIBITED_OFFSET UNITYSDK_OFFSET(0x1EC3920)
#define OPENCONDITIONBUTTONCONTROLLER_CHECK_OFFSET UNITYSDK_OFFSET(0x1EC3B10)
#define OPENCONDITIONBUTTONCONTROLLER_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1EC4160)
#define OPENCONDITIONBUTTONCONTROLLER_SETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1EC4170)
#define OPENCONDITIONBUTTONCONTROLLER_GET_PREFSKEY_OFFSET UNITYSDK_OFFSET(0x1EC2D80)
#define OPENCONDITIONBUTTONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2640)
#define OPENCONDITIONBUTTONCONTROLLER_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1EC4230)
#define OPENCONDITIONBUTTONCONTROLLER_COPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1EC4240)
#define OPENCONDITIONBUTTONCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x1EC42D0)
#define OPENCONDITIONBUTTONCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC3730)
#define OPENCONDITIONBUTTONCONTROLLER_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1EC4740)
#define OPENCONDITIONBUTTONCONTROLLER__ONCLICKDISABLE_B__41_0_OFFSET UNITYSDK_OFFSET(0x1EC4900)
#define OPENCONDITIONBUTTONCONTROLLER_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x1EC4090)

	inline static constexpr unsigned int OpenConditionButtonController_TypeDefinitionIndex = 1762;

	class OpenConditionButtonController : public Il2CppObject
	{
	public:
		::FlatData::OpenConditionContent* contentType; // 0x18
		::FlatData::ContentLockType* prohibitionType; // 0x1C
		::UnityEngine::GameObject* Enable; // 0x20
		::UnityEngine::GameObject* Disable; // 0x28
		::UnityEngine::GameObject* Prohibited; // 0x30
		::System::Boolean CallCheckInEnable; // 0x38
		UIBase* uiParent; // 0x40
		::UnityEngine::Animation* buttonAnimation; // 0x48
		::UnityEngine::Coroutine* unlockAnimationCoroutine; // 0x50
		::FlatData::OpenCondition* condition; // 0x58
		::MX::GameLogic::Service::OpenConditionLockReason* reason; // 0x5C
		::System::String* PrefsKeyPrefix; // 0x60
		::FlatData::ContentType* worldRaidContentType; // 0x68
		::System::Int64 worldRaidSeasonId; // 0x70
		::System::Int64 worldRaidPhaseId; // 0x78
		::System::Int64 worldRaidConditionId; // 0x80
		::System::String* reservedConditionMsg; // 0x88

		::FlatData::ContentLockType* get_ContentLockType()
		{
			return ((::FlatData::ContentLockType*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_GET_CONTENTLOCKTYPE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_ONCLICKDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayingUnlockAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_GET_ISPLAYINGUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetContentTypeWorldRaid(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::FlatData::ContentLockType* arg5)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ContentLockType*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_SETCONTENTTYPEWORLDRAID_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::GameLogic::Service::OpenConditionLockReason* get_Reason()
		{
			return ((::MX::GameLogic::Service::OpenConditionLockReason*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_GET_REASON_OFFSET))(nullptr);
		}

		::System::Boolean CheckProhibited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_CHECKPROHIBITED_OFFSET))(nullptr);
		}

		::System::Void Check(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_CHECK_OFFSET))(arg, nullptr);
		}

		::FlatData::OpenConditionContent* get_Content()
		{
			return ((::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void SetContentType(::FlatData::OpenConditionContent* arg, ::FlatData::ContentLockType* arg2)
		{
			((::System::Void(*)(::FlatData::OpenConditionContent*, ::FlatData::ContentLockType*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_SETCONTENTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_prefsKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_GET_PREFSKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::OpenCondition* get_Condition()
		{
			return ((::FlatData::OpenCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_GET_CONDITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_COPLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_RESET_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void CheckCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void _OnClickDisable_b__41_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER__ONCLICKDISABLE_B__41_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONBUTTONCONTROLLER_GET_ISOPENED_OFFSET))(nullptr);
		}

	};

