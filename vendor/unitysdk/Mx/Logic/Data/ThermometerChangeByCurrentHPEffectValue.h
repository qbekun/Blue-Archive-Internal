#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class ThermometerChangeByCurrentHPEffectDAO; }

#define MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1240660)
#define MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1240670)
#define MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1240720)
#define MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1240730)
#define MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1240740)
#define MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_THERMOMETERRANGESET_OFFSET UNITYSDK_OFFSET(0x1240750)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ThermometerChangeByCurrentHPEffectValue_TypeDefinitionIndex = 13935;

	class ThermometerChangeByCurrentHPEffectValue : public Il2CppObject
	{
	public:
		::System::String* _ThermometerRangeSet_k__BackingField; // 0x48
		::System::String* _UIPath_k__BackingField; // 0x50
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x58
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x5C
		::System::Boolean _Dispellable_k__BackingField; // 0x60

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ThermometerChangeByCurrentHPEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::String* get_ThermometerRangeSet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_THERMOMETERCHANGEBYCURRENTHPEFFECTVALUE_GET_THERMOMETERRANGESET_OFFSET))(nullptr);
		}

	};
}

