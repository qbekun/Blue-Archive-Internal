#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class StartStatusLevelIndicatorEffectDAO; }

#define MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123F520)
#define MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_LOGICEFFECTTEMPLATEFORAPPLYSTATUSLEVEL_OFFSET UNITYSDK_OFFSET(0x123F650)
#define MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_MAXSTATUSLEVEL_OFFSET UNITYSDK_OFFSET(0x123F660)
#define MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123F670)
#define MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123F680)
#define MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x123F690)
#define MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123F6A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StartStatusLevelIndicatorEffectValue_TypeDefinitionIndex = 13927;

	class StartStatusLevelIndicatorEffectValue : public Il2CppObject
	{
	public:
		::System::String* _LogicEffectTemplateForApplyStatusLevel_k__BackingField; // 0x48
		::System::String* _UIPath_k__BackingField; // 0x50
		::System::Int32 _MaxStatusLevel_k__BackingField; // 0x58
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x5C
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x60
		::System::Boolean _Dispellable_k__BackingField; // 0x64

		::System::Void .ctor(::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StartStatusLevelIndicatorEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_LogicEffectTemplateForApplyStatusLevel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_LOGICEFFECTTEMPLATEFORAPPLYSTATUSLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxStatusLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_MAXSTATUSLEVEL_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STARTSTATUSLEVELINDICATOREFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

	};
}

