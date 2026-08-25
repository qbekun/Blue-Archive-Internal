#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class SkillCardSizeAppendEffectDAO; }

#define MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_DATAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x123ED20)
#define MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123ED30)
#define MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_THEMEUIPATH_OFFSET UNITYSDK_OFFSET(0x123ED40)
#define MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123ED50)
#define MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123ED60)
#define MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_APPENDTHUMBNAILPATH_OFFSET UNITYSDK_OFFSET(0x123ED70)
#define MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_APPENDSIZE_OFFSET UNITYSDK_OFFSET(0x123ED80)
#define MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123ED90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillCardSizeAppendEffectValue_TypeDefinitionIndex = 13924;

	class SkillCardSizeAppendEffectValue : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x48
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x4C
		::System::Boolean _IsDispellable_k__BackingField; // 0x50
		::System::String* _ThemeUIPath_k__BackingField; // 0x58
		::System::Int32 _AppendSize_k__BackingField; // 0x60
		::Il2CppArray<::System::Object*>* _AppendThumbnailPath_k__BackingField; // 0x68
		::Il2CppArray<::System::Object*>* _DataParameters_k__BackingField; // 0x70

		::Il2CppArray<::System::Object*>* get_DataParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_DATAPARAMETERS_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::String* get_ThemeUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_THEMEUIPATH_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AppendThumbnailPath()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_APPENDTHUMBNAILPATH_OFFSET))(nullptr);
		}

		::System::Int32 get_AppendSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_GET_APPENDSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillCardSizeAppendEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

