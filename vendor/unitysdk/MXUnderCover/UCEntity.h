#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntityModel; }
namespace MXUnderCover { class UCEntityStatus; }
namespace MXUnderCover { class UCEntityTypes; }
namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCSectionVisual; }
namespace MXUnderCover { class UCSectionModel; }
class CoroutineAsyncOperation;
namespace UnityEngine { class Transform; }

#define MXUNDERCOVER_UCENTITY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITY_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xD8F890)
#define MXUNDERCOVER_UCENTITY_SET_MODEL_OFFSET UNITYSDK_OFFSET(0xD8F8A0)
#define MXUNDERCOVER_UCENTITY_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xD8C590)
#define MXUNDERCOVER_UCENTITY_GET_SECTIONVISUAL_OFFSET UNITYSDK_OFFSET(0xD8F8B0)
#define MXUNDERCOVER_UCENTITY_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xD8F8E0)
#define MXUNDERCOVER_UCENTITY_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xD8F8F0)
#define MXUNDERCOVER_UCENTITY_GET_ALLCOMPOSITIONS_OFFSET UNITYSDK_OFFSET(0xD8F900)
#define MXUNDERCOVER_UCENTITY_GET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0xD8F970)
#define MXUNDERCOVER_UCENTITY_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xD8F9B0)
#define MXUNDERCOVER_UCENTITY_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xD8F9C0)
#define MXUNDERCOVER_UCENTITY_GET_SKILLSTUNANIMDURATION_OFFSET UNITYSDK_OFFSET(0xD8F9D0)
#define MXUNDERCOVER_UCENTITY_SET_SKILLSTUNANIMDURATION_OFFSET UNITYSDK_OFFSET(0xD8F9E0)
#define MXUNDERCOVER_UCENTITY_FINDCOMPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITY_FINDCOMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITY_EXTRACTMODEL_OFFSET UNITYSDK_OFFSET(0xD8F9F0)
#define MXUNDERCOVER_UCENTITY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD8AD20)
#define MXUNDERCOVER_UCENTITY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD897C0)
#define MXUNDERCOVER_UCENTITY_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD90070)
#define MXUNDERCOVER_UCENTITY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD89550)
#define MXUNDERCOVER_UCENTITY_REBINDCOMPOSITIONS_OFFSET UNITYSDK_OFFSET(0xD90470)
#define MXUNDERCOVER_UCENTITY_GETMODEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITY_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD910E0)
#define MXUNDERCOVER_UCENTITY_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD8A230)
#define MXUNDERCOVER_UCENTITY_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xD91100)
#define MXUNDERCOVER_UCENTITY_GATHERHIGHLIGHTMATERIALINFO_OFFSET UNITYSDK_OFFSET(0xD8FA80)
#define MXUNDERCOVER_UCENTITY_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xD91110)
#define MXUNDERCOVER_UCENTITY_SETDITHER_OFFSET UNITYSDK_OFFSET(0xD915C0)
#define MXUNDERCOVER_UCENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD89340)
#define MXUNDERCOVER_UCENTITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD91700)
#define MXUNDERCOVER_UCENTITY__REBINDCOMPOSITIONS_G__GETMONOCOMPOSITIONS|44_0_OFFSET UNITYSDK_OFFSET(0xD90F80)
#define MXUNDERCOVER_UCENTITY__SETDITHER_G__CO_SETDITHER|51_0_OFFSET UNITYSDK_OFFSET(0xD91690)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCEntity_TypeDefinitionIndex = 9714;

	class UCEntity : public Il2CppObject
	{
	public:
		::System::Int32 ShaderPropertyCodeAddColor; // 0x0
		::System::Int32 ShaderPropertyCodeMultiplyColor; // 0x4
		::System::Int32 ShaderPropertyCodeAddRimColor; // 0x8
		::System::String* ShaderKeywordDither; // 0x10
		::System::Int32 ShaderPropertyDitherThreshold; // 0x18
		::System::Int32 UniqueId; // 0x18
		Il2CppObject* EntityCompositions; // 0x20
		Il2CppObject* EntityMonoCompositions; // 0x28
		::MXUnderCover::UCEntityModel* _Model_k__BackingField; // 0x30
		::System::Boolean _Initialized_k__BackingField; // 0x38
		::MXUnderCover::UCEntityStatus* _Status_k__BackingField; // 0x3C
		::System::Single _SkillStunAnimDuration_k__BackingField; // 0x40
		Il2CppObject* materials; // 0x48
		Il2CppObject* highlightMaterialInfos; // 0x50

		::MXUnderCover::UCEntityTypes* get_Type()
		{
			return ((::MXUnderCover::UCEntityTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GET_TYPE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntityModel* get_Model()
		{
			return ((::MXUnderCover::UCEntityModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GET_MODEL_OFFSET))(nullptr);
		}

		::System::Void set_Model(::MXUnderCover::UCEntityModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntityModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_SET_MODEL_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GET_STAGE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCSectionVisual* get_SectionVisual()
		{
			return ((::MXUnderCover::UCSectionVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GET_SECTIONVISUAL_OFFSET))(nullptr);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_Initialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_SET_INITIALIZED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AllCompositions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GET_ALLCOMPOSITIONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Interactions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GET_INTERACTIONS_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntityStatus* get_Status()
		{
			return ((::MXUnderCover::UCEntityStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GET_STATUS_OFFSET))(nullptr);
		}

		::System::Void set_Status(::MXUnderCover::UCEntityStatus* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntityStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_SET_STATUS_OFFSET))(arg, nullptr);
		}

		::System::Single get_SkillStunAnimDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GET_SKILLSTUNANIMDURATION_OFFSET))(nullptr);
		}

		::System::Void set_SkillStunAnimDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_SET_SKILLSTUNANIMDURATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindComposition()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_FINDCOMPOSITION_OFFSET))(nullptr);
		}

		Il2CppObject* FindCompositions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_FINDCOMPOSITIONS_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntityModel* ExtractModel(::MXUnderCover::UCStage* arg, ::MXUnderCover::UCSectionModel* arg2)
		{
			return ((::MXUnderCover::UCEntityModel*(*)(::MXUnderCover::UCStage*, ::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_EXTRACTMODEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntityModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntityModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnInitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_ONINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void RebindCompositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_REBINDCOMPOSITIONS_OFFSET))(nullptr);
		}

		Il2CppObject* GetModel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GETMODEL_OFFSET))(nullptr);
		}

		::System::Void SyncToModel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Void SyncToModel(::MXUnderCover::UCEntityModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntityModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_SYNCTOMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void ManualUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_MANUALUPDATE_OFFSET))(nullptr);
		}

		::System::Void GatherHighlightMaterialInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_GATHERHIGHLIGHTMATERIALINFO_OFFSET))(nullptr);
		}

		::System::Void SetHighlight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_SETHIGHLIGHT_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* SetDither()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_SETDITHER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _RebindCompositions_g__GetMonoCompositions|44_0(::UnityEngine::Transform* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::UnityEngine::Transform*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY__REBINDCOMPOSITIONS_G__GETMONOCOMPOSITIONS|44_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* _SetDither_g__co_SetDither|51_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITY__SETDITHER_G__CO_SETDITHER|51_0_OFFSET))(nullptr);
		}

	};
}

