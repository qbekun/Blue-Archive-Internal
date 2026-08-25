#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class EventContentType; }
class EventContentMissionObject;
namespace FlatData { class DialogCategory; }

#define UIMINIGAMEMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2696E00)
#define UIMINIGAMEMISSION_SETSPINECHATCONTAINEREVENT_OFFSET UNITYSDK_OFFSET(0x2696E10)
#define UIMINIGAMEMISSION_GET_ISMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0x2696E50)
#define UIMINIGAMEMISSION_HANDLEMINIGAMEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2696E60)
#define UIMINIGAMEMISSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2696FF0)
#define UIMINIGAMEMISSION_HANDLEMINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2697180)
#define UIMINIGAMEMISSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2697210)
#define UIMINIGAMEMISSION___N__0_OFFSET UNITYSDK_OFFSET(0x2697400)
#define UIMINIGAMEMISSION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2697410)
#define UIMINIGAMEMISSION_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x26974A0)
#define UIMINIGAMEMISSION_GET_EVENTMISSIONOBJECT_OFFSET UNITYSDK_OFFSET(0x26974C0)
#define UIMINIGAMEMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x2697540)
#define UIMINIGAMEMISSION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26975F0)
#define UIMINIGAMEMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x2697840)

	inline static constexpr unsigned int UIMinigameMission_TypeDefinitionIndex = 6813;

	class UIMinigameMission : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x148
		::UnityEngine::GameObject* bgPrefab; // 0x150

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSpineChatContainerEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_SETSPINECHATCONTAINEREVENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMiniGameMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_GET_ISMINIGAMEMISSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMiniGameMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_HANDLEMINIGAMEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleMiniGameMissionMultipleRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_HANDLEMINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_CO_LOADING_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_eventContentType()
		{
			return ((::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		EventContentMissionObject* get_EventMissionObject()
		{
			return ((EventContentMissionObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_GET_EVENTMISSIONOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSpineDialogOffsetExcel(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::FlatData::DialogCategory* get_SpineChatDialogCategory()
		{
			return ((::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMEMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET))(nullptr);
		}

	};

