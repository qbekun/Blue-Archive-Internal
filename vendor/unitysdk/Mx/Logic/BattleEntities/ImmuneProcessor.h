#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::LogicEffects { class ImmuneEffect; }
namespace MX::Core::Services { class Hash64; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_RUNNINGIMMUNELIST_OFFSET UNITYSDK_OFFSET(0x1167440)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_RUNTIMEIMMUNES_OFFSET UNITYSDK_OFFSET(0x1167450)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_ADDEDIMMUNES_OFFSET UNITYSDK_OFFSET(0x1167460)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_SET_ADDEDIMMUNES_OFFSET UNITYSDK_OFFSET(0x1167470)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_EXPIREDLIST_OFFSET UNITYSDK_OFFSET(0x1167480)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_SET_EXPIREDLIST_OFFSET UNITYSDK_OFFSET(0x1167490)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_MARKREMOVELIST_OFFSET UNITYSDK_OFFSET(0x11674A0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_SET_MARKREMOVELIST_OFFSET UNITYSDK_OFFSET(0x11674B0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x11674C0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_ADD_OFFSET UNITYSDK_OFFSET(0x1167610)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1167920)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_REMOVEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1167AA0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_APPLYREMOVE_OFFSET UNITYSDK_OFFSET(0x1167CC0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_APPLYADD_OFFSET UNITYSDK_OFFSET(0x11681A0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11685A0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1168830)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1168AB0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1168BB0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1168C80)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1168D70)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GETLOGICEFFECTCATEGORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1168E30)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1168EF0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GETLOGICEFFECTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1168FC0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_FINDIMMUNE_OFFSET UNITYSDK_OFFSET(0x1169090)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_MATCHESANY_OFFSET UNITYSDK_OFFSET(0x1168660)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_COUNTMATCHES_OFFSET UNITYSDK_OFFSET(0x11688F0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ImmuneProcessor_TypeDefinitionIndex = 13198;

	class ImmuneProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* _runningImmuneList_k__BackingField; // 0x10
		Il2CppObject* _addedImmunes_k__BackingField; // 0x18
		Il2CppObject* _expiredList_k__BackingField; // 0x20
		Il2CppObject* _markRemoveList_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::BattleEntity* owner; // 0x30

		Il2CppObject* get_runningImmuneList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_RUNNINGIMMUNELIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_RuntimeImmunes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_RUNTIMEIMMUNES_OFFSET))(nullptr);
		}

		Il2CppObject* get_addedImmunes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_ADDEDIMMUNES_OFFSET))(nullptr);
		}

		::System::Void set_addedImmunes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_SET_ADDEDIMMUNES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_expiredList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_EXPIREDLIST_OFFSET))(nullptr);
		}

		::System::Void set_expiredList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_SET_EXPIREDLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_markRemoveList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GET_MARKREMOVELIST_OFFSET))(nullptr);
		}

		::System::Void set_markRemoveList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_SET_MARKREMOVELIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::MX::Logic::Skills::LogicEffects::ImmuneEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ImmuneEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::MX::Logic::Skills::LogicEffects::ImmuneEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ImmuneEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_REMOVEEXPIRED_OFFSET))(nullptr);
		}

		Il2CppObject* ApplyRemove()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_APPLYREMOVE_OFFSET))(nullptr);
		}

		Il2CppObject* ApplyAdd()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_APPLYADD_OFFSET))(nullptr);
		}

		::System::Boolean HasLogicEffectTemplateId(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECTTEMPLATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTemplateIdCount(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectGroupIdCount(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECT_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectCategoryCount(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GETLOGICEFFECTCATEGORYCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffectType(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_HASLOGICEFFECTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTypeCount(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_GETLOGICEFFECTTYPECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::ImmuneEffect* FindImmune(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::System::Boolean arg2)
		{
			return ((::MX::Logic::Skills::LogicEffects::ImmuneEffect*(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_FINDIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MatchesAny(::System::Boolean arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_MATCHESANY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CountMatches(::System::Boolean arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEPROCESSOR_COUNTMATCHES_OFFSET))(arg, arg2, nullptr);
		}

	};
}

