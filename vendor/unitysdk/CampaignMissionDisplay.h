#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Color32; }

#define CAMPAIGNMISSIONDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FFAE00)
#define CAMPAIGNMISSIONDISPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0x1FFAFC0)

	inline static constexpr unsigned int CampaignMissionDisplay_TypeDefinitionIndex = 3098;

	class CampaignMissionDisplay : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* starSuccess; // 0x10
		UILabel* missionGoal; // 0x18
		::UnityEngine::Color32* missionSuccessColor; // 0x20
		::UnityEngine::Color32* missionFailColor; // 0x24
		::UnityEngine::Color32* redColor; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMISSIONDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str, ::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMISSIONDISPLAY_SETDATA_OFFSET))(str, arg, arg2, nullptr);
		}

	};

