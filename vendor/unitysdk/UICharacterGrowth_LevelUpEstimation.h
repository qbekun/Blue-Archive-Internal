#pragma once
#include "unitysdk.h"

class UICharacterInfo;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class CharacterObject;
namespace MX::Audio { class VoicePlayInfo; }
class AssetObjectBase;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICHARACTERGROWTH_LEVELUPESTIMATION_GET_ESTIMATEDLEVEL_OFFSET UNITYSDK_OFFSET(0x22D8670)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22D8F30)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_GET_VOICEINFO_OFFSET UNITYSDK_OFFSET(0x22D9130)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_SETDATA_OFFSET UNITYSDK_OFFSET(0x22D9140)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_SETCOST_OFFSET UNITYSDK_OFFSET(0x22D9970)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_ONCLICKLEVELUP_OFFSET UNITYSDK_OFFSET(0x22D9C30)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x22DA030)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_GET_CURCHARACTER_OFFSET UNITYSDK_OFFSET(0x22DA100)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_CO_LEVELUPDIRECTING_OFFSET UNITYSDK_OFFSET(0x22DA110)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_ISACTIVEAUTOSELECTUI_OFFSET UNITYSDK_OFFSET(0x22DA180)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x22DA560)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_GET_ISACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x22DA810)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22DA830)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x22D9540)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_ONCLICKAUTOSELECTEXPENDABLES_OFFSET UNITYSDK_OFFSET(0x22DA9B0)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_SETACTIVEAUTOSELECTBUTTON_OFFSET UNITYSDK_OFFSET(0x22D9890)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_SET_VOICEINFO_OFFSET UNITYSDK_OFFSET(0x22DAD80)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_HANDLECLICKEXPENDABLESMESSAGE_OFFSET UNITYSDK_OFFSET(0x22DADA0)
#define UICHARACTERGROWTH_LEVELUPESTIMATION__SETDATA_B__40_0_OFFSET UNITYSDK_OFFSET(0x22DAE20)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_REFRESH_OFFSET UNITYSDK_OFFSET(0x22D9950)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_CALCULATORSTAT_OFFSET UNITYSDK_OFFSET(0x22DAE40)
#define UICHARACTERGROWTH_LEVELUPESTIMATION_HANDLELEVELUP_OFFSET UNITYSDK_OFFSET(0x22DB1E0)

	inline static constexpr unsigned int UICharacterGrowth_LevelUpEstimation_TypeDefinitionIndex = 4847;

	class UICharacterGrowth_LevelUpEstimation : public Il2CppObject
	{
	public:
		UICharacterInfo* characterInfo; // 0x28
		UICharacterInfo* virtualCharacterInfo; // 0x30
		Il2CppObject* ExpendablesSlotList; // 0x38
		UILabel* NotEnoughLabel; // 0x40
		UILabel* CostText; // 0x48
		MXButton* UpGradeButton; // 0x50
		::UnityEngine::GameObject* UpGradeButtonDisable; // 0x58
		::UnityEngine::GameObject* UpGradeEffect; // 0x60
		MXButton* AutoSelectButton; // 0x68
		::UnityEngine::GameObject* AutoSelectUI; // 0x70
		::UnityEngine::GameObject* DisableAutoSelectUI; // 0x78
		Il2CppObject* EffectSlot; // 0x80
		Il2CppObject* EffectLight; // 0x88
		Il2CppObject* LevelUpEffectObjectList; // 0x90
		Il2CppObject* consumeTable; // 0x98
		Il2CppObject* recipeIdList; // 0xA0
		Il2CppObject* itemDBs; // 0xA8
		::System::Boolean isLevelUp; // 0xB0
		Il2CppObject* expendables; // 0xB8
		::System::Int64 lvUpCurrencyRequired; // 0xC0
		::System::Int64 afterExp; // 0xC8
		::System::Int32 afterLevel; // 0xD0
		::System::Int64 overExp; // 0xD8
		::System::Int64 feedTotalExp; // 0xE0
		CharacterObject* curCharacterObj; // 0xE8
		CharacterObject* virtualCharacterObj; // 0xF0
		::MX::Audio::VoicePlayInfo* _voiceInfo_k__BackingField; // 0xF8

		::System::Int64 get_EstimatedLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_GET_ESTIMATEDLEVEL_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_ONDISABLE_OFFSET))(nullptr);
		}

		::MX::Audio::VoicePlayInfo* get_voiceInfo()
		{
			return ((::MX::Audio::VoicePlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_GET_VOICEINFO_OFFSET))(nullptr);
		}

		::System::Void SetData(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_SETCOST_OFFSET))(nullptr);
		}

		::System::Void OnClickLevelUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_ONCLICKLEVELUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_.CTOR_OFFSET))(nullptr);
		}

		CharacterObject* get_CurCharacter()
		{
			return ((CharacterObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_GET_CURCHARACTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_LevelupDirecting()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_CO_LEVELUPDIRECTING_OFFSET))(nullptr);
		}

		::System::Boolean IsActiveAutoSelectUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_ISACTIVEAUTOSELECTUI_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActiveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_GET_ISACTIVEEFFECT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_SETMATERIAL_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoSelectExpendables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_ONCLICKAUTOSELECTEXPENDABLES_OFFSET))(nullptr);
		}

		::System::Void SetActiveAutoSelectButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_SETACTIVEAUTOSELECTBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_voiceInfo(::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_SET_VOICEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleClickExpendablesMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_HANDLECLICKEXPENDABLESMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__40_0(::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION__SETDATA_B__40_0_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_REFRESH_OFFSET))(nullptr);
		}

		::System::Void CalculatorStat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_CALCULATORSTAT_OFFSET))(nullptr);
		}

		::System::Boolean HandleLevelUp(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGROWTH_LEVELUPESTIMATION_HANDLELEVELUP_OFFSET))(arg, nullptr);
		}

	};

