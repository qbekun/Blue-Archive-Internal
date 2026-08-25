#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldQuestInfo; }
namespace MXField::Shared::Quest { class FieldQuest; }
namespace MXField::Quest { class QuestStatus; }
namespace MXField::Shared::Model { class FieldQuestDB; }
namespace MXField::Actions { class QuestClearPublishAction; }
namespace MXField::UI { class UIFieldQuestNotice; }
namespace MXField::Quest { class FieldQuestSO; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MXFIELD_QUEST_FIELDQUESTSTATUS__PROCESSQUESTSTART_B__38_0_OFFSET UNITYSDK_OFFSET(0xEBB390)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_CLEARACTIONS_OFFSET UNITYSDK_OFFSET(0xEBB3C0)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_SETSTATUS_OFFSET UNITYSDK_OFFSET(0xEBB3D0)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_LOADQUESTSO_OFFSET UNITYSDK_OFFSET(0xEBB3E0)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_SAVECLEARQUEST_OFFSET UNITYSDK_OFFSET(0xEBB4A0)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_NAME_OFFSET UNITYSDK_OFFSET(0xEBB500)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xEBB520)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_QUESTINFO_OFFSET UNITYSDK_OFFSET(0xEBB530)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_ONSOLOADED_OFFSET UNITYSDK_OFFSET(0xEBB540)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0xEBB5F0)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xEBB600)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_QUEST_OFFSET UNITYSDK_OFFSET(0xEBB610)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_SET_QUEST_OFFSET UNITYSDK_OFFSET(0xEBB620)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0xEBB630)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xEBB670)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xEBB680)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_PROCESSQUESTSKIPCLEAR_OFFSET UNITYSDK_OFFSET(0xEBB690)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xEBBB50)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_SET_CLEARACTIONS_OFFSET UNITYSDK_OFFSET(0xEBBB60)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_UPDATE_OFFSET UNITYSDK_OFFSET(0xEBBB70)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xEBBC20)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_PLAYCLEARACTIONS_OFFSET UNITYSDK_OFFSET(0xEBB890)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_PROCESSQUESTSTART_OFFSET UNITYSDK_OFFSET(0xEBBC40)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xEBBC10)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_HANDLEQUESTCLEARRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xEBBE00)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xEBBC00)
#define MXFIELD_QUEST_FIELDQUESTSTATUS__PLAYCLEARACTIONS_B__43_0_OFFSET UNITYSDK_OFFSET(0xEBBFB0)
#define MXFIELD_QUEST_FIELDQUESTSTATUS_PROCESSQUESTCLEAR_OFFSET UNITYSDK_OFFSET(0xEBBFE0)

namespace MXField::Quest
{
	inline static constexpr unsigned int FieldQuestStatus_TypeDefinitionIndex = 10825;

	class FieldQuestStatus : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldQuestInfo* _QuestInfo_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _ClearActions_k__BackingField; // 0x18
		::MXField::Shared::Quest::FieldQuest* _Quest_k__BackingField; // 0x20
		::MXField::Quest::QuestStatus* _Status_k__BackingField; // 0x28
		::MXField::Shared::Model::FieldQuestDB* questDB; // 0x30
		::MXField::Actions::QuestClearPublishAction* clearPublishAction; // 0x38
		::System::Boolean _IsLoaded_k__BackingField; // 0x40

		::System::Void _ProcessQuestStart_b__38_0(::MXField::UI::UIFieldQuestNotice* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldQuestNotice*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS__PROCESSQUESTSTART_B__38_0_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ClearActions()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_CLEARACTIONS_OFFSET))(nullptr);
		}

		::System::Void SetStatus(::MXField::Quest::QuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::QuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_SETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void LoadQuestSO()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_LOADQUESTSO_OFFSET))(nullptr);
		}

		::System::Void SaveClearQuest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_SAVECLEARQUEST_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Status(::MXField::Quest::QuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::QuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_SET_STATUS_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldQuestInfo* get_QuestInfo()
		{
			return ((::MXField::Shared::Data::FieldQuestInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_QUESTINFO_OFFSET))(nullptr);
		}

		::System::Void OnSOLoaded(::MXField::Quest::FieldQuestSO* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestSO*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_ONSOLOADED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISDISABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISVALID_OFFSET))(nullptr);
		}

		::MXField::Shared::Quest::FieldQuest* get_Quest()
		{
			return ((::MXField::Shared::Quest::FieldQuest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_QUEST_OFFSET))(nullptr);
		}

		::System::Void set_Quest(::MXField::Shared::Quest::FieldQuest* arg)
		{
			((::System::Void(*)(::MXField::Shared::Quest::FieldQuest*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_SET_QUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldQuestInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldQuestInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_.CTOR_OFFSET))(arg, nullptr);
		}

		::MXField::Quest::QuestStatus* get_Status()
		{
			return ((::MXField::Quest::QuestStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_STATUS_OFFSET))(nullptr);
		}

		::System::Void set_IsLoaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_SET_ISLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessQuestSkipClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_PROCESSQUESTSKIPCLEAR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISLOADED_OFFSET))(nullptr);
		}

		::System::Void set_ClearActions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_SET_CLEARACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_UPDATE_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void PlayClearActions(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_PLAYCLEARACTIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ProcessQuestStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_PROCESSQUESTSTART_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISINPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean HandleQuestClearResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_HANDLEQUESTCLEARRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_GET_ISCLEAR_OFFSET))(nullptr);
		}

		::System::Void _PlayClearActions_b__43_0(::MXField::UI::UIFieldQuestNotice* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldQuestNotice*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS__PLAYCLEARACTIONS_B__43_0_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessQuestClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_QUEST_FIELDQUESTSTATUS_PROCESSQUESTCLEAR_OFFSET))(nullptr);
		}

	};
}

