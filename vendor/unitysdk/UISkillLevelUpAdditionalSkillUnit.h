#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
class UILabel;
namespace UnityEngine { class Transform; }
namespace MX::Data::Excel { class SkillAdditionalTooltipExcel; }

#define UISKILLLEVELUPADDITIONALSKILLUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22EC300)
#define UISKILLLEVELUPADDITIONALSKILLUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22ECF50)

	inline static constexpr unsigned int UISkillLevelUpAdditionalSkillUnit_TypeDefinitionIndex = 4881;

	class UISkillLevelUpAdditionalSkillUnit : public Il2CppObject
	{
	public:
		UITexture* skillIcon; // 0x18
		UISprite* reinforced; // 0x20
		UISprite* bulletType; // 0x28
		UILabel* skillName; // 0x30
		UILabel* skillType; // 0x38
		UILabel* skillDesc; // 0x40
		UILabel* skillCost; // 0x48
		::UnityEngine::Transform* skillCostRoot; // 0x50

		::System::Void SetData(::MX::Data::Excel::SkillAdditionalTooltipExcel* arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::SkillAdditionalTooltipExcel*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLUNIT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLLEVELUPADDITIONALSKILLUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

