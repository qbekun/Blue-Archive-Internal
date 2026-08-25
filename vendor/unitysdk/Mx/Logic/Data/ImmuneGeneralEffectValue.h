#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FontType; }
namespace MX::GameData::DAO::Battle { class ImmuneGeneralEffectDAO; }

#define MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_EXCEPTLOGICTEMPLATEIDS_OFFSET UNITYSDK_OFFSET(0x123BC60)
#define MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123BC70)
#define MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_IMMUNECATEGORYLIST_OFFSET UNITYSDK_OFFSET(0x123C350)
#define MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_EXCEPTLOGICGROUPIDS_OFFSET UNITYSDK_OFFSET(0x123C360)
#define MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_IMMUNESKILLTYPELIST_OFFSET UNITYSDK_OFFSET(0x123C370)
#define MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_FLOATERTYPE_OFFSET UNITYSDK_OFFSET(0x123C380)
#define MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_ISINCLUDECHECKLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x123C390)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmuneGeneralEffectValue_TypeDefinitionIndex = 13902;

	class ImmuneGeneralEffectValue : public Il2CppObject
	{
	public:
		::System::Boolean _IsIncludeCheckLogicEffectGroupId_k__BackingField; // 0x58
		Il2CppObject* _ImmuneSkillTypeList_k__BackingField; // 0x60
		Il2CppObject* _ImmuneCategoryList_k__BackingField; // 0x68
		::FlatData::FontType* _FloaterType_k__BackingField; // 0x70
		Il2CppObject* _ExceptLogicTemplateIds_k__BackingField; // 0x78
		Il2CppObject* _ExceptLogicGroupIds_k__BackingField; // 0x80

		Il2CppObject* get_ExceptLogicTemplateIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_EXCEPTLOGICTEMPLATEIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ImmuneGeneralEffectDAO*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_ImmuneCategoryList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_IMMUNECATEGORYLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExceptLogicGroupIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_EXCEPTLOGICGROUPIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ImmuneSkillTypeList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_IMMUNESKILLTYPELIST_OFFSET))(nullptr);
		}

		::FlatData::FontType* get_FloaterType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_FLOATERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsIncludeCheckLogicEffectGroupId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEGENERALEFFECTVALUE_GET_ISINCLUDECHECKLOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

	};
}

