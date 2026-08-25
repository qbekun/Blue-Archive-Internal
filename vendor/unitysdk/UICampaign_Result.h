#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Transform; }
class PortraitSpineCharacter;
class MXButton;
class UITexture;
class AccountLevelExpIndicator;
namespace MX::Data { class CampaignStageInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICAMPAIGN_RESULT_SETRESULTDISPLAYS_OFFSET UNITYSDK_OFFSET(0x22B1E30)
#define UICAMPAIGN_RESULT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22B1FE0)
#define UICAMPAIGN_RESULT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22B2140)
#define UICAMPAIGN_RESULT_ONCLICKREPLAY_OFFSET UNITYSDK_OFFSET(0x22B2A30)
#define UICAMPAIGN_RESULT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22B2AA0)
#define UICAMPAIGN_RESULT__SETSPINE_B__25_0_OFFSET UNITYSDK_OFFSET(0x22B2BD0)
#define UICAMPAIGN_RESULT_ALLSTOPVOICEPLAYONSCENE_OFFSET UNITYSDK_OFFSET(0x22B2C10)
#define UICAMPAIGN_RESULT_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x22B3130)
#define UICAMPAIGN_RESULT_SETSPINE_OFFSET UNITYSDK_OFFSET(0x22B26C0)
#define UICAMPAIGN_RESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22B3180)
#define UICAMPAIGN_RESULT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x22B3190)
#define UICAMPAIGN_RESULT_ONCLICKEXIT_OFFSET UNITYSDK_OFFSET(0x22B31C0)
#define UICAMPAIGN_RESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0x22B3430)
#define UICAMPAIGN_RESULT_ONRESPONSECAMPAIGNCONFIRMMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x22B3700)

	inline static constexpr unsigned int UICampaign_Result_TypeDefinitionIndex = 4773;

	class UICampaign_Result : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* victoryBgGameObject; // 0xD8
		::UnityEngine::GameObject* defeatBgGameObject; // 0xE0
		::UnityEngine::GameObject* victoryTitleGameObject; // 0xE8
		::UnityEngine::GameObject* defeatTitleGameObject; // 0xF0
		UILabel* stageName; // 0xF8
		::UnityEngine::GameObject* recordObject; // 0x100
		UILabel* turnLabel; // 0x108
		UILabel* killedUnits; // 0x110
		UILabel* defeatedEchelons; // 0x118
		::UnityEngine::Transform* lastEchelonLeaderSpinePos; // 0x120
		UILabel* lastEchelonLeaderName; // 0x128
		PortraitSpineCharacter* portraitSpineCharacter; // 0x130
		MXButton* replayButton; // 0x138
		MXButton* exitButton; // 0x140
		::UnityEngine::GameObject* squadLeader; // 0x148
		UITexture* blur; // 0x150
		AccountLevelExpIndicator* playerInfo; // 0x158
		::MX::Data::CampaignStageInfo* stageInfo; // 0x160
		::System::Int64 spineCharacterId; // 0x168

		::System::Void SetResultDisplays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_SETRESULTDISPLAYS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::CampaignStageInfo* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnClickReplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_ONCLICKREPLAY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void _SetSpine_b__25_0(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT__SETSPINE_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Void AllStopVoicePlayOnScene()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_ALLSTOPVOICEPLAYONSCENE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetSpine(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_SETSPINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_ONCLICKEXIT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean OnResponseCampaignConfirmMainStage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_RESULT_ONRESPONSECAMPAIGNCONFIRMMAINSTAGE_OFFSET))(arg, nullptr);
		}

	};

