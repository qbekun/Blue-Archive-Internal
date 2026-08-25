#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UIWELCOMECAMPAIGN_MISSIONTAB_INIT_OFFSET UNITYSDK_OFFSET(0xBD4EE0)
#define UIWELCOMECAMPAIGN_MISSIONTAB_SETLOCKED_OFFSET UNITYSDK_OFFSET(0xBD7710)
#define UIWELCOMECAMPAIGN_MISSIONTAB_SETCLEARTAG_OFFSET UNITYSDK_OFFSET(0xBD5910)
#define UIWELCOMECAMPAIGN_MISSIONTAB_SETREDDOT_OFFSET UNITYSDK_OFFSET(0xBD58F0)
#define UIWELCOMECAMPAIGN_MISSIONTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD7730)

	inline static constexpr unsigned int UIWelcomeCampaign_MissionTab_TypeDefinitionIndex = 8686;

	class UIWelcomeCampaign_MissionTab : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* redDot; // 0x18
		::Il2CppArray<::System::Object*>* nameLabels; // 0x20
		::UnityEngine::GameObject* clearTag; // 0x28
		::UnityEngine::GameObject* locked; // 0x30

		::System::Void Init(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_MISSIONTAB_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_MISSIONTAB_SETLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Void SetClearTag(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_MISSIONTAB_SETCLEARTAG_OFFSET))(arg, nullptr);
		}

		::System::Void SetRedDot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_MISSIONTAB_SETREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_MISSIONTAB_.CTOR_OFFSET))(nullptr);
		}

	};

