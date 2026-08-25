#pragma once
#include "unitysdk.h"

class UISkillCostGauge;
class UIPanel;
namespace UnityEngine { class Transform; }

#define UIPLAYERSKILLCARDSET_GET_SKILLCARDPOSITIONGAP_OFFSET UNITYSDK_OFFSET(0x22375B0)
#define UIPLAYERSKILLCARDSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2237650)
#define UIPLAYERSKILLCARDSET_REQUEST_OFFSET UNITYSDK_OFFSET(0x2237660)

	inline static constexpr unsigned int UIPlayerSkillCardSet_TypeDefinitionIndex = 4463;

	class UIPlayerSkillCardSet : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SkillCards; // 0x18
		UISkillCostGauge* CostGauge; // 0x20
		UIPanel* SkillCostPanel; // 0x28
		Il2CppObject* cardAppendThemePool; // 0x30

		::System::Single get_SkillCardPositionGap()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYERSKILLCARDSET_GET_SKILLCARDPOSITIONGAP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYERSKILLCARDSET_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Request(::UnityEngine::Transform* arg, ::System::String* str)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Transform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYERSKILLCARDSET_REQUEST_OFFSET))(arg, str, nullptr);
		}

	};

