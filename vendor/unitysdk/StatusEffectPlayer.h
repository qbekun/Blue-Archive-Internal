#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace MX::Logic::BattleEntities { class HeroStatus; }
class BuffIconsBase;

#define STATUSEFFECTPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C08C0)
#define STATUSEFFECTPLAYER_GET_PREVEFFECTS_OFFSET UNITYSDK_OFFSET(0x13CA000)
#define STATUSEFFECTPLAYER_ADDEFFECT_OFFSET UNITYSDK_OFFSET(0x13CA010)
#define STATUSEFFECTPLAYER_ONCHECKREMOVE_OFFSET UNITYSDK_OFFSET(0x13CA2B0)
#define STATUSEFFECTPLAYER_REMOVESYNCEDUI_OFFSET UNITYSDK_OFFSET(0x13CA930)
#define STATUSEFFECTPLAYER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13CA980)
#define STATUSEFFECTPLAYER_INTERRUPTANDCLEARPARTICLEINTRRUPTWITHPARENTLIST_OFFSET UNITYSDK_OFFSET(0x13CA9C0)
#define STATUSEFFECTPLAYER_REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0x13CA880)
#define STATUSEFFECTPLAYER_ADDSYNCEDUI_OFFSET UNITYSDK_OFFSET(0x13CAB80)
#define STATUSEFFECTPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13CAD90)
#define STATUSEFFECTPLAYER_GET_SYNCEDUIS_OFFSET UNITYSDK_OFFSET(0x13CB380)
#define STATUSEFFECTPLAYER_ONCHECKADD_OFFSET UNITYSDK_OFFSET(0x13CB040)

	inline static constexpr unsigned int StatusEffectPlayer_TypeDefinitionIndex = 1055;

	class StatusEffectPlayer : public Il2CppObject
	{
	public:
		CharacterVisual* parent; // 0x10
		Il2CppObject* particles; // 0x18
		Il2CppObject* prevEffects; // 0x20
		Il2CppObject* syncedUIs; // 0x28
		::System::Int32 updateInterval; // 0x0
		::System::Int32 updateCount; // 0x30

		::System::Void .ctor(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PrevEffects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_GET_PREVEFFECTS_OFFSET))(nullptr);
		}

		::System::Void AddEffect(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_ADDEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnCheckRemove(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_ONCHECKREMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveSyncedUI(BuffIconsBase* arg)
		{
			((::System::Void(*)(BuffIconsBase*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_REMOVESYNCEDUI_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void InterruptAndClearParticleIntrruptWithParentList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_INTERRUPTANDCLEARPARTICLEINTRRUPTWITHPARENTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveEffect(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_REMOVEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void AddSyncedUI(BuffIconsBase* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(BuffIconsBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_ADDSYNCEDUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_UPDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SyncedUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_GET_SYNCEDUIS_OFFSET))(nullptr);
		}

		::System::Void OnCheckAdd(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSEFFECTPLAYER_ONCHECKADD_OFFSET))(arg, nullptr);
		}

	};

