#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Animation; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIACADEMYMESSANGERICON_ONBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x21BB3F0)
#define UIACADEMYMESSANGERICON_HANDLEMOMOTALKREADSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x21BBA20)
#define UIACADEMYMESSANGERICON_GET_NOTICOUNT_OFFSET UNITYSDK_OFFSET(0x21BBA30)
#define UIACADEMYMESSANGERICON_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BBAE0)
#define UIACADEMYMESSANGERICON_HANDLEBIRTHDAYANIMATION_OFFSET UNITYSDK_OFFSET(0x21BBAF0)
#define UIACADEMYMESSANGERICON_GET_BIRTHDAYICON_OFFSET UNITYSDK_OFFSET(0x21BBE80)
#define UIACADEMYMESSANGERICON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21BBF30)
#define UIACADEMYMESSANGERICON_REFRESH_OFFSET UNITYSDK_OFFSET(0x21BB560)
#define UIACADEMYMESSANGERICON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21BC350)
#define UIACADEMYMESSANGERICON_AWAKE_OFFSET UNITYSDK_OFFSET(0x21BC4D0)
#define UIACADEMYMESSANGERICON__ONENABLE_G__YIELDREFRESH|14_0_OFFSET UNITYSDK_OFFSET(0x21BC1D0)
#define UIACADEMYMESSANGERICON_GET_BIRTHDAYANI_OFFSET UNITYSDK_OFFSET(0x21BBDC0)
#define UIACADEMYMESSANGERICON_GET_NOTI_OFFSET UNITYSDK_OFFSET(0x21BC250)

	inline static constexpr unsigned int UIAcademyMessangerIcon_TypeDefinitionIndex = 4219;

	class UIAcademyMessangerIcon : public Il2CppObject
	{
	public:
		UILabel* notiCount; // 0x18
		::UnityEngine::GameObject* noti; // 0x20
		MXButton* button; // 0x28
		::UnityEngine::Animation* _BirthDayAni; // 0x30
		::UnityEngine::GameObject* _BirthDayIcon; // 0x38

		::System::Void OnButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_ONBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Boolean HandleMomotalkReadSyncMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_HANDLEMOMOTALKREADSYNCMESSAGE_OFFSET))(arg, nullptr);
		}

		UILabel* get_NotiCount()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_GET_NOTICOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleBirthDayAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_HANDLEBIRTHDAYANIMATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_BirthDayIcon()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_GET_BIRTHDAYICON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnEnable_g__YieldRefresh|14_0(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON__ONENABLE_G__YIELDREFRESH|14_0_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animation* get_BirthDayAni()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_GET_BIRTHDAYANI_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_Noti()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERICON_GET_NOTI_OFFSET))(nullptr);
		}

	};

