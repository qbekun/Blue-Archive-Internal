#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::Campaign { class HexLocation; }
namespace MX::Data::Excel { class ConquestUnitExcel; }
namespace MX::Conquest { class ConquestUnit; }

#define MX_CONQUEST_CONQUESTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x142A3E0)
#define MX_CONQUEST_CONQUESTUNIT_GET_CONQUESTUNITEXCEL_OFFSET UNITYSDK_OFFSET(0x14258E0)
#define MX_CONQUEST_CONQUESTUNIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1427B00)
#define MX_CONQUEST_CONQUESTUNIT_SETEXCEL_OFFSET UNITYSDK_OFFSET(0x142B3D0)
#define MX_CONQUEST_CONQUESTUNIT_GET_ISUNEXPECTEDENEMY_OFFSET UNITYSDK_OFFSET(0x142B470)

namespace MX::Conquest
{
	inline static constexpr unsigned int ConquestUnit_TypeDefinitionIndex = 14836;

	class ConquestUnit : public Il2CppObject
	{
	public:
		::System::Int64 EntityId; // 0x10
		::System::Int64 ConquestUnitId; // 0x18
		::UnityEngine::Vector3* Rotate; // 0x20
		::UnityEngine::Vector3* Offset; // 0x2C
		::MX::Campaign::HexLocation* Location; // 0x38
		::System::Int64 TileUniqueId; // 0x48
		Il2CppObject* _conquestUnitExcel; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTUNIT_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestUnitExcel* get_ConquestUnitExcel()
		{
			return ((::MX::Data::Excel::ConquestUnitExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTUNIT_GET_CONQUESTUNITEXCEL_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestUnit* Clone()
		{
			return ((::MX::Conquest::ConquestUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTUNIT_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetExcel(::MX::Data::Excel::ConquestUnitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestUnitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTUNIT_SETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUnexpectedEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTUNIT_GET_ISUNEXPECTEDENEMY_OFFSET))(nullptr);
		}

	};
}

