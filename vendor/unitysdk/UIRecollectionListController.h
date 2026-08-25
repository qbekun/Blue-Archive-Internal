#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIRECOLLECTIONLISTCONTROLLER_MOVETOLASTELEMENT_OFFSET UNITYSDK_OFFSET(0x27ABBF0)
#define UIRECOLLECTIONLISTCONTROLLER_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x27ABC70)
#define UIRECOLLECTIONLISTCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27ABC80)
#define UIRECOLLECTIONLISTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27AC540)
#define UIRECOLLECTIONLISTCONTROLLER_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27AC580)
#define UIRECOLLECTIONLISTCONTROLLER_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x27AC590)
#define UIRECOLLECTIONLISTCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27AC5A0)
#define UIRECOLLECTIONLISTCONTROLLER_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x27ABDB0)

	inline static constexpr unsigned int UIRecollectionListController_TypeDefinitionIndex = 7503;

	class UIRecollectionListController : public ::System::Xml::DocumentXPathNodeIterator_ElemChildren
	{
	public:
		::UnityEngine::GameObject* isEmpty; // 0x90
		::System::Int64 _EventContentId_k__BackingField; // 0x98

		::System::Void MoveToLastElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTCONTROLLER_MOVETOLASTELEMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTCONTROLLER_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentScenarioGroupHistoryUpdateResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTCONTROLLER_HANDLEEVENTCONTENTSCENARIOGROUPHISTORYUPDATERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTCONTROLLER_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTCONTROLLER_REFRESHLIST_OFFSET))(nullptr);
		}

	};

