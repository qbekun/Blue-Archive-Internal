#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AssetReference; }
namespace MX::MinigameCCG::Visual { class CCGCardManager; }
namespace MX::MinigameCCG::Visual { class CCGEffectState; }
namespace FlatData { class CCGCharacterType; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG::Visual { class VFX; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class ParticleSystem; }
namespace MX::MinigameCCG::Procedures { class CCGVFXSpawnPosition; }

#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_CARDMGR_OFFSET UNITYSDK_OFFSET(0x1E8C270)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_HEAL_OFFSET UNITYSDK_OFFSET(0x1E8C2F0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_HEALKEY_OFFSET UNITYSDK_OFFSET(0x1E8C300)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_SELECTEDTATGET_OFFSET UNITYSDK_OFFSET(0x1E8C350)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_SELECTEDTATGETKEY_OFFSET UNITYSDK_OFFSET(0x1E84000)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_SHIFT_OFFSET UNITYSDK_OFFSET(0x1E8C360)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x1E83FB0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETSHIELD_OFFSET UNITYSDK_OFFSET(0x1E8C370)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETSHIELDKEY_OFFSET UNITYSDK_OFFSET(0x1E8C3C0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETSUMMON_OFFSET UNITYSDK_OFFSET(0x1E8C460)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETSUMMONKEY_OFFSET UNITYSDK_OFFSET(0x1E802E0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E8C4C0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTACTIVEKEY_OFFSET UNITYSDK_OFFSET(0x1E8C520)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTBUFF_OFFSET UNITYSDK_OFFSET(0x1E8C5C0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTBUFFKEY_OFFSET UNITYSDK_OFFSET(0x1E8C620)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTDEBUFF_OFFSET UNITYSDK_OFFSET(0x1E8C6C0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTDEBUFFKEY_OFFSET UNITYSDK_OFFSET(0x1E8C720)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTCARDBUFFKEY_OFFSET UNITYSDK_OFFSET(0x1E8C7C0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTCARDDEBUFFKEY_OFFSET UNITYSDK_OFFSET(0x1E8C840)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_PLAYVFX_OFFSET UNITYSDK_OFFSET(0x1E8C8C0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_PLAYVFX_OFFSET UNITYSDK_OFFSET(0x1E7D7C0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_PLAYVFXWITHINTERVALASYNC_OFFSET UNITYSDK_OFFSET(0x1E8CA60)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_RUNANDWAITVFX_OFFSET UNITYSDK_OFFSET(0x1E8CC00)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_WAITEFFECTENDANDRETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x1E8CDE0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_WAITEFFECTENDANDRETURNTOPOOL_OFFSET UNITYSDK_OFFSET(0x1E8CFF0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_ISALLPARTICLESDEAD_OFFSET UNITYSDK_OFFSET(0x1E8B5A0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETEFFECT_OFFSET UNITYSDK_OFFSET(0x1E840C0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETVFXSPAWNPOSITIONFROMENTITY_OFFSET UNITYSDK_OFFSET(0x1E8BEC0)
#define MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D1D0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGEffectManager_TypeDefinitionIndex = 21186;

	class CCGEffectManager : public CefCursorType
	{
	public:
		::UnityEngine::AddressableAssets::AssetReference* heal; // 0x20
		::UnityEngine::AddressableAssets::AssetReference* selectedTatget; // 0x28
		::UnityEngine::AddressableAssets::AssetReference* shift; // 0x30
		Il2CppObject* shield; // 0x38
		Il2CppObject* summon; // 0x40
		Il2CppObject* logicEffectActive; // 0x48
		Il2CppObject* logicEffectBuff; // 0x50
		Il2CppObject* logicEffectDebuff; // 0x58
		::System::Int32 STRIKER; // 0x60
		::System::Int32 SPECIAL; // 0x64

		::MX::MinigameCCG::Visual::CCGCardManager* get_cardMgr()
		{
			return (return (::MX::MinigameCCG::Visual::CCGCardManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_CARDMGR_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* get_Heal()
		{
			return (return (::UnityEngine::AddressableAssets::AssetReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_HEAL_OFFSET))(nullptr);
		}

		::System::String* get_HealKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_HEALKEY_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* get_SelectedTatget()
		{
			return (return (::UnityEngine::AddressableAssets::AssetReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_SELECTEDTATGET_OFFSET))(nullptr);
		}

		::System::String* get_SelectedTatgetKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_SELECTEDTATGETKEY_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* get_Shift()
		{
			return (return (::UnityEngine::AddressableAssets::AssetReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_SHIFT_OFFSET))(nullptr);
		}

		::System::String* get_ShiftKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GET_SHIFTKEY_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* GetShield(::MX::MinigameCCG::Visual::CCGEffectState* arg)
		{
			return (return (::UnityEngine::AddressableAssets::AssetReference*(*)(::MX::MinigameCCG::Visual::CCGEffectState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETSHIELD_OFFSET))(arg, nullptr);
		}

		::System::String* GetShieldKey(::MX::MinigameCCG::Visual::CCGEffectState* arg)
		{
			return (return (::System::String*(*)(::MX::MinigameCCG::Visual::CCGEffectState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETSHIELDKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* GetSummon(::FlatData::CCGCharacterType* arg)
		{
			return (return (::UnityEngine::AddressableAssets::AssetReference*(*)(::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETSUMMON_OFFSET))(arg, nullptr);
		}

		::System::String* GetSummonKey(::FlatData::CCGCharacterType* arg)
		{
			return (return (::System::String*(*)(::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETSUMMONKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* GetLogicEffectActive(::FlatData::CCGCharacterType* arg)
		{
			return (return (::UnityEngine::AddressableAssets::AssetReference*(*)(::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::String* GetLogicEffectActiveKey(::FlatData::CCGCharacterType* arg)
		{
			return (return (::System::String*(*)(::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTACTIVEKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* GetLogicEffectBuff(::FlatData::CCGCharacterType* arg)
		{
			return (return (::UnityEngine::AddressableAssets::AssetReference*(*)(::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTBUFF_OFFSET))(arg, nullptr);
		}

		::System::String* GetLogicEffectBuffKey(::FlatData::CCGCharacterType* arg)
		{
			return (return (::System::String*(*)(::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTBUFFKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* GetLogicEffectDebuff(::FlatData::CCGCharacterType* arg)
		{
			return (return (::UnityEngine::AddressableAssets::AssetReference*(*)(::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTDEBUFF_OFFSET))(arg, nullptr);
		}

		::System::String* GetLogicEffectDebuffKey(::FlatData::CCGCharacterType* arg)
		{
			return (return (::System::String*(*)(::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTDEBUFFKEY_OFFSET))(arg, nullptr);
		}

		::System::String* GetLogicEffectCardBuffKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTCARDBUFFKEY_OFFSET))(nullptr);
		}

		::System::String* GetLogicEffectCardDebuffKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETLOGICEFFECTCARDDEBUFFKEY_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayVFX(Il2CppObject* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_PLAYVFX_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayVFX(::MX::MinigameCCG::Visual::VFX* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::Visual::VFX*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_PLAYVFX_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayVFXWithIntervalAsync(::MX::MinigameCCG::Visual::VFX* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::Visual::VFX*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_PLAYVFXWITHINTERVALASYNC_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* RunAndWaitVFX(::System::String* str, ::UnityEngine::Transform* arg, ::System::Boolean arg, ::System::Action* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_RUNANDWAITVFX_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitEffectEndAndReturnToPool(::System::String* str, ::UnityEngine::ParticleSystem* arg, ::System::Single arg, ::System::Action* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::String*, ::UnityEngine::ParticleSystem*, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_WAITEFFECTENDANDRETURNTOPOOL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* WaitEffectEndAndReturnToPool(::System::String* str, ::UnityEngine::ParticleSystem* arg, ::System::Action* arg, ::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::String*, ::UnityEngine::ParticleSystem*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_WAITEFFECTENDANDRETURNTOPOOL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean IsAllParticlesDead(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_ISALLPARTICLESDEAD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystem* GetEffect(::System::String* str, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::ParticleSystem*(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETEFFECT_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Transform* GetVFXSpawnPositionFromEntity(::MX::MinigameCCG::Procedures::CCGVFXSpawnPosition* arg, CCGVisualEntity* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Transform*(*)(::MX::MinigameCCG::Procedures::CCGVFXSpawnPosition*, CCGVisualEntity*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_GETVFXSPAWNPOSITIONFROMENTITY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGEFFECTMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

