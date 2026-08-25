#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class DeadlyAttackEffectDAO; }

#define MX_LOGIC_DATA_DEADLYATTACKEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1239170)
#define MX_LOGIC_DATA_DEADLYATTACKEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1239200)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DeadlyAttackEffectValue_TypeDefinitionIndex = 13879;

	class DeadlyAttackEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48

		::System::Void .ctor(::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEADLYATTACKEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEADLYATTACKEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

	};
}

