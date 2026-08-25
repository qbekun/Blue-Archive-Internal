#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class NotMoveEffectDAO; }

#define MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123D7B0)
#define MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_INCLUDEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x123D7C0)
#define MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_IMMUNEKNOCKBACK_OFFSET UNITYSDK_OFFSET(0x123D7D0)
#define MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123D7E0)
#define MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123D7F0)
#define MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123D800)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NotMoveEffectValue_TypeDefinitionIndex = 13911;

	class NotMoveEffectValue : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x48
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x4C
		::System::Boolean _Dispellable_k__BackingField; // 0x50
		::System::Boolean _IncludeRootMotion_k__BackingField; // 0x51
		::System::Boolean _ImmuneKnockback_k__BackingField; // 0x52

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IncludeRootMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_INCLUDEROOTMOTION_OFFSET))(nullptr);
		}

		::System::Boolean get_ImmuneKnockback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_IMMUNEKNOCKBACK_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::NotMoveEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::NotMoveEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NOTMOVEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

