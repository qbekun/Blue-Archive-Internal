#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class ThermometerRangeSetEffectDAO; }

#define MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_MINHPRATIOBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1240760)
#define MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1240770)
#define MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1240780)
#define MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1240790)
#define MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_MAXHPRATIOBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1240830)
#define MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1240840)
#define MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_THERMOMETERUIINDEX_OFFSET UNITYSDK_OFFSET(0x1240850)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ThermometerRangeSetEffectValue_TypeDefinitionIndex = 13936;

	class ThermometerRangeSetEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _ThermometerUIIndex_k__BackingField; // 0x48
		::System::Int32 _MinHPRatioBoundary_k__BackingField; // 0x4C
		::System::Int32 _MaxHPRatioBoundary_k__BackingField; // 0x50
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x54
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x58
		::System::Boolean _Dispellable_k__BackingField; // 0x5C

		::System::Int32 get_MinHPRatioBoundary()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_MINHPRATIOBOUNDARY_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ThermometerRangeSetEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxHPRatioBoundary()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_MAXHPRATIOBOUNDARY_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_ThermometerUIIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERRANGESETEFFECTVALUE_GET_THERMOMETERUIINDEX_OFFSET))(nullptr);
		}

	};
}

