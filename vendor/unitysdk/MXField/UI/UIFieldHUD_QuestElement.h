#pragma once
#include "../../unitysdk.h"

class UILabel;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Coroutine; }
namespace MXField::Quest { class FieldQuestStatus; }

#define MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE97890)
#define MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_COREPOSITION_OFFSET UNITYSDK_OFFSET(0xE97920)
#define MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xE95820)
#define MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE979B0)
#define MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_GET_QUEST_OFFSET UNITYSDK_OFFSET(0xE97A50)
#define MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xE97A60)
#define MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_COPLAYCLEARANIMATION_OFFSET UNITYSDK_OFFSET(0xE97730)
#define MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE97AB0)
#define MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_SET_QUEST_OFFSET UNITYSDK_OFFSET(0xE97BB0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldHUD_QuestElement_TypeDefinitionIndex = 10705;

	class UIFieldHUD_QuestElement : public Il2CppObject
	{
	public:
		UILabel* questNameLabel; // 0x18
		::UnityEngine::Animation* clearAnimation; // 0x20
		::System::Int32 myIndex; // 0x28
		::UnityEngine::Vector3* targetPosition; // 0x2C
		::UnityEngine::Vector3* velocity; // 0x38
		::UnityEngine::Coroutine* repositionCoroutine; // 0x48
		::MXField::Quest::FieldQuestStatus* _Quest_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoReposition()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_COREPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetData(::MXField::Quest::FieldQuestStatus* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_ONENABLE_OFFSET))(nullptr);
		}

		::MXField::Quest::FieldQuestStatus* get_Quest()
		{
			return ((::MXField::Quest::FieldQuestStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_GET_QUEST_OFFSET))(nullptr);
		}

		::System::Int64 get_QuestId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_GET_QUESTID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayClearAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_COPLAYCLEARANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_Quest(::MXField::Quest::FieldQuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTELEMENT_SET_QUEST_OFFSET))(arg, nullptr);
		}

	};
}

