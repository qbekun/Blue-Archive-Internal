#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameData::DAO::Battle { class SummonGroupDAO; }

#define MX_LOGIC_DATA_SUMMONGROUPVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124C230)
#define MX_LOGIC_DATA_SUMMONGROUPVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x124C2D0)
#define MX_LOGIC_DATA_SUMMONGROUPVALUE_GET_SUMMONENTITIES_OFFSET UNITYSDK_OFFSET(0x124C2E0)
#define MX_LOGIC_DATA_SUMMONGROUPVALUE_GET_CHANCE_OFFSET UNITYSDK_OFFSET(0x124C2F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SummonGroupValue_TypeDefinitionIndex = 13981;

	class SummonGroupValue : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::MX::Core::Math::BasisPoint* _Chance_k__BackingField; // 0x18
		Il2CppObject* _SummonEntities_k__BackingField; // 0x20

		::System::Void .ctor(::MX::GameData::DAO::Battle::SummonGroupDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SummonGroupDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONGROUPVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONGROUPVALUE_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_SummonEntities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONGROUPVALUE_GET_SUMMONENTITIES_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_Chance()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONGROUPVALUE_GET_CHANCE_OFFSET))(nullptr);
		}

	};
}

