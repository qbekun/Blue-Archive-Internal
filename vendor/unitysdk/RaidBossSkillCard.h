#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define RAIDBOSSSKILLCARD_OPEN_OFFSET UNITYSDK_OFFSET(0x25F1920)
#define RAIDBOSSSKILLCARD_SET_OFFSET UNITYSDK_OFFSET(0x25F19B0)
#define RAIDBOSSSKILLCARD_SET_PREVSKILLCARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x25F1B00)
#define RAIDBOSSSKILLCARD_INHAND_OFFSET UNITYSDK_OFFSET(0x25F1B10)
#define RAIDBOSSSKILLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F1B80)
#define RAIDBOSSSKILLCARD_GET_PREVSKILLCARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x25F1B90)
#define RAIDBOSSSKILLCARD_USESKILL_OFFSET UNITYSDK_OFFSET(0x25F1BA0)

	inline static constexpr unsigned int RaidBossSkillCard_TypeDefinitionIndex = 6424;

	class RaidBossSkillCard : public Il2CppObject
	{
	public:
		UITexture* Empty; // 0x18
		UITexture* Texture; // 0x20
		::UnityEngine::GameObject* ActiveTween; // 0x28
		::UnityEngine::Animation* Animation; // 0x30
		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* SkillCard; // 0x38
		::System::Int32 _PrevSkillCardUniqueId_k__BackingField; // 0x40

		::System::Single Open()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSSKILLCARD_OPEN_OFFSET))(nullptr);
		}

		::System::Void Set(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSSKILLCARD_SET_OFFSET))(arg, nullptr);
		}

		::System::Void set_PrevSkillCardUniqueId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSSKILLCARD_SET_PREVSKILLCARDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Single InHand()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSSKILLCARD_INHAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSSKILLCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_PrevSkillCardUniqueId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSSKILLCARD_GET_PREVSKILLCARDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Single UseSkill()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDBOSSSKILLCARD_USESKILL_OFFSET))(nullptr);
		}

	};

