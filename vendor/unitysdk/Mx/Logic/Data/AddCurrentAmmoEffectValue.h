#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AddCurrentAmmoEffectDAO; }

#define MX_LOGIC_DATA_ADDCURRENTAMMOEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1233470)
#define MX_LOGIC_DATA_ADDCURRENTAMMOEFFECTVALUE_GET_AMMOCOUNTTOADD_OFFSET UNITYSDK_OFFSET(0x12334A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddCurrentAmmoEffectValue_TypeDefinitionIndex = 13841;

	class AddCurrentAmmoEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _AmmoCountToAdd_k__BackingField; // 0x48

		::System::Void .ctor(::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AddCurrentAmmoEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDCURRENTAMMOEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AmmoCountToAdd()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDCURRENTAMMOEFFECTVALUE_GET_AMMOCOUNTTOADD_OFFSET))(nullptr);
		}

	};
}

