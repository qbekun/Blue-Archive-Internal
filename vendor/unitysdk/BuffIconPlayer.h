#pragma once
#include "unitysdk.h"

class ICharacterVisual;
namespace MX::Logic::Battles { class Battle; }
class BuffIconsBase;

#define BUFFICONPLAYER_INTERRUPTANDCLEARPARTICLEINTRRUPTWITHPARENTLIST_OFFSET UNITYSDK_OFFSET(0x10AB3A0)
#define BUFFICONPLAYER_REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0x10AB6D0)
#define BUFFICONPLAYER_ADDEFFECT_OFFSET UNITYSDK_OFFSET(0x10AB780)
#define BUFFICONPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10ABA70)
#define BUFFICONPLAYER_GET_SYNCEDUIS_OFFSET UNITYSDK_OFFSET(0x10ACB00)
#define BUFFICONPLAYER_REMOVESYNCEDUI_OFFSET UNITYSDK_OFFSET(0x10ACB10)
#define BUFFICONPLAYER_ADDSYNCEDUI_OFFSET UNITYSDK_OFFSET(0x10ACB60)
#define BUFFICONPLAYER_UPDATEDOTABILITIES_OFFSET UNITYSDK_OFFSET(0x10AC390)
#define BUFFICONPLAYER_UPDATESTATCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x10ABBA0)
#define BUFFICONPLAYER_GET_PREVDOTS_OFFSET UNITYSDK_OFFSET(0x10ACF90)
#define BUFFICONPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10ACFA0)
#define BUFFICONPLAYER_GET_PREVEFFECTS_OFFSET UNITYSDK_OFFSET(0x10AD230)

	inline static constexpr unsigned int BuffIconPlayer_TypeDefinitionIndex = 893;

	class BuffIconPlayer : public Il2CppObject
	{
	public:
		ICharacterVisual* parent; // 0x10
		Il2CppObject* prevEffects; // 0x18
		Il2CppObject* prevDots; // 0x20
		Il2CppObject* particles; // 0x28
		Il2CppObject* syncedUIs; // 0x30
		::MX::Logic::Battles::Battle* battle; // 0x38
		::System::Boolean isUpdateSkip; // 0x40
		::System::Int32 lastLogicFrame; // 0x44
		::System::Int64 total; // 0x0

		::System::Void InterruptAndClearParticleIntrruptWithParentList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_INTERRUPTANDCLEARPARTICLEINTRRUPTWITHPARENTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveEffect(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_REMOVEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void AddEffect(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_ADDEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_UPDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SyncedUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_GET_SYNCEDUIS_OFFSET))(nullptr);
		}

		::System::Void RemoveSyncedUI(BuffIconsBase* arg)
		{
			((::System::Void(*)(BuffIconsBase*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_REMOVESYNCEDUI_OFFSET))(arg, nullptr);
		}

		::System::Void AddSyncedUI(BuffIconsBase* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(BuffIconsBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_ADDSYNCEDUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateDotAbilities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_UPDATEDOTABILITIES_OFFSET))(nullptr);
		}

		::System::Void UpdateStatChangeEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_UPDATESTATCHANGEEFFECT_OFFSET))(nullptr);
		}

		Il2CppObject* get_PrevDots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_GET_PREVDOTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(ICharacterVisual* arg)
		{
			((::System::Void(*)(ICharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PrevEffects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONPLAYER_GET_PREVEFFECTS_OFFSET))(nullptr);
		}

	};

