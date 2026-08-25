#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIACADEMYOPERATIONINFO_CO_REFRESHEVENTINFO_OFFSET UNITYSDK_OFFSET(0x21DD370)
#define UIACADEMYOPERATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x21DD400)
#define UIACADEMYOPERATIONINFO_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x21DD410)
#define UIACADEMYOPERATIONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x21DD8A0)
#define UIACADEMYOPERATIONINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21DDA10)
#define UIACADEMYOPERATIONINFO_REFRESHEVENTREWARDINFO_OFFSET UNITYSDK_OFFSET(0x21DDC20)
#define UIACADEMYOPERATIONINFO_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21DDEA0)
#define UIACADEMYOPERATIONINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21DDF10)
#define UIACADEMYOPERATIONINFO_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x21DE090)

	inline static constexpr unsigned int UIAcademyOperationInfo_TypeDefinitionIndex = 4221;

	class UIAcademyOperationInfo : public Il2CppObject
	{
	public:
		MXButton* infoButton; // 0x18
		UILabel* dayOfWeekLabel; // 0x20
		::Il2CppArray<::System::Object*>* academyPointLabels; // 0x28
		UILabel* academyPointInfo; // 0x30
		::UnityEngine::GameObject* eventRewardIncreaseRoot; // 0x38
		UILabel* eventRewardIncreaseInfo; // 0x40

		::System::Collections::IEnumerator* Co_RefreshEventInfo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYOPERATIONINFO_CO_REFRESHEVENTINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYOPERATIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYOPERATIONINFO_REFRESHINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYOPERATIONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYOPERATIONINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshEventRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYOPERATIONINFO_REFRESHEVENTREWARDINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventRewardIncreaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYOPERATIONINFO_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYOPERATIONINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYOPERATIONINFO_ONCLICKINFO_OFFSET))(nullptr);
		}

	};

