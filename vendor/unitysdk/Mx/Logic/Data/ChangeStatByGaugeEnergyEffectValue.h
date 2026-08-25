#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class StatType; }
namespace MX::GameData::DAO::Battle { class ChangeStatByGaugeEnergyEffectDAO; }

#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236570)
#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_ENDCHANGESTATBASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x12365F0)
#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_CHECKENDGAUGEENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x1236600)
#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_STARTCHANGESTATBASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1236610)
#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1236620)
#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1236630)
#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_CHECKSTARTGAUGEENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x1236640)
#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_STARTCHANGESTATCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x1236650)
#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_ENDCHANGESTATCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x1236660)
#define MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x1236670)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeStatByGaugeEnergyEffectValue_TypeDefinitionIndex = 13863;

	class ChangeStatByGaugeEnergyEffectValue : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _CheckStartGaugeEnergyRatio_k__BackingField; // 0x48
		::MX::Core::Math::BasisPoint* _CheckEndGaugeEnergyRatio_k__BackingField; // 0x50
		::FlatData::StatType* _StatType_k__BackingField; // 0x58
		::System::Int64 _StartChangeStatBaseAmount_k__BackingField; // 0x60
		::System::Int64 _EndChangeStatBaseAmount_k__BackingField; // 0x68
		::MX::Core::Math::BasisPoint* _StartChangeStatCoefficient_k__BackingField; // 0x70
		::MX::Core::Math::BasisPoint* _EndChangeStatCoefficient_k__BackingField; // 0x78
		::System::Boolean _Dispellable_k__BackingField; // 0x80
		::System::Int64 _Duration_k__BackingField; // 0x88

		::System::Void .ctor(::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChangeStatByGaugeEnergyEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EndChangeStatBaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_ENDCHANGESTATBASEAMOUNT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_CheckEndGaugeEnergyRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_CHECKENDGAUGEENERGYRATIO_OFFSET))(nullptr);
		}

		::System::Int64 get_StartChangeStatBaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_STARTCHANGESTATBASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_CheckStartGaugeEnergyRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_CHECKSTARTGAUGEENERGYRATIO_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_StartChangeStatCoefficient()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_STARTCHANGESTATCOEFFICIENT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_EndChangeStatCoefficient()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_ENDCHANGESTATCOEFFICIENT_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_StatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATBYGAUGEENERGYEFFECTVALUE_GET_STATTYPE_OFFSET))(nullptr);
		}

	};
}

