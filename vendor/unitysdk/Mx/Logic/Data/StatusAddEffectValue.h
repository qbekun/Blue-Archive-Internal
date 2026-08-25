#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::GameData::DAO::Battle { class StatusAddEffectDAO; }

#define MX_LOGIC_DATA_STATUSADDEFFECTVALUE_GET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1240080)
#define MX_LOGIC_DATA_STATUSADDEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1240090)
#define MX_LOGIC_DATA_STATUSADDEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x12400A0)
#define MX_LOGIC_DATA_STATUSADDEFFECTVALUE_GET_IGNOREOPPRESSIONCHECK_OFFSET UNITYSDK_OFFSET(0x12400B0)
#define MX_LOGIC_DATA_STATUSADDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12400C0)
#define MX_LOGIC_DATA_STATUSADDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12401C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatusAddEffectValue_TypeDefinitionIndex = 13930;

	class StatusAddEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* _TargetStatus_k__BackingField; // 0x48
		::System::Int32 _DurationFrame_k__BackingField; // 0x4C
		::System::Boolean _Dispellable_k__BackingField; // 0x50
		::System::Boolean _IgnoreOppressionCheck_k__BackingField; // 0x51

		::MX::Logic::BattleEntities::HeroStatus* get_TargetStatus()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDEFFECTVALUE_GET_TARGETSTATUS_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreOppressionCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDEFFECTVALUE_GET_IGNOREOPPRESSIONCHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::StatusAddEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StatusAddEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::StatusAddEffectDAO* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StatusAddEffectDAO*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDEFFECTVALUE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

