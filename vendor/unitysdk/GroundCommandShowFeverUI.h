#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class BattleEntityRemovedEventArgs; }

#define GROUNDCOMMANDSHOWFEVERUI_CHECKALREADYADDED_OFFSET UNITYSDK_OFFSET(0x217EAD0)
#define GROUNDCOMMANDSHOWFEVERUI_BATTLE_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x217EFD0)
#define GROUNDCOMMANDSHOWFEVERUI_GET_SHOW_OFFSET UNITYSDK_OFFSET(0x217F410)
#define GROUNDCOMMANDSHOWFEVERUI_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x217F420)
#define GROUNDCOMMANDSHOWFEVERUI_CHECKTARGETMATCH_OFFSET UNITYSDK_OFFSET(0x217F010)
#define GROUNDCOMMANDSHOWFEVERUI_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x217F4B0)
#define GROUNDCOMMANDSHOWFEVERUI__CHECKALREADYADDED_B__21_1_OFFSET UNITYSDK_OFFSET(0x217F7C0)
#define GROUNDCOMMANDSHOWFEVERUI_SET_SHOW_OFFSET UNITYSDK_OFFSET(0x217F8A0)
#define GROUNDCOMMANDSHOWFEVERUI_START_OFFSET UNITYSDK_OFFSET(0x217F8B0)
#define GROUNDCOMMANDSHOWFEVERUI_HIDEFEVER_OFFSET UNITYSDK_OFFSET(0x217FA60)
#define GROUNDCOMMANDSHOWFEVERUI__CHECKALREADYADDED_B__21_3_OFFSET UNITYSDK_OFFSET(0x217FA80)
#define GROUNDCOMMANDSHOWFEVERUI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x217FB60)
#define GROUNDCOMMANDSHOWFEVERUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x217FB80)
#define GROUNDCOMMANDSHOWFEVERUI_CHECKALLREMOVED_OFFSET UNITYSDK_OFFSET(0x217F130)
#define GROUNDCOMMANDSHOWFEVERUI_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x217FBD0)
#define GROUNDCOMMANDSHOWFEVERUI__CHECKALLREMOVED_B__20_2_OFFSET UNITYSDK_OFFSET(0x2180BF0)
#define GROUNDCOMMANDSHOWFEVERUI__CHECKALLREMOVED_B__20_3_OFFSET UNITYSDK_OFFSET(0x2180CD0)
#define GROUNDCOMMANDSHOWFEVERUI_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2180DB0)
#define GROUNDCOMMANDSHOWFEVERUI_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2180DC0)
#define GROUNDCOMMANDSHOWFEVERUI__CHECKALLREMOVED_B__20_1_OFFSET UNITYSDK_OFFSET(0x2182410)
#define GROUNDCOMMANDSHOWFEVERUI__CHECKALREADYADDED_B__21_0_OFFSET UNITYSDK_OFFSET(0x21824F0)
#define GROUNDCOMMANDSHOWFEVERUI__CHECKALLREMOVED_B__20_0_OFFSET UNITYSDK_OFFSET(0x21825D0)
#define GROUNDCOMMANDSHOWFEVERUI_BATTLE_BATTLEENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x21826B0)
#define GROUNDCOMMANDSHOWFEVERUI_SHOWFEVER_OFFSET UNITYSDK_OFFSET(0x217EDE0)
#define GROUNDCOMMANDSHOWFEVERUI__CHECKALREADYADDED_B__21_2_OFFSET UNITYSDK_OFFSET(0x21826F0)

	inline static constexpr unsigned int GroundCommandShowFeverUI_TypeDefinitionIndex = 4053;

	class GroundCommandShowFeverUI : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* TargetSideId; // 0x30
		::System::String* ConditionIdToCheckTargetSideEnemy; // 0x38
		::System::Boolean CheckAlreadyAppliedLogicEffect; // 0x40
		Il2CppObject* LogicEffectCheckList; // 0x48
		::System::Int32 ShowMaxCount; // 0x50
		::System::Int32 showCountCurrent; // 0x54
		::MX::Logic::Battles::Battle* battle; // 0x58
		::System::Boolean _Show_k__BackingField; // 0x60
		::System::Int32 showFrame; // 0x64

		::System::Void CheckAlreadyAdded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_CHECKALREADYADDED_OFFSET))(nullptr);
		}

		::System::Void Battle_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_BATTLE_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_Show()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_GET_SHOW_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckTargetMatch(::MX::Logic::BattleEntities::EntityId* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_CHECKTARGETMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Boolean _CheckAlreadyAdded_b__21_1(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI__CHECKALREADYADDED_B__21_1_OFFSET))(arg, nullptr);
		}

		::System::Void set_Show(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_SET_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_START_OFFSET))(nullptr);
		}

		::System::Void HideFever(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_HIDEFEVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CheckAlreadyAdded_b__21_3(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI__CHECKALREADYADDED_B__21_3_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckAllRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_CHECKALLREMOVED_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandShowFeverUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandShowFeverUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _CheckAllRemoved_b__20_2(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI__CHECKALLREMOVED_B__20_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CheckAllRemoved_b__20_3(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI__CHECKALLREMOVED_B__20_3_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandShowFeverUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandShowFeverUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _CheckAllRemoved_b__20_1(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI__CHECKALLREMOVED_B__20_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CheckAlreadyAdded_b__21_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI__CHECKALREADYADDED_B__21_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CheckAllRemoved_b__20_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI__CHECKALLREMOVED_B__20_0_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_BattleEntityRemoved(::System::Object* arg, ::MX::Logic::Battles::BattleEntityRemovedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntityRemovedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_BATTLE_BATTLEENTITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowFever(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI_SHOWFEVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CheckAlreadyAdded_b__21_2(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWFEVERUI__CHECKALREADYADDED_B__21_2_OFFSET))(arg, nullptr);
		}

	};

