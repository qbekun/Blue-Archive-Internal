#pragma once
#include "unitysdk.h"

class CharacterVisual;
class UISlider;
class UILabel;
class GridScaler;
class UITexture;
namespace UnityEngine { class Transform; }
class BuffIcons;
namespace UnityEngine { class Texture; }

#define OBJECTHPBAR_GET_CURRENTCHARACTER_OFFSET UNITYSDK_OFFSET(0x25F0330)
#define OBJECTHPBAR_SET_CURRENTCHARACTER_OFFSET UNITYSDK_OFFSET(0x25F0340)
#define OBJECTHPBAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25F0350)
#define OBJECTHPBAR_ADDTOSHOW_OFFSET UNITYSDK_OFFSET(0x25F03E0)
#define OBJECTHPBAR_SHOWHPLABEL_OFFSET UNITYSDK_OFFSET(0x25F0CA0)
#define OBJECTHPBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x25F0480)
#define OBJECTHPBAR_SETSHIELDHPBARSLIDER_OFFSET UNITYSDK_OFFSET(0x25F0D30)
#define OBJECTHPBAR_ATTACHBUFF_OFFSET UNITYSDK_OFFSET(0x25F0E80)
#define OBJECTHPBAR_ATTACHBUFF_OFFSET UNITYSDK_OFFSET(0x25F0F20)
#define OBJECTHPBAR_ATTACHBUFF_OFFSET UNITYSDK_OFFSET(0x25F0FC0)
#define OBJECTHPBAR_DETACHBUFF_OFFSET UNITYSDK_OFFSET(0x25F1060)
#define OBJECTHPBAR_DETACHBUFF_OFFSET UNITYSDK_OFFSET(0x25F1100)
#define OBJECTHPBAR_DETACHBUFF_OFFSET UNITYSDK_OFFSET(0x25F11A0)
#define OBJECTHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F1240)
#define OBJECTHPBAR__UPDATE_B__17_1_OFFSET UNITYSDK_OFFSET(0x25F1250)

	inline static constexpr unsigned int ObjectHPBar_TypeDefinitionIndex = 6422;

	class ObjectHPBar : public Il2CppObject
	{
	public:
		Il2CppObject* characterList; // 0x18
		CharacterVisual* _CurrentCharacter_k__BackingField; // 0x20
		UISlider* hpBarSlider; // 0x28
		UILabel* hpBarValueLabel; // 0x30
		GridScaler* hpBarLineScaler; // 0x38
		UITexture* battleEntityIcon; // 0x40
		UILabel* battleEntityName; // 0x48
		UISlider* shieldBarSlider; // 0x50
		::UnityEngine::Transform* transformShieldBar; // 0x58
		UISlider* temporaryHPSlider; // 0x60
		BuffIcons* BuffIcons; // 0x68

		CharacterVisual* get_CurrentCharacter()
		{
			return ((CharacterVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_GET_CURRENTCHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCharacter(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_SET_CURRENTCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void AddToShow(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_ADDTOSHOW_OFFSET))(arg, nullptr);
		}

		::System::Void ShowHPLabel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_SHOWHPLABEL_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetShieldHpBarSlider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_SETSHIELDHPBARSLIDER_OFFSET))(nullptr);
		}

		::System::Void AttachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_ATTACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void AttachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_ATTACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void AttachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_ATTACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void DetachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_DETACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void DetachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_DETACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void DetachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_DETACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Update_b__17_1(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTHPBAR__UPDATE_B__17_1_OFFSET))(arg, nullptr);
		}

	};

