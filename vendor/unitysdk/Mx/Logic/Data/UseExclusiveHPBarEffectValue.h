#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class UseExclusiveHPBarEffectDAO; }

#define MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1240950)
#define MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x12409F0)
#define MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1240A00)
#define MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1240A10)
#define MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1240A20)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int UseExclusiveHPBarEffectValue_TypeDefinitionIndex = 13938;

	class UseExclusiveHPBarEffectValue : public Il2CppObject
	{
	public:
		::System::String* _UIPath_k__BackingField; // 0x48
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x50
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x54
		::System::Boolean _Dispellable_k__BackingField; // 0x58

		::System::Void .ctor(::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::UseExclusiveHPBarEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_USEEXCLUSIVEHPBAREFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

	};
}

