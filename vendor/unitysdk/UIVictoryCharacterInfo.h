#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class UISlider;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class CharacterObject;
namespace MX::Logic::Battles::Summary { class BattleSummary; }

#define UIVICTORYCHARACTERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBBC170)
#define UIVICTORYCHARACTERINFO_PLAYTWEENS_OFFSET UNITYSDK_OFFSET(0xBBC180)
#define UIVICTORYCHARACTERINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBBC1E0)
#define UIVICTORYCHARACTERINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBBCFE0)
#define UIVICTORYCHARACTERINFO_PLAYTSSINTERACTION_OFFSET UNITYSDK_OFFSET(0xBBD000)
#define UIVICTORYCHARACTERINFO_UPDATECHARTAG_OFFSET UNITYSDK_OFFSET(0xBB4260)
#define UIVICTORYCHARACTERINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBBD1E0)
#define UIVICTORYCHARACTERINFO_PLAYLEVELUPANIAFTEREXPGAUGE_OFFSET UNITYSDK_OFFSET(0xBBD230)
#define UIVICTORYCHARACTERINFO_INITTWEENS_OFFSET UNITYSDK_OFFSET(0xBBD080)
#define UIVICTORYCHARACTERINFO__INITIALIZE_G__FINDCHARACTER|16_0_OFFSET UNITYSDK_OFFSET(0xBBCD20)
#define UIVICTORYCHARACTERINFO_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xBBD2C0)
#define UIVICTORYCHARACTERINFO_COUPDATE_OFFSET UNITYSDK_OFFSET(0xBBD170)

	inline static constexpr unsigned int UIVictoryCharacterInfo_TypeDefinitionIndex = 8606;

	class UIVictoryCharacterInfo : public Il2CppObject
	{
	public:
		::System::Single gaugePlayTime; // 0x18
		UICharacterCard* characterCard; // 0x20
		UILabel* expLabel; // 0x28
		UISlider* expSlider; // 0x30
		::UnityEngine::GameObject* expTweensRoot; // 0x38
		::UnityEngine::GameObject* emptyObject; // 0x40
		::UnityEngine::GameObject* cardObject; // 0x48
		::UnityEngine::Animation* levelUpAnimation; // 0x50
		::System::Int32 oldLevel; // 0x58
		::System::Int32 newLevel; // 0x5C
		::System::Int64 oldExp; // 0x60
		::System::Int64 newExp; // 0x68
		CharacterObject* characterObject; // 0x70
		::Il2CppArray<::System::Object*>* expTweens; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayTweens()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_PLAYTWEENS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::System::Int64 arg2, ::MX::Logic::Battles::Summary::BattleSummary* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::MX::Logic::Battles::Summary::BattleSummary*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void PlayTSSInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_PLAYTSSINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCharTag(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_UPDATECHARTAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayLevelUpAniAfterExpGauge()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_PLAYLEVELUPANIAFTEREXPGAUGE_OFFSET))(nullptr);
		}

		::System::Void InitTweens()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_INITTWEENS_OFFSET))(nullptr);
		}

		CharacterObject* _Initialize_g__FindCharacter|16_0(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Boolean arg4)
		{
			return ((CharacterObject*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO__INITIALIZE_G__FINDCHARACTER|16_0_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYCHARACTERINFO_COUPDATE_OFFSET))(nullptr);
		}

	};

