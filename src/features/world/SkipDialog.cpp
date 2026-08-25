#include "features.h"
#include "gui.h"
#include "globals.h"
#include "hooks.h"
#include "utils.h"
#include "offsets.h"
#include <imgui.h>
#include <unitysdk/unitysdk.h>
#include <unitysdk/UIScenarioNew.h>
#include <unitysdk/ScenarioTask.h>

namespace SkipDialog
{
    void* UIScenarioNew_get_Task_Hook(void* _this)
    {
        void* task = CALL_ORIGIN(UIScenarioNew_get_Task_Hook, _this);

        if (g_Options.bSkipDialogue && task != nullptr)
        {
            static void* lastTaskPtr = nullptr;
            static int64_t lastTaskId = -1;

            auto* scenarioTask = (::ScenarioTask*)task;
            int64_t currentId = scenarioTask->get_CurrentId();

            if (task != lastTaskPtr || currentId != lastTaskId)
            {
                scenarioTask->FinishScenario();
                lastTaskPtr = task;
                lastTaskId = currentId;
            }
        }

        return task;
    }

    void Render()
    {
        ImGui::BeginGroupPanel("Skip Dialogue");
        if (ui::items::notify_checkbox("Skip Dialogue", &g_Options.bSkipDialogue))
        {
            if (g_Options.bSkipDialogue)
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_UISCENARIONEW_GET_TASK), (void*)&UIScenarioNew_get_Task_Hook);
            else
                Hooks::DeleteHook((void*)&UIScenarioNew_get_Task_Hook);
        }
        ImGui::SameLine();
        ImGui::HelpMarker("Skips Dialogues");
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}