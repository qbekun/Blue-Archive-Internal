#pragma once
#include "unitysdk.h"

namespace MXField::UI { class UIFieldHUD_Quest; }

#define REFRESHELEMENTSACTION_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xE96A40)
#define REFRESHELEMENTSACTION_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xE96A50)
#define REFRESHELEMENTSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE954A0)
#define REFRESHELEMENTSACTION___N__0_OFFSET UNITYSDK_OFFSET(0xE96A60)
#define REFRESHELEMENTSACTION_GET_PLAYREFRESHANIMATION_OFFSET UNITYSDK_OFFSET(0xE96A70)
#define REFRESHELEMENTSACTION_SET_PLAYREFRESHANIMATION_OFFSET UNITYSDK_OFFSET(0xE96A80)
#define REFRESHELEMENTSACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xE96A90)

	inline static constexpr unsigned int RefreshElementsAction_TypeDefinitionIndex = 10695;

	class RefreshElementsAction : public Il2CppObject
	{
	public:
		::MXField::UI::UIFieldHUD_Quest* _Owner_k__BackingField; // 0x40
		::System::Boolean _PlayRefreshAnimation_k__BackingField; // 0x48

		::System::Void set_Owner(::MXField::UI::UIFieldHUD_Quest* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldHUD_Quest*, ::PVOID))((::PBYTE)hIl2Cpp + REFRESHELEMENTSACTION_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::MXField::UI::UIFieldHUD_Quest* get_Owner()
		{
			return ((::MXField::UI::UIFieldHUD_Quest*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFRESHELEMENTSACTION_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::UI::UIFieldHUD_Quest* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXField::UI::UIFieldHUD_Quest*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REFRESHELEMENTSACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __n__0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFRESHELEMENTSACTION___N__0_OFFSET))(nullptr);
		}

		::System::Boolean get_PlayRefreshAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REFRESHELEMENTSACTION_GET_PLAYREFRESHANIMATION_OFFSET))(nullptr);
		}

		::System::Void set_PlayRefreshAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REFRESHELEMENTSACTION_SET_PLAYREFRESHANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFRESHELEMENTSACTION_COEXECUTE_OFFSET))(nullptr);
		}

	};

