#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1480CA0)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1480E70)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1480CB0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int LogicEffectDAO_TypeDefinitionIndex = 15182;

	class LogicEffectDAO : public Il2CppObject
	{
	public:
		::System::Int32 Level; // 0x10
		::System::String* GroupId; // 0x18
		::FlatData::LogicEffectCategory* Category; // 0x20
		::System::String* TemplateId; // 0x28
		::System::Int32 Channel; // 0x30
		::System::Int64 ApplyRate; // 0x38
		::System::String* CommonVisualId; // 0x40
		::System::UInt32 CommonVisualHash; // 0x48
		::System::Int32 PriorityWhenSameFrame; // 0x4C
		::System::Boolean CanTargetTSAInteractingCharacter; // 0x50

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_LOGICEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

