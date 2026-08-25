#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class HPRatioBoundaryGaugeEffectDAO; }

#define MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123BA90)
#define MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123BAA0)
#define MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123BAB0)
#define MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123BB70)
#define MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_UISEPARATEBOUNDARYINDEX_OFFSET UNITYSDK_OFFSET(0x123BB80)
#define MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x123BB90)
#define MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_HPRATIOBOUNDARY_OFFSET UNITYSDK_OFFSET(0x123BBA0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HPRatioBoundaryGaugeEffectValue_TypeDefinitionIndex = 13900;

	class HPRatioBoundaryGaugeEffectValue : public Il2CppObject
	{
	public:
		::System::String* _HPRatioBoundary_k__BackingField; // 0x48
		::System::Int32 _UISeparateBoundaryIndex_k__BackingField; // 0x50
		::System::String* _UIPath_k__BackingField; // 0x58
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x60
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x64
		::System::Boolean _Dispellable_k__BackingField; // 0x68

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HPRatioBoundaryGaugeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_UISeparateBoundaryIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_UISEPARATEBOUNDARYINDEX_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::String* get_HPRatioBoundary()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATIOBOUNDARYGAUGEEFFECTVALUE_GET_HPRATIOBOUNDARY_OFFSET))(nullptr);
		}

	};
}

