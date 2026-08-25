#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class DialogCategory; }
class EventContentMissionObject;

#define UIMINIGAMERHYTHMMISSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD214C0)
#define UIMINIGAMERHYTHMMISSION_SETSPINECHATCONTAINEREVENT_OFFSET UNITYSDK_OFFSET(0xD21650)
#define UIMINIGAMERHYTHMMISSION___N__0_OFFSET UNITYSDK_OFFSET(0xD21690)
#define UIMINIGAMERHYTHMMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0xD216A0)
#define UIMINIGAMERHYTHMMISSION_HANDLEMINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD21750)
#define UIMINIGAMERHYTHMMISSION_GET_ISMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0xD217E0)
#define UIMINIGAMERHYTHMMISSION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xD217F0)
#define UIMINIGAMERHYTHMMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0xD21880)
#define UIMINIGAMERHYTHMMISSION_GET_EVENTMISSIONOBJECT_OFFSET UNITYSDK_OFFSET(0xD21890)
#define UIMINIGAMERHYTHMMISSION_HANDLEMINIGAMEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD21910)
#define UIMINIGAMERHYTHMMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD21AA0)
#define UIMINIGAMERHYTHMMISSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD21AB0)

	inline static constexpr unsigned int UIMinigameRhythmMission_TypeDefinitionIndex = 705;

	class UIMinigameRhythmMission : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* bgPrefab; // 0x148

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetSpineChatContainerEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_SETSPINECHATCONTAINEREVENT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION___N__0_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSpineDialogOffsetExcel(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMiniGameMissionMultipleRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_HANDLEMINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMiniGameMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_GET_ISMINIGAMEMISSION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_CO_LOADING_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_SpineChatDialogCategory()
		{
			return ((::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET))(nullptr);
		}

		EventContentMissionObject* get_EventMissionObject()
		{
			return ((EventContentMissionObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_GET_EVENTMISSIONOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean HandleMiniGameMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_HANDLEMINIGAMEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMMISSION_ONDISABLE_OFFSET))(nullptr);
		}

	};

