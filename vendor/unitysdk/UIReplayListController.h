#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIREPLAYLISTCONTROLLER_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD10F00)
#define UIREPLAYLISTCONTROLLER_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD10F10)
#define UIREPLAYLISTCONTROLLER_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0xD10F20)
#define UIREPLAYLISTCONTROLLER_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD115C0)
#define UIREPLAYLISTCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD115D0)
#define UIREPLAYLISTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD11750)
#define UIREPLAYLISTCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD11790)

	inline static constexpr unsigned int UIReplayListController_TypeDefinitionIndex = 628;

	class UIReplayListController : public ::System::Xml::XmlLoader
	{
	public:
		::UnityEngine::GameObject* isEmpty; // 0x90
		::System::Int64 _EventContentId_k__BackingField; // 0x98

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTCONTROLLER_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTCONTROLLER_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTCONTROLLER_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentScenarioGroupHistoryUpdateResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTCONTROLLER_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

	};

