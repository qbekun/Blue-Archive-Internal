#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }

#define UICONQUESTGOALUI_TOGGLESHOWSTEPGOAL_OFFSET UNITYSDK_OFFSET(0x234FA10)
#define UICONQUESTGOALUI_SETTILECOMPLETE_OFFSET UNITYSDK_OFFSET(0x2356E40)
#define UICONQUESTGOALUI_SETGOALUI_OFFSET UNITYSDK_OFFSET(0x2358B80)
#define UICONQUESTGOALUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x2364DF0)

	inline static constexpr unsigned int UIConquestGoalUI_TypeDefinitionIndex = 5060;

	class UIConquestGoalUI : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* conquestGoalAnchor; // 0x18
		UILabel* conquestGoal; // 0x20
		::Il2CppArray<::System::Object*>* conquestGoalItems; // 0x28
		::Il2CppArray<::System::Object*>* conquestGoalNumbers; // 0x30
		::Il2CppArray<::System::Object*>* conquestGoalChecks; // 0x38
		UILabel* stepGoalLabel; // 0x40
		UISprite* stepGoalIcon; // 0x48
		::UnityEngine::GameObject* stepGoalUI; // 0x50

		::System::Void ToggleShowStepGoal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGOALUI_TOGGLESHOWSTEPGOAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetTileComplete(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGOALUI_SETTILECOMPLETE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetGoalUI(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGOALUI_SETGOALUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONQUESTGOALUI_.CTOR_OFFSET))(nullptr);
		}

	};

