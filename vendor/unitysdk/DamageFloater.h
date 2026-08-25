#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
class UISprite;
class INGUIAtlas;
class CharacterVisual;
namespace FlatData { class FontType; }
class GroundObstacleVisual;
namespace UnityEngine { class Transform; }
namespace FlatData { class TacticEntityType; }

#define DAMAGEFLOATER_GET_BLOCKICONATLAS_OFFSET UNITYSDK_OFFSET(0x23B8580)
#define DAMAGEFLOATER_AWAKE_OFFSET UNITYSDK_OFFSET(0x23B85B0)
#define DAMAGEFLOATER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23B94D0)
#define DAMAGEFLOATER_PLAYBLOCKFLOATER_OFFSET UNITYSDK_OFFSET(0x23B9560)
#define DAMAGEFLOATER_PLAYDAMAGEFLOATER_OFFSET UNITYSDK_OFFSET(0x23B9CA0)
#define DAMAGEFLOATER_PLAYDAMAGEFLOATER_OFFSET UNITYSDK_OFFSET(0x23BA190)
#define DAMAGEFLOATER_SHOWFLOATEROBJECT_OFFSET UNITYSDK_OFFSET(0x23BA3A0)
#define DAMAGEFLOATER_CLEARFORREUSE_OFFSET UNITYSDK_OFFSET(0x23BA440)
#define DAMAGEFLOATER_SETBARRIERBLOCKATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x23B9AC0)
#define DAMAGEFLOATER_SETDAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x23B9F20)
#define DAMAGEFLOATER_SETCHARACTERTEXT_OFFSET UNITYSDK_OFFSET(0x23B9FE0)
#define DAMAGEFLOATER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x23B97D0)
#define DAMAGEFLOATER_FILLANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x23B9B60)
#define DAMAGEFLOATER_COPLAY_OFFSET UNITYSDK_OFFSET(0x23B9C30)
#define DAMAGEFLOATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23BA630)
#define DAMAGEFLOATER__AWAKE_G__INITIALIZEFONTTYPEDICTIONARY|28_0_OFFSET UNITYSDK_OFFSET(0x23B8690)

	inline static constexpr unsigned int DamageFloater_TypeDefinitionIndex = 5239;

	class DamageFloater : public Il2CppObject
	{
	public:
		UILabel* normalLabel; // 0x18
		UILabel* resistLabel; // 0x20
		UILabel* weakLabel; // 0x28
		UILabel* effectiveLabel; // 0x30
		UILabel* healLabel; // 0x38
		UILabel* shieldHealLabel; // 0x40
		::UnityEngine::Animator* animator; // 0x48
		::UnityEngine::GameObject* weakIcon; // 0x50
		::UnityEngine::GameObject* resistIcon; // 0x58
		::UnityEngine::GameObject* criticalWeakIcon; // 0x60
		::UnityEngine::GameObject* criticalNormalIcon; // 0x68
		::UnityEngine::GameObject* criticalResistIcon; // 0x70
		::UnityEngine::GameObject* criticalEffectiveIcon; // 0x78
		::UnityEngine::GameObject* missIcon; // 0x80
		UISprite* blockIcon; // 0x88
		::UnityEngine::GameObject* immuneIcon; // 0x90
		::System::String* defaultBlockSpriteName; // 0x98
		::System::String* obstacleWeakBlockSprite; // 0xA0
		::System::String* obstacleNormalBlockSprite; // 0xA8
		::System::String* obstacleResistBlockSprite; // 0xB0
		::System::String* obstacleEffectiveBlockSprite; // 0xB8
		Il2CppObject* endAction; // 0xC0
		Il2CppObject* fontTypeToAttributeObject; // 0xC8
		Il2CppObject* fontTypeToBarrierAttributeObject; // 0xD0
		Il2CppObject* fontTypeToDamageLabel; // 0xD8
		::System::String* aniName; // 0xE0
		Il2CppObject* damageAttributeShowTable; // 0xE8

		INGUIAtlas* get_BlockIconAtlas()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_GET_BLOCKICONATLAS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void PlayBlockFloater(CharacterVisual* arg, ::FlatData::FontType* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(CharacterVisual*, ::FlatData::FontType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_PLAYBLOCKFLOATER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayDamageFloater(CharacterVisual* arg, ::FlatData::FontType* arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(CharacterVisual*, ::FlatData::FontType*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_PLAYDAMAGEFLOATER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void PlayDamageFloater(GroundObstacleVisual* arg, ::FlatData::FontType* arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(GroundObstacleVisual*, ::FlatData::FontType*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_PLAYDAMAGEFLOATER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ShowFloaterObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_SHOWFLOATEROBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ClearForReuse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_CLEARFORREUSE_OFFSET))(nullptr);
		}

		::System::Void SetBarrierBlockAttribute(::FlatData::FontType* arg)
		{
			((::System::Void(*)(::FlatData::FontType*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_SETBARRIERBLOCKATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDamageAttribute(::FlatData::FontType* arg)
		{
			((::System::Void(*)(::FlatData::FontType*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_SETDAMAGEATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacterText(::FlatData::FontType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::FontType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_SETCHARACTERTEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetPosition(::UnityEngine::Transform* arg, ::FlatData::TacticEntityType* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_SETPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FillAnimationName(::FlatData::FontType* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::FontType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_FILLANIMATIONNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_COPLAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_g__InitializeFontTypeDictionary|28_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEFLOATER__AWAKE_G__INITIALIZEFONTTYPEDICTIONARY|28_0_OFFSET))(nullptr);
		}

	};

