#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AddCurrentATGEffectDAO; }

#define MX_LOGIC_DATA_ADDCURRENTATGEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x12334B0)
#define MX_LOGIC_DATA_ADDCURRENTATGEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12334C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddCurrentATGEffectValue_TypeDefinitionIndex = 13842;

	class AddCurrentATGEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDCURRENTATGEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AddCurrentATGEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDCURRENTATGEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

