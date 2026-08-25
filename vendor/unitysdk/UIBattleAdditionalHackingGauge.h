#pragma once
#include "unitysdk.h"

class UISlider;
class UILabel;
class UITexture;
class LabelTyping;
class EnableGroup;
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace UnityEngine { class Texture; }

#define UIBATTLEADDITIONALHACKINGGAUGE_GET_DECOPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F9050)
#define UIBATTLEADDITIONALHACKINGGAUGE_INITEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x25F9060)
#define UIBATTLEADDITIONALHACKINGGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F9090)
#define UIBATTLEADDITIONALHACKINGGAUGE_GET_DATAPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F9320)
#define UIBATTLEADDITIONALHACKINGGAUGE__SETDECO_B__25_2_OFFSET UNITYSDK_OFFSET(0x25F9330)
#define UIBATTLEADDITIONALHACKINGGAUGE_SETDECO_OFFSET UNITYSDK_OFFSET(0x25F9360)
#define UIBATTLEADDITIONALHACKINGGAUGE_SETBATTLEUIDIRECTION_OFFSET UNITYSDK_OFFSET(0x25F9BB0)
#define UIBATTLEADDITIONALHACKINGGAUGE_SETACTION_OFFSET UNITYSDK_OFFSET(0x25F9BC0)
#define UIBATTLEADDITIONALHACKINGGAUGE__SETDECO_B__25_1_OFFSET UNITYSDK_OFFSET(0x25F9EC0)
#define UIBATTLEADDITIONALHACKINGGAUGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x25F9EF0)
#define UIBATTLEADDITIONALHACKINGGAUGE_SETDATA_OFFSET UNITYSDK_OFFSET(0x25FA0C0)
#define UIBATTLEADDITIONALHACKINGGAUGE_GET_ACTIONPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25FA580)

	inline static constexpr unsigned int UIBattleAdditionalHackingGauge_TypeDefinitionIndex = 6448;

	class UIBattleAdditionalHackingGauge : public Il2CppObject
	{
	public:
		::System::String* keyReverseHpRateTarget1SpawnConditionID; // 0x0
		::System::String* keyPortrait1Path; // 0x0
		::System::String* keyPortrait2Path; // 0x0
		::System::String* keyText1Localize; // 0x0
		::System::String* keyCloseUI; // 0x0
		::Il2CppArray<::System::Object*>* _DataParameterKeys_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _DecoParameterKeys_k__BackingField; // 0x40
		::Il2CppArray<::System::Object*>* _ActionParameterKeys_k__BackingField; // 0x48
		UISlider* progressSlider; // 0x50
		UILabel* progressPercentText; // 0x58
		UITexture* portrait1; // 0x60
		UITexture* portrait2; // 0x68
		UILabel* name1; // 0x70
		LabelTyping* description1; // 0x78
		EnableGroup* enableOn100Percent; // 0x80
		::MX::Logic::BattleEntities::BattleEntity* reverseHpRateTarget1; // 0x88

		::Il2CppArray<::System::Object*>* get_DecoParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_GET_DECOPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void InitEffectData(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_INITEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DataParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_GET_DATAPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void _SetDeco_b__25_2(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE__SETDECO_B__25_2_OFFSET))(arg, nullptr);
		}

		::System::Void SetDeco(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_SETDECO_OFFSET))(arg, nullptr);
		}

		::System::Void SetBattleUIDirection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_SETBATTLEUIDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_SETACTION_OFFSET))(arg, nullptr);
		}

		::System::Void _SetDeco_b__25_1(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE__SETDECO_B__25_1_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_SETDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ActionParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALHACKINGGAUGE_GET_ACTIONPARAMETERKEYS_OFFSET))(nullptr);
		}

	};

