#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }
class UITexture;
class EnableGroup;
namespace UnityEngine { class Transform; }
namespace MX::Logic::Skills::LogicEffects { class SkillCardSizeAppendEffect; }
class UISkillCard;

#define SKILLCARDSIZEAPPENDTHEMEDECAGRAM_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x221D970)
#define SKILLCARDSIZEAPPENDTHEMEDECAGRAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x221DCC0)
#define SKILLCARDSIZEAPPENDTHEMEDECAGRAM_UPDATE_OFFSET UNITYSDK_OFFSET(0x221DD60)
#define SKILLCARDSIZEAPPENDTHEMEDECAGRAM_BEFORERELEASE_OFFSET UNITYSDK_OFFSET(0x221DE90)
#define SKILLCARDSIZEAPPENDTHEMEDECAGRAM_SETACTIVEONPOSITION_OFFSET UNITYSDK_OFFSET(0x221E050)

	inline static constexpr unsigned int SkillCardSizeAppendThemeDecagram_TypeDefinitionIndex = 4422;

	class SkillCardSizeAppendThemeDecagram : public Il2CppObject
	{
	public:
		::System::String* KeyDecagramSymbolPath; // 0x0
		::System::String* KeyDecagramEffectPath; // 0x0
		::UnityEngine::AnimationClip* overrideAnimUseSkillCard; // 0x50
		UITexture* SymbolTexture; // 0x58
		EnableGroup* enableOnCardUse; // 0x60
		::UnityEngine::Transform* effectRoot; // 0x68
		Il2CppObject* DisabledLabels; // 0x70
		::System::Boolean isSkillUseAnimStarted; // 0x78

		::System::Void SetCustomData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEMEDECAGRAM_SETCUSTOMDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEMEDECAGRAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEMEDECAGRAM_UPDATE_OFFSET))(nullptr);
		}

		::System::Void BeforeRelease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEMEDECAGRAM_BEFORERELEASE_OFFSET))(nullptr);
		}

		::System::Void SetActiveOnPosition(::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect* arg, UISkillCard* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect*, UISkillCard*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEMEDECAGRAM_SETACTIVEONPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

