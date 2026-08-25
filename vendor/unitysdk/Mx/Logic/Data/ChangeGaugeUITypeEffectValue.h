#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ChangeGaugeUITypeEffectDAO; }

#define MX_LOGIC_DATA_CHANGEGAUGEUITYPEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12364A0)
#define MX_LOGIC_DATA_CHANGEGAUGEUITYPEEFFECTVALUE_GET_UITYPETOCHANGE_OFFSET UNITYSDK_OFFSET(0x12364D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeGaugeUITypeEffectValue_TypeDefinitionIndex = 13861;

	class ChangeGaugeUITypeEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _UITypeToChange_k__BackingField; // 0x48

		::System::Void .ctor(::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEGAUGEUITYPEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UITypeToChange()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEGAUGEUITYPEEFFECTVALUE_GET_UITYPETOCHANGE_OFFSET))(nullptr);
		}

	};
}

