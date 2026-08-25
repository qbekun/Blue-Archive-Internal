#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace FlatData { class DialogCategory; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class EventContentMissionObject;

#define MXFIELD_UI_UIFIELDEVENTMISSION_SETSPINECHATCONTAINEREVENT_OFFSET UNITYSDK_OFFSET(0xEA1540)
#define MXFIELD_UI_UIFIELDEVENTMISSION___N__0_OFFSET UNITYSDK_OFFSET(0xEA1580)
#define MXFIELD_UI_UIFIELDEVENTMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0xEA1590)
#define MXFIELD_UI_UIFIELDEVENTMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA1640)
#define MXFIELD_UI_UIFIELDEVENTMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0xEA1650)
#define MXFIELD_UI_UIFIELDEVENTMISSION_GET_ISMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0xEA1660)
#define MXFIELD_UI_UIFIELDEVENTMISSION_HANDLEMINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xEA1670)
#define MXFIELD_UI_UIFIELDEVENTMISSION_HANDLEMINIGAMEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xEA1700)
#define MXFIELD_UI_UIFIELDEVENTMISSION_GET_EVENTMISSIONOBJECT_OFFSET UNITYSDK_OFFSET(0xEA1890)
#define MXFIELD_UI_UIFIELDEVENTMISSION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xEA1910)
#define MXFIELD_UI_UIFIELDEVENTMISSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEA19A0)
#define MXFIELD_UI_UIFIELDEVENTMISSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEA1B90)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldEventMission_TypeDefinitionIndex = 10740;

	class UIFieldEventMission : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* bgPrefab; // 0x148

		::System::Void SetSpineChatContainerEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_SETSPINECHATCONTAINEREVENT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION___N__0_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSpineDialogOffsetExcel(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_SpineChatDialogCategory()
		{
			return ((::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMiniGameMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_GET_ISMINIGAMEMISSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMiniGameMissionMultipleRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_HANDLEMINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMiniGameMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_HANDLEMINIGAMEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		EventContentMissionObject* get_EventMissionObject()
		{
			return ((EventContentMissionObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_GET_EVENTMISSIONOBJECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDEVENTMISSION_ONENABLE_OFFSET))(nullptr);
		}

	};
}

