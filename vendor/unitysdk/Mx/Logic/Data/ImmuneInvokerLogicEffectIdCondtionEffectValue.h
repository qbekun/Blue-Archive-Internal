#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FontType; }
namespace MX::GameData::DAO::Battle { class ImmuneInvokerLogicEffectIdCondtionEffectDAO; }

#define MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_CHECKLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x123C3A0)
#define MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_FLOATERTYPE_OFFSET UNITYSDK_OFFSET(0x123C3B0)
#define MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_ISINCLUDECHECKLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x123C3C0)
#define MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_IMMUNECATEGORYLIST_OFFSET UNITYSDK_OFFSET(0x123C3D0)
#define MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_IMMUNESKILLTYPELIST_OFFSET UNITYSDK_OFFSET(0x123C3E0)
#define MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123C3F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ImmuneInvokerLogicEffectIdCondtionEffectValue_TypeDefinitionIndex = 13903;

	class ImmuneInvokerLogicEffectIdCondtionEffectValue : public Il2CppObject
	{
	public:
		::System::Boolean _IsIncludeCheckLogicEffectGroupId_k__BackingField; // 0x58
		Il2CppObject* _ImmuneSkillTypeList_k__BackingField; // 0x60
		Il2CppObject* _ImmuneCategoryList_k__BackingField; // 0x68
		::System::String* _CheckLogicEffectGroupId_k__BackingField; // 0x70
		::FlatData::FontType* _FloaterType_k__BackingField; // 0x78

		::System::String* get_CheckLogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_CHECKLOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::FlatData::FontType* get_FloaterType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_FLOATERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsIncludeCheckLogicEffectGroupId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_ISINCLUDECHECKLOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ImmuneCategoryList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_IMMUNECATEGORYLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_ImmuneSkillTypeList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_GET_IMMUNESKILLTYPELIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTVALUE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

