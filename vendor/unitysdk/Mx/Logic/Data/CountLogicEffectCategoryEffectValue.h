#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class CountLogicEffectCategoryEffectDAO; }

#define MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1236EC0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x1236ED0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_COUNTCATEGORY_OFFSET UNITYSDK_OFFSET(0x1236EE0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1236EF0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236F00)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x12370D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountLogicEffectCategoryEffectValue_TypeDefinitionIndex = 13871;

	class CountLogicEffectCategoryEffectValue : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* _CountCategory_k__BackingField; // 0x48
		::Il2CppArray<::System::Object*>* ColorIndexList; // 0x50
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x58
		::System::String* _EndConditionArgument_k__BackingField; // 0x60
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0x68
		::System::Boolean _Dispellable_k__BackingField; // 0x70

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_CountCategory()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_COUNTCATEGORY_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountLogicEffectCategoryEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTCATEGORYEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

	};
}

