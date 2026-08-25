#pragma once
#include "unitysdk.h"

class UITexture;
class IAsyncPoolHandle;
namespace MX::Logic::Skills::LogicEffects { class SkillCardSizeAppendEffect; }
class UISkillCard;
namespace MX::Logic::Battles { class SkillCardState; }

#define SKILLCARDSIZEAPPENDTHEME_BASE_REGISTERHANDLE_OFFSET UNITYSDK_OFFSET(0x221E7E0)
#define SKILLCARDSIZEAPPENDTHEME_BASE_ONCARDSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x221E7F0)
#define SKILLCARDSIZEAPPENDTHEME_BASE_RESERVERELEASE_OFFSET UNITYSDK_OFFSET(0x221E870)
#define SKILLCARDSIZEAPPENDTHEME_BASE_BEFORERELEASE_OFFSET UNITYSDK_OFFSET(0x221DFE0)
#define SKILLCARDSIZEAPPENDTHEME_BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x221E8A0)
#define SKILLCARDSIZEAPPENDTHEME_BASE_SETACTIVEONPOSITION_OFFSET UNITYSDK_OFFSET(0x221E3B0)
#define SKILLCARDSIZEAPPENDTHEME_BASE_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SKILLCARDSIZEAPPENDTHEME_BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x221E990)
#define SKILLCARDSIZEAPPENDTHEME_BASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x221DD50)

	inline static constexpr unsigned int SkillCardSizeAppendTheme_Base_TypeDefinitionIndex = 4423;

	class SkillCardSizeAppendTheme_Base : public Il2CppObject
	{
	public:
		UITexture* slot1AppendThumbnail; // 0x18
		IAsyncPoolHandle* handle; // 0x20
		::System::Single skillCardPositionGap; // 0x28
		::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect* effect; // 0x30
		UISkillCard* appendedTo; // 0x38
		::System::Int32 appendStartIndex; // 0x40
		::MX::Logic::Battles::SkillCardState* cacheAppendedCardState; // 0x44
		::System::Single reserveReturnTime; // 0x48

		::System::Void RegisterHandle(IAsyncPoolHandle* arg)
		{
			((::System::Void(*)(IAsyncPoolHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEME_BASE_REGISTERHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnCardStateChange(::MX::Logic::Battles::SkillCardState* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::SkillCardState*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEME_BASE_ONCARDSTATECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ReserveRelease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEME_BASE_RESERVERELEASE_OFFSET))(nullptr);
		}

		::System::Void BeforeRelease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEME_BASE_BEFORERELEASE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEME_BASE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetActiveOnPosition(::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect* arg, UISkillCard* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect*, UISkillCard*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEME_BASE_SETACTIVEONPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetCustomData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEME_BASE_SETCUSTOMDATA_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEME_BASE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSIZEAPPENDTHEME_BASE_.CTOR_OFFSET))(nullptr);
		}

	};

