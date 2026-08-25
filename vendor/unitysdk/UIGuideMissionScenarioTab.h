#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class GameObject; }
class UIGuideMissionScenarioTabSub;
namespace MX::Data { class GuideMissionOpenStageConditionInfo; }

#define UIGUIDEMISSIONSCENARIOTAB_INIT_OFFSET UNITYSDK_OFFSET(0x25C8D20)
#define UIGUIDEMISSIONSCENARIOTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C8E80)
#define UIGUIDEMISSIONSCENARIOTAB_REFRESH_OFFSET UNITYSDK_OFFSET(0x25C8E90)

	inline static constexpr unsigned int UIGuideMissionScenarioTab_TypeDefinitionIndex = 6326;

	class UIGuideMissionScenarioTab : public Il2CppObject
	{
	public:
		UIWidget* redDot; // 0x18
		::Il2CppArray<::System::Object*>* nameLabels; // 0x20
		::UnityEngine::GameObject* clearTag; // 0x28
		UIGuideMissionScenarioTabSub* enabledTabSub; // 0x30
		UIGuideMissionScenarioTabSub* disabledTabSub; // 0x38
		UIGuideMissionScenarioTabSub* dimmedTabSub; // 0x40
		::MX::Data::GuideMissionOpenStageConditionInfo* openCondition; // 0x48

		::System::Void Init(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTAB_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTAB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONSCENARIOTAB_REFRESH_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

