#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UICAMPAIGNREDDOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22A8FF0)
#define UICAMPAIGNREDDOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22A91B0)
#define UICAMPAIGNREDDOT_SETREDDOT_OFFSET UNITYSDK_OFFSET(0x22A9000)

	inline static constexpr unsigned int UICampaignRedDot_TypeDefinitionIndex = 4751;

	class UICampaignRedDot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* redDot; // 0x18

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNREDDOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNREDDOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRedDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGNREDDOT_SETREDDOT_OFFSET))(nullptr);
		}

	};

