#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class DecalEntity; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::Rendering::Universal { class DecalScaleMode; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DECALOFFSET_OFFSET UNITYSDK_OFFSET(0xA03BC30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ADD_ONDECALREMOVE_OFFSET UNITYSDK_OFFSET(0xA03BC60)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_REMOVE_ONDECALADD_OFFSET UNITYSDK_OFFSET(0xA03BD20)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA03BDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_FADEFACTOR_OFFSET UNITYSDK_OFFSET(0xA03BF00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_EFFECTIVESCALE_OFFSET UNITYSDK_OFFSET(0xA03C020)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_FADESCALE_OFFSET UNITYSDK_OFFSET(0xA03C0A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_FADEFACTOR_OFFSET UNITYSDK_OFFSET(0xA03C0B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA03C0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ISVALID_OFFSET UNITYSDK_OFFSET(0xA03C100)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_FADESCALE_OFFSET UNITYSDK_OFFSET(0xA03C220)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_DRAWDISTANCE_OFFSET UNITYSDK_OFFSET(0xA03C260)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_UVBIAS_OFFSET UNITYSDK_OFFSET(0xA03C280)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_SCALEMODE_OFFSET UNITYSDK_OFFSET(0xA03C290)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DRAWDISTANCE_OFFSET UNITYSDK_OFFSET(0xA03C2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA03C2B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ADD_ONDECALMATERIALCHANGE_OFFSET UNITYSDK_OFFSET(0xA03C2C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_STARTANGLEFADE_OFFSET UNITYSDK_OFFSET(0xA03C380)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA03C390)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_INITMATERIAL_OFFSET UNITYSDK_OFFSET(0xA03BEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xA03C3B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA03C3D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_REMOVE_ONDECALMATERIALCHANGE_OFFSET UNITYSDK_OFFSET(0xA03C420)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DECALENTITY_OFFSET UNITYSDK_OFFSET(0xA03C4E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_ENDANGLEFADE_OFFSET UNITYSDK_OFFSET(0xA03C4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA03C530)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_DECALENTITY_OFFSET UNITYSDK_OFFSET(0xA03C590)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_REMOVE_ONDECALREMOVE_OFFSET UNITYSDK_OFFSET(0xA03C5A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ADD_ONDECALPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xA03C660)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0xA03C720)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA03C740)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_REMOVE_ONDECALPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xA03C780)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA03BF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_UVSCALEBIAS_OFFSET UNITYSDK_OFFSET(0xA03C840)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_SCALEMODE_OFFSET UNITYSDK_OFFSET(0xA03C850)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_UVBIAS_OFFSET UNITYSDK_OFFSET(0xA03C860)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03C870)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_UVSCALE_OFFSET UNITYSDK_OFFSET(0xA03C8B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DECALSIZE_OFFSET UNITYSDK_OFFSET(0xA03C8C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA03C8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0xA03C910)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_STARTANGLEFADE_OFFSET UNITYSDK_OFFSET(0xA03C930)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_UVSCALE_OFFSET UNITYSDK_OFFSET(0xA03C960)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_ENDANGLEFADE_OFFSET UNITYSDK_OFFSET(0xA03C970)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ADD_ONDECALADD_OFFSET UNITYSDK_OFFSET(0xA03C980)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalProjector_TypeDefinitionIndex = 32600;

	class DecalProjector : public Il2CppObject
	{
	public:
		DecalProjectorAction* onDecalAdd; // 0x0
		DecalProjectorAction* onDecalRemove; // 0x8
		DecalProjectorAction* onDecalPropertyChange; // 0x10
		DecalProjectorAction* onDecalMaterialChange; // 0x18
		::UnityEngine::Material* _defaultMaterial_k__BackingField; // 0x20
		::UnityEngine::Rendering::Universal::DecalEntity* _decalEntity_k__BackingField; // 0x18
		::UnityEngine::Material* m_Material; // 0x20
		::System::Single m_DrawDistance; // 0x28
		::System::Single m_FadeScale; // 0x2C
		::System::Single m_StartAngleFade; // 0x30
		::System::Single m_EndAngleFade; // 0x34
		::UnityEngine::Vector2* m_UVScale; // 0x38
		::UnityEngine::Vector2* m_UVBias; // 0x40
		::UnityEngine::Rendering::Universal::DecalScaleMode* m_ScaleMode; // 0x48
		::UnityEngine::Vector3* m_Offset; // 0x4C
		::UnityEngine::Vector3* m_Size; // 0x58
		::System::Single m_FadeFactor; // 0x64
		::UnityEngine::Material* m_OldMaterial; // 0x68

		::UnityEngine::Vector3* get_decalOffset()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DECALOFFSET_OFFSET))(nullptr);
		}

		::System::Void add_onDecalRemove(DecalProjectorAction* arg)
		{
			((::System::Void(*)(DecalProjectorAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ADD_ONDECALREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDecalAdd(DecalProjectorAction* arg)
		{
			((::System::Void(*)(DecalProjectorAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_REMOVE_ONDECALADD_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_fadeFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_FADEFACTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_effectiveScale()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_EFFECTIVESCALE_OFFSET))(nullptr);
		}

		::System::Single get_fadeScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_FADESCALE_OFFSET))(nullptr);
		}

		::System::Single get_fadeFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_FADEFACTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_ISSUPPORTED_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ISVALID_OFFSET))(nullptr);
		}

		::System::Void set_fadeScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_FADESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void set_drawDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_DRAWDISTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_uvBias()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_UVBIAS_OFFSET))(nullptr);
		}

		::System::Void set_scaleMode(::UnityEngine::Rendering::Universal::DecalScaleMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalScaleMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_SCALEMODE_OFFSET))(arg, nullptr);
		}

		::System::Single get_drawDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DRAWDISTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Void add_onDecalMaterialChange(DecalProjectorAction* arg)
		{
			((::System::Void(*)(DecalProjectorAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ADD_ONDECALMATERIALCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Single get_startAngleFade()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_STARTANGLEFADE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_size()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void InitMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_INITMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_DEFAULTMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDecalMaterialChange(DecalProjectorAction* arg)
		{
			((::System::Void(*)(DecalProjectorAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_REMOVE_ONDECALMATERIALCHANGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DecalEntity* get_decalEntity()
		{
			return (return (::UnityEngine::Rendering::Universal::DecalEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DECALENTITY_OFFSET))(nullptr);
		}

		::System::Void set_endAngleFade(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_ENDANGLEFADE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_decalEntity(::UnityEngine::Rendering::Universal::DecalEntity* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_DECALENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onDecalRemove(DecalProjectorAction* arg)
		{
			((::System::Void(*)(DecalProjectorAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_REMOVE_ONDECALREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void add_onDecalPropertyChange(DecalProjectorAction* arg)
		{
			((::System::Void(*)(DecalProjectorAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ADD_ONDECALPROPERTYCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_pivot(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_PIVOT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_defaultMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DEFAULTMATERIAL_OFFSET))(nullptr);
		}

		::System::Void remove_onDecalPropertyChange(DecalProjectorAction* arg)
		{
			((::System::Void(*)(DecalProjectorAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_REMOVE_ONDECALPROPERTYCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ONVALIDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_uvScaleBias()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_UVSCALEBIAS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DecalScaleMode* get_scaleMode()
		{
			return (return (::UnityEngine::Rendering::Universal::DecalScaleMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_SCALEMODE_OFFSET))(nullptr);
		}

		::System::Void set_uvBias(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_UVBIAS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_uvScale(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_UVSCALE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_decalSize()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_DECALSIZE_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_pivot()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_PIVOT_OFFSET))(nullptr);
		}

		::System::Void set_startAngleFade(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_SET_STARTANGLEFADE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_uvScale()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_UVSCALE_OFFSET))(nullptr);
		}

		::System::Single get_endAngleFade()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_GET_ENDANGLEFADE_OFFSET))(nullptr);
		}

		::System::Void add_onDecalAdd(DecalProjectorAction* arg)
		{
			((::System::Void(*)(DecalProjectorAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALPROJECTOR_ADD_ONDECALADD_OFFSET))(arg, nullptr);
		}

	};
}

