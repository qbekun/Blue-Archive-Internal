#pragma once
#include "unitysdk.h"

class UICharacterInfo;
namespace UnityEngine { class Transform; }
class UISkillInfo;
namespace UnityEngine { class GameObject; }
class UIGrid;
class UILabel;
class MXButton;
class UIWidget;
namespace UnityEngine { class Vector3; }
class PortraitSpineCharacter;
class CharacterObject;
namespace MX::Audio { class VoicePlayInfo; }
class AssetObjectBase;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETDATA_OFFSET UNITYSDK_OFFSET(0x22DBE20)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION__SETDATA_B__48_0_OFFSET UNITYSDK_OFFSET(0x22DD330)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETDIRECTING_OFFSET UNITYSDK_OFFSET(0x22DD350)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22DD7A0)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_HANDLETRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x22DD8A0)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_GET_ISEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0x22DDA50)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_CLOSEDIRECTING_OFFSET UNITYSDK_OFFSET(0x22DDA80)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETACTIVETRANSCENDENCEBUTTON_OFFSET UNITYSDK_OFFSET(0x22DCEC0)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETFAVORRANKINFO_OFFSET UNITYSDK_OFFSET(0x22DCFF0)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_ONCLICKTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x22DDB70)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22DDCC0)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_CO_PLAYDIRECTING_OFFSET UNITYSDK_OFFSET(0x22DD9E0)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_CO_CLOSEDIRECTING_OFFSET UNITYSDK_OFFSET(0x22DDB00)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x22DDE00)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_GET_VOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x22DDF70)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_RECIPELOAD_OFFSET UNITYSDK_OFFSET(0x22DC240)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_GET_ISPLAYDIRECTING_OFFSET UNITYSDK_OFFSET(0x22DDF80)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x22DDF90)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SET_VOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x22DE080)
#define UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETGROWTHINFO_OFFSET UNITYSDK_OFFSET(0x22DC000)

	inline static constexpr unsigned int UICharacterGrowth_TranscendenceEstimation_TypeDefinitionIndex = 4852;

	class UICharacterGrowth_TranscendenceEstimation : public Il2CppObject
	{
	public:
		UICharacterInfo* characterInfo; // 0x28
		UICharacterInfo* virtualCharacterInfo; // 0x30
		::UnityEngine::Transform* SpinePos; // 0x38
		UISkillInfo* SkillInfo; // 0x40
		UICharacterInfo* CharacterInfo; // 0x48
		Il2CppObject* StarList; // 0x50
		Il2CppObject* StarEffectNormalList; // 0x58
		Il2CppObject* StarAccentEffectList; // 0x60
		::UnityEngine::GameObject* MaxGradeOn; // 0x68
		::UnityEngine::GameObject* MaxGradeOff; // 0x70
		::UnityEngine::GameObject* SkillWindow; // 0x78
		::UnityEngine::GameObject* SkillWindowEmpty; // 0x80
		UIGrid* StarGrid; // 0x88
		UILabel* NotEnoughLabel; // 0x90
		UILabel* CostText; // 0x98
		MXButton* UpGradeButton; // 0xA0
		::UnityEngine::GameObject* UpGradeButtonDisable; // 0xA8
		::UnityEngine::GameObject* UpGradeEffect; // 0xB0
		::UnityEngine::GameObject* HasOpenSkillName; // 0xB8
		::UnityEngine::GameObject* EmptyOpenSkillName; // 0xC0
		UILabel* OpenSkillName; // 0xC8
		UIWidget* LobbyTargetRenderQueue; // 0xD0
		UIWidget* EffectTargetRenderQueue; // 0xD8
		::UnityEngine::Transform* TranscendenceDisplay; // 0xE0
		UILabel* CurrentFavorStatValue; // 0xE8
		UILabel* VirtualFavorStatValue; // 0xF0
		::UnityEngine::GameObject* FavorStat; // 0xF8
		::UnityEngine::GameObject* EmptyMark; // 0x100
		::UnityEngine::Vector3* LobbySpineCharacterPos; // 0x108
		PortraitSpineCharacter* effectSpineCharacter; // 0x118
		::UnityEngine::GameObject* effectSpineHolder; // 0x120
		Il2CppObject* MaterialList; // 0x128
		::System::Int64 recipeId; // 0x130
		::System::Boolean isEmptyOpenSkill; // 0x138
		::System::Boolean isPlayDirecting; // 0x139
		CharacterObject* curCharacterObj; // 0x140
		CharacterObject* virtualCharacterObj; // 0x148
		::MX::Audio::VoicePlayInfo* _voicePlayInfo_k__BackingField; // 0x150

		::System::Void SetData(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__48_0(::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION__SETDATA_B__48_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirecting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETDIRECTING_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleTranscendence(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_HANDLETRANSCENDENCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEffectActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_GET_ISEFFECTACTIVE_OFFSET))(nullptr);
		}

		::System::Void CloseDirecting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_CLOSEDIRECTING_OFFSET))(nullptr);
		}

		::System::Void SetActiveTranscendenceButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETACTIVETRANSCENDENCEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetFavorRankInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETFAVORRANKINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickTranscendence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_ONCLICKTRANSCENDENCE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_PlayDirecting()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_CO_PLAYDIRECTING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_CloseDirecting()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_CO_CLOSEDIRECTING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_AWAKE_OFFSET))(nullptr);
		}

		::MX::Audio::VoicePlayInfo* get_voicePlayInfo()
		{
			return ((::MX::Audio::VoicePlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_GET_VOICEPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void RecipeLoad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_RECIPELOAD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayDirecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_GET_ISPLAYDIRECTING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_voicePlayInfo(::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SET_VOICEPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetGrowthInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_TRANSCENDENCEESTIMATION_SETGROWTHINFO_OFFSET))(nullptr);
		}

	};

