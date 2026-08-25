#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class CCGSkillVFXType; }
namespace MX::MinigameCCG::Visual { class VFX; }

#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BB70)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0x1E8BC20)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_PLAYEFFECTSSEQUENTIALLY_OFFSET UNITYSDK_OFFSET(0x1E8BC30)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_PLAYEFFECTSSEQUENTIALLY_OFFSET UNITYSDK_OFFSET(0x1E8BC40)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_GLOBAL_OFFSET UNITYSDK_OFFSET(0x1E8BC50)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_FACETOTARGET_OFFSET UNITYSDK_OFFSET(0x1E8BC60)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_GLOBAL_OFFSET UNITYSDK_OFFSET(0x1E8BC70)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1E8BC80)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_FIELD_OFFSET UNITYSDK_OFFSET(0x1E8BC90)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E8BCA0)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x1E8BD80)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1E8BD90)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_FACETOTARGET_OFFSET UNITYSDK_OFFSET(0x1E8BDA0)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_FIELD_OFFSET UNITYSDK_OFFSET(0x1E8BDB0)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1E8BDC0)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E8BDD0)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1E8BDE0)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_TARGETS_OFFSET UNITYSDK_OFFSET(0x1E8BDF0)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_PROJECTILE_OFFSET UNITYSDK_OFFSET(0x1E8BE00)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1E8BE10)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_PROJECTILE_OFFSET UNITYSDK_OFFSET(0x1E8BE20)
#define MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E8BE30)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VFXContainer_TypeDefinitionIndex = 21176;

	class VFXContainer : public Il2CppObject
	{
	public:
		::System::Int32 _SourceEntityId_k__BackingField; // 0x10
		::System::Int64 _SkillId_k__BackingField; // 0x18
		::MX::MinigameCCG::Procedures::CCGSkillVFXType* _Type_k__BackingField; // 0x20
		::System::Boolean _FaceToTarget_k__BackingField; // 0x24
		::System::Boolean _PlayEffectsSequentially_k__BackingField; // 0x25
		Il2CppObject* _Source_k__BackingField; // 0x28
		Il2CppObject* _Targets_k__BackingField; // 0x30
		::MX::MinigameCCG::Visual::VFX* _Projectile_k__BackingField; // 0x38
		::MX::MinigameCCG::Visual::VFX* _Field_k__BackingField; // 0x40
		::MX::MinigameCCG::Visual::VFX* _Global_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Targets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_TARGETS_OFFSET))(nullptr);
		}

		::System::Void set_PlayEffectsSequentially(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_PLAYEFFECTSSEQUENTIALLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PlayEffectsSequentially()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_PLAYEFFECTSSEQUENTIALLY_OFFSET))(nullptr);
		}

		::System::Void set_Global(::MX::MinigameCCG::Visual::VFX* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::Visual::VFX*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_GLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FaceToTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_FACETOTARGET_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::Visual::VFX* get_Global()
		{
			return (return (::MX::MinigameCCG::Visual::VFX*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_GLOBAL_OFFSET))(nullptr);
		}

		::System::Void set_SourceEntityId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_SOURCEENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Field(::MX::MinigameCCG::Visual::VFX* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::Visual::VFX*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_FIELD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_SourceEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_SOURCEENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_SkillId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_SKILLID_OFFSET))(arg, nullptr);
		}

		::System::Void set_FaceToTarget(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_FACETOTARGET_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Visual::VFX* get_Field()
		{
			return (return (::MX::MinigameCCG::Visual::VFX*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_FIELD_OFFSET))(nullptr);
		}

		::System::Void set_Source(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_SOURCE_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Procedures::CCGSkillVFXType* get_Type()
		{
			return (return (::MX::MinigameCCG::Procedures::CCGSkillVFXType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SkillId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_SKILLID_OFFSET))(nullptr);
		}

		::System::Void set_Targets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_TARGETS_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::Visual::VFX* get_Projectile()
		{
			return (return (::MX::MinigameCCG::Visual::VFX*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_PROJECTILE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Source()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Void set_Projectile(::MX::MinigameCCG::Visual::VFX* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::Visual::VFX*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_PROJECTILE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Type(::MX::MinigameCCG::Procedures::CCGSkillVFXType* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::Procedures::CCGSkillVFXType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VFXCONTAINER_SET_TYPE_OFFSET))(arg, nullptr);
		}

	};
}

