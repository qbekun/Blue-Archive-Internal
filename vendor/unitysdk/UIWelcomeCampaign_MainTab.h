#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UIWELCOMECAMPAIGN_MAINTAB_SETREDDOT_OFFSET UNITYSDK_OFFSET(0xBD58B0)
#define UIWELCOMECAMPAIGN_MAINTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD7700)

	inline static constexpr unsigned int UIWelcomeCampaign_MainTab_TypeDefinitionIndex = 8685;

	class UIWelcomeCampaign_MainTab : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* redDot; // 0x18

		::System::Void SetRedDot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_MAINTAB_SETREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_MAINTAB_.CTOR_OFFSET))(nullptr);
		}

	};

