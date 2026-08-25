#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }
class UISlider;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class BlackboardKey; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_SETACTION_OFFSET UNITYSDK_OFFSET(0x25F6470)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_UPDATE_OFFSET UNITYSDK_OFFSET(0x25F68A0)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_SETDATA_OFFSET UNITYSDK_OFFSET(0x25F6C80)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_GETHPPERLINE_OFFSET UNITYSDK_OFFSET(0x25F7420)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F74F0)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_GET_DATAPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F7790)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_GET_DECOPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F77A0)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_SETDECO_OFFSET UNITYSDK_OFFSET(0x25F77B0)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_INITEFFECTDATA_OFFSET UNITYSDK_OFFSET(0x25F77C0)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_GET_ACTIONPARAMETERKEYS_OFFSET UNITYSDK_OFFSET(0x25F7800)
#define UIBATTLEADDITIONALEN0022_DAMAGETAKEN_SETBATTLEUIDIRECTION_OFFSET UNITYSDK_OFFSET(0x25F7810)

	inline static constexpr unsigned int UIBattleAdditionalEN0022_DamageTaken_TypeDefinitionIndex = 6441;

	class UIBattleAdditionalEN0022_DamageTaken : public Il2CppObject
	{
	public:
		::System::String* KeyTarget1BlackBoardName; // 0x0
		::System::String* KeyTarget1SpawnCondition; // 0x0
		::System::String* KeyPlayAnimNearEnd; // 0x0
		::System::String* KeyAnimSuccessAndCloseUI; // 0x0
		::System::String* KeyAnimCloseAndCloseUI; // 0x0
		::UnityEngine::AnimationClip* animSuccess; // 0x38
		UISlider* progressSlider; // 0x40
		::UnityEngine::GameObject* lastDamageBackground; // 0x48
		UILabel* hpText; // 0x50
		UILabel* lineCountText; // 0x58
		::UnityEngine::GameObject* enableOnNearEnd; // 0x60
		::UnityEngine::GameObject* enableOnNotFull; // 0x68
		::UnityEngine::GameObject* enableOnFull; // 0x70
		::MX::Logic::Battles::Battle* battle; // 0x78
		::MX::Logic::Battles::BlackboardKey* target1BlackboardKey; // 0x80
		::System::Single hpPerLine; // 0x98
		::Il2CppArray<::System::Object*>* _DataParameterKeys_k__BackingField; // 0xA0
		::Il2CppArray<::System::Object*>* _DecoParameterKeys_k__BackingField; // 0xA8
		::Il2CppArray<::System::Object*>* _ActionParameterKeys_k__BackingField; // 0xB0

		::System::Void SetAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_SETACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHPPerLine(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_GETHPPERLINE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DataParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_GET_DATAPARAMETERKEYS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DecoParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_GET_DECOPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void SetDeco(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_SETDECO_OFFSET))(arg, nullptr);
		}

		::System::Void InitEffectData(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_INITEFFECTDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ActionParameterKeys()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_GET_ACTIONPARAMETERKEYS_OFFSET))(nullptr);
		}

		::System::Void SetBattleUIDirection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADDITIONALEN0022_DAMAGETAKEN_SETBATTLEUIDIRECTION_OFFSET))(arg, nullptr);
		}

	};

