#pragma once
#include "../../unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Coroutine; }
namespace MXField::Quest { class FieldQuestStatus; }

#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA95C0)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_REFRESH_OFFSET UNITYSDK_OFFSET(0xEA9650)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_COREPOSITION_OFFSET UNITYSDK_OFFSET(0xEA9660)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_GET_QUEST_OFFSET UNITYSDK_OFFSET(0xEA96F0)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_SET_QUEST_OFFSET UNITYSDK_OFFSET(0xEA9700)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEA9710)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_ONCLICKDETAIL_OFFSET UNITYSDK_OFFSET(0xEA9780)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xEA9400)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_STARTIMPL_OFFSET UNITYSDK_OFFSET(0xEA97F0)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xEA9060)

namespace MXField::UI
{
	inline static constexpr unsigned int UIPopup_FieldQuestListElement_TypeDefinitionIndex = 10768;

	class UIPopup_FieldQuestListElement : public Il2CppObject
	{
	public:
		MXButton* detailButton; // 0x20
		::Il2CppArray<::System::Object*>* questNameLabels; // 0x28
		::UnityEngine::GameObject* normalObject; // 0x30
		::UnityEngine::GameObject* highlightObject; // 0x38
		::System::Int32 myIndex; // 0x40
		::UnityEngine::Vector3* targetPosition; // 0x44
		::UnityEngine::Vector3* velocity; // 0x50
		::UnityEngine::Coroutine* repositionCoroutine; // 0x60
		::MXField::Quest::FieldQuestStatus* _Quest_k__BackingField; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_REFRESH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoReposition()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_COREPOSITION_OFFSET))(nullptr);
		}

		::MXField::Quest::FieldQuestStatus* get_Quest()
		{
			return ((::MXField::Quest::FieldQuestStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_GET_QUEST_OFFSET))(nullptr);
		}

		::System::Void set_Quest(::MXField::Quest::FieldQuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_SET_QUEST_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_ONCLICKDETAIL_OFFSET))(nullptr);
		}

		::System::Void SetData(::MXField::Quest::FieldQuestStatus* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_STARTIMPL_OFFSET))(nullptr);
		}

		::System::Void SetHighlight(::MXField::Quest::FieldQuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLISTELEMENT_SETHIGHLIGHT_OFFSET))(arg, nullptr);
		}

	};
}

