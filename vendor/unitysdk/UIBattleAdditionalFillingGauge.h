#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }
class UISlider;
class UILabel;
class UITexture;
class EnableGroup;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class ReadTargetFromCharacter;
namespace MX::Logic::Battles { class BlackboardKey; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace UnityEngine { class Texture; }

#define UIBATTLEADDITIONALFILLINGGAUGE_GET_DECOPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F7880)
#define UIBATTLEADDITIONALFILLINGGAUGE_SETDATA_OFFSET UNITYSDK_OFFSET(0x25F7890)
#define UIBATTLEADDITIONALFILLINGGAUGE_SETBATTLEUIDIRECTION_OFFSET UNITYSDK_OFFSET(0x25F8000)
#define UIBATTLEADDITIONALFILLINGGAUGE_INITEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x25F8010)
#define UIBATTLEADDITIONALFILLINGGAUGE_GET_DATAPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F8050)
#define UIBATTLEADDITIONALFILLINGGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F8060)
#define UIBATTLEADDITIONALFILLINGGAUGE__UPDATE_G__GETTARGET1GAUGE|32_0_OFFSET UNITYSDK_OFFSET(0x25F8370)
#define UIBATTLEADDITIONALFILLINGGAUGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x25F8570)
#define UIBATTLEADDITIONALFILLINGGAUGE_GET_ACTIONPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F86C0)
#define UIBATTLEADDITIONALFILLINGGAUGE__SETDECO_B__29_0_OFFSET UNITYSDK_OFFSET(0x25F86D0)
#define UIBATTLEADDITIONALFILLINGGAUGE_SETACTION_OFFSET UNITYSDK_OFFSET(0x25F8700)
#define UIBATTLEADDITIONALFILLINGGAUGE_SETDECO_OFFSET UNITYSDK_OFFSET(0x25F8AA0)

	inline static constexpr unsigned int UIBattleAdditionalFillingGauge_TypeDefinitionIndex = 6444;

	class UIBattleAdditionalFillingGauge : public Il2CppObject
	{
	public:
		::System::String* keyTarget1SpawnCondition; // 0x0
		::System::String* keyTarget1DisplayData; // 0x0
		::System::String* keyTarget1BlackBoardName; // 0x0
		::System::String* keyPortrait1Path; // 0x0
		::System::String* keyText1Localize; // 0x0
		::System::String* keyAnimCloseAndCloseUI; // 0x0
		::UnityEngine::AnimationClip* animSuccess; // 0x38
		UISlider* progressSlider; // 0x40
		UILabel* progressPercentText; // 0x48
		UITexture* portrait1; // 0x50
		UILabel* name1; // 0x58
		UILabel* description1; // 0x60
		EnableGroup* enableOn100Percent; // 0x68
		::MX::Logic::Battles::Battle* battle; // 0x70
		::MX::Logic::BattleEntities::BattleEntity* target1; // 0x78
		ReadTargetFromCharacter* readTargetFromCharacter; // 0x80
		::MX::Logic::Battles::BlackboardKey* target1BlackboardKey; // 0x88
		::Il2CppArray<::System::Object*>* _DataParameterKeys_k__BackingField; // 0xA0
		::Il2CppArray<::System::Object*>* _DecoParameterKeys_k__BackingField; // 0xA8
		::Il2CppArray<::System::Object*>* _ActionParameterKeys_k__BackingField; // 0xB0

		::Il2CppArray<::System::Object*>* get_DecoParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_GET_DECOPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetBattleUIDirection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_SETBATTLEUIDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void InitEffectData(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_INITEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DataParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_GET_DATAPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Single _Update_g__GetTarget1Gauge|32_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE__UPDATE_G__GETTARGET1GAUGE|32_0_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_UPDATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ActionParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_GET_ACTIONPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void _SetDeco_b__29_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE__SETDECO_B__29_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_SETACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetDeco(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALFILLINGGAUGE_SETDECO_OFFSET))(arg, nullptr);
		}

	};

