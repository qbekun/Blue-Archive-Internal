#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestTriggerType; }
namespace MX::Conquest::ConquestTileMapEvent { class MultipleConditionCheckType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestTileMapEvent; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace FlatData { class StageDifficulty; }
namespace MX::Conquest { class ConquestTileMap; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x142DEF0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x142DF00)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_TILEMAPEVENTID_OFFSET UNITYSDK_OFFSET(0x142DF10)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_TILEMAPEVENTID_OFFSET UNITYSDK_OFFSET(0x142DF20)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x142DF30)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x142DF40)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_DISPLAYONCE_OFFSET UNITYSDK_OFFSET(0x142DF50)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_DISPLAYONCE_OFFSET UNITYSDK_OFFSET(0x142DF60)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x142DF70)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x142DF80)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x142DF90)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_COMMANDS_OFFSET UNITYSDK_OFFSET(0x142DFA0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x142DFB0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x142E080)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_CLONE_OFFSET UNITYSDK_OFFSET(0x1427AA0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x142E850)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GETCONQUESTDISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x142EA40)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestTileMapEvent_TypeDefinitionIndex = 14878;

	class ConquestTileMapEvent : public Il2CppObject
	{
	public:
		::System::String* _EventName_k__BackingField; // 0x10
		::System::Int64 _TileMapEventId_k__BackingField; // 0x18
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* _TriggerType_k__BackingField; // 0x20
		::System::Boolean _DisplayOnce_k__BackingField; // 0x24
		Il2CppObject* conditions; // 0x28
		::MX::Conquest::ConquestTileMapEvent::MultipleConditionCheckType* _MultipleConditionCheckType_k__BackingField; // 0x30
		Il2CppObject* commands; // 0x38

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_EVENTNAME_OFFSET))(nullptr);
		}

		::System::Void set_EventName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_EVENTNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_TileMapEventId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_TILEMAPEVENTID_OFFSET))(nullptr);
		}

		::System::Void set_TileMapEventId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_TILEMAPEVENTID_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* get_TriggerType()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_TRIGGERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_TriggerType(::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_TRIGGERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DisplayOnce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_DISPLAYONCE_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOnce(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_DISPLAYONCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Conditions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_CONDITIONS_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MultipleConditionCheckType(::MX::Conquest::ConquestTileMapEvent::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Commands()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GET_COMMANDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Conquest::ConquestTileMapEvent::ConquestTileMapEvent* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestTileMapEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestTileMapEvent* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestTileMapEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg, ::FlatData::StageDifficulty* arg2, ::MX::Conquest::ConquestTileMap* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::FlatData::StageDifficulty*, ::MX::Conquest::ConquestTileMap*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_CHECKCONDITION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		Il2CppObject* GetConquestDisplayInfos(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((Il2CppObject*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTTILEMAPEVENT_GETCONQUESTDISPLAYINFOS_OFFSET))(arg, nullptr);
		}

	};
}

