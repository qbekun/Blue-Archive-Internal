#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class EventContentMissionObject;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class DialogCategory; }

#define UIMINIGAMESHOOTINGMISSION_GET_EVENTMISSIONOBJECT_OFFSET UNITYSDK_OFFSET(0x206A640)
#define UIMINIGAMESHOOTINGMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x206A6C0)
#define UIMINIGAMESHOOTINGMISSION___N__0_OFFSET UNITYSDK_OFFSET(0x206A770)
#define UIMINIGAMESHOOTINGMISSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x206A780)
#define UIMINIGAMESHOOTINGMISSION_GET_ISMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0x206A910)
#define UIMINIGAMESHOOTINGMISSION_HANDLEMINIGAMEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x206A920)
#define UIMINIGAMESHOOTINGMISSION_HANDLEMINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x206AAB0)
#define UIMINIGAMESHOOTINGMISSION_SETSPINECHATCONTAINEREVENT_OFFSET UNITYSDK_OFFSET(0x206AB40)
#define UIMINIGAMESHOOTINGMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x206AB80)
#define UIMINIGAMESHOOTINGMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x206AB90)
#define UIMINIGAMESHOOTINGMISSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x206ABA0)
#define UIMINIGAMESHOOTINGMISSION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x206AD90)

	inline static constexpr unsigned int UIMinigameShootingMission_TypeDefinitionIndex = 3430;

	class UIMinigameShootingMission : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* bgPrefab; // 0x148

		EventContentMissionObject* get_EventMissionObject()
		{
			return ((EventContentMissionObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_GET_EVENTMISSIONOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSpineDialogOffsetExcel(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION___N__0_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMiniGameMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_GET_ISMINIGAMEMISSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMiniGameMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_HANDLEMINIGAMEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMiniGameMissionMultipleRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_HANDLEMINIGAMEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpineChatContainerEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_SETSPINECHATCONTAINEREVENT_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_SpineChatDialogCategory()
		{
			return ((::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMESHOOTINGMISSION_CO_LOADING_OFFSET))(nullptr);
		}

	};

