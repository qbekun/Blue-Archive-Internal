#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class LineTextureMode; }
namespace UnityEngine { class LineAlignment; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Color&; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_TRAILRENDERER_GET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F5980)
#define UNITYENGINE_TRAILRENDERER_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA1F5A00)
#define UNITYENGINE_TRAILRENDERER_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA1F5A40)
#define UNITYENGINE_TRAILRENDERER_GET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F5A90)
#define UNITYENGINE_TRAILRENDERER_SET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F5AD0)
#define UNITYENGINE_TRAILRENDERER_GET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F5B20)
#define UNITYENGINE_TRAILRENDERER_SET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F5B60)
#define UNITYENGINE_TRAILRENDERER_GET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA1F5BB0)
#define UNITYENGINE_TRAILRENDERER_SET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA1F5BF0)
#define UNITYENGINE_TRAILRENDERER_GET_AUTODESTRUCT_OFFSET UNITYSDK_OFFSET(0xA1F5C40)
#define UNITYENGINE_TRAILRENDERER_SET_AUTODESTRUCT_OFFSET UNITYSDK_OFFSET(0xA1F5C80)
#define UNITYENGINE_TRAILRENDERER_GET_EMITTING_OFFSET UNITYSDK_OFFSET(0xA1F5CC0)
#define UNITYENGINE_TRAILRENDERER_SET_EMITTING_OFFSET UNITYSDK_OFFSET(0xA1F5D00)
#define UNITYENGINE_TRAILRENDERER_GET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0xA1F5D40)
#define UNITYENGINE_TRAILRENDERER_SET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0xA1F5D80)
#define UNITYENGINE_TRAILRENDERER_GET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0xA1F5DC0)
#define UNITYENGINE_TRAILRENDERER_SET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0xA1F5E00)
#define UNITYENGINE_TRAILRENDERER_GET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1F5E40)
#define UNITYENGINE_TRAILRENDERER_SET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1F5E80)
#define UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA1F5ED0)
#define UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA1F5F60)
#define UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0xA1F5FE0)
#define UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0xA1F6070)
#define UNITYENGINE_TRAILRENDERER_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA1F59C0)
#define UNITYENGINE_TRAILRENDERER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xA1F60F0)
#define UNITYENGINE_TRAILRENDERER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA1F6190)
#define UNITYENGINE_TRAILRENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0xA1F6250)
#define UNITYENGINE_TRAILRENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0xA1F6290)
#define UNITYENGINE_TRAILRENDERER_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0xA1F62E0)
#define UNITYENGINE_TRAILRENDERER_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0xA1F6320)
#define UNITYENGINE_TRAILRENDERER_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0xA1F6360)
#define UNITYENGINE_TRAILRENDERER_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0xA1F63A0)
#define UNITYENGINE_TRAILRENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA1F63E0)
#define UNITYENGINE_TRAILRENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA1F6420)
#define UNITYENGINE_TRAILRENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA1F6460)
#define UNITYENGINE_TRAILRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0xA1F64A0)
#define UNITYENGINE_TRAILRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0xA1F6510)
#define UNITYENGINE_TRAILRENDERER_GET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0xA1F6560)
#define UNITYENGINE_TRAILRENDERER_SET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0xA1F65E0)
#define UNITYENGINE_TRAILRENDERER_GET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0xA1F6660)
#define UNITYENGINE_TRAILRENDERER_SET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0xA1F66E0)
#define UNITYENGINE_TRAILRENDERER_GETWIDTHCURVECOPY_OFFSET UNITYSDK_OFFSET(0xA1F65A0)
#define UNITYENGINE_TRAILRENDERER_SETWIDTHCURVE_OFFSET UNITYSDK_OFFSET(0xA1F6620)
#define UNITYENGINE_TRAILRENDERER_GETCOLORGRADIENTCOPY_OFFSET UNITYSDK_OFFSET(0xA1F66A0)
#define UNITYENGINE_TRAILRENDERER_SETCOLORGRADIENT_OFFSET UNITYSDK_OFFSET(0xA1F6720)
#define UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F6760)
#define UNITYENGINE_TRAILRENDERER_GETVISIBLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F67A0)
#define UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F67E0)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0xA1F6820)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F68A0)
#define UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F68E0)
#define UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F69C0)
#define UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F6A60)
#define UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F6B40)
#define UNITYENGINE_TRAILRENDERER_GETVISIBLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F6BE0)
#define UNITYENGINE_TRAILRENDERER_GETVISIBLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F6CC0)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F6D60)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F6E40)
#define UNITYENGINE_TRAILRENDERER_SETPOSITIONSWITHNATIVECONTAINER_OFFSET UNITYSDK_OFFSET(0xA1F6970)
#define UNITYENGINE_TRAILRENDERER_GETPOSITIONSWITHNATIVECONTAINER_OFFSET UNITYSDK_OFFSET(0xA1F6AF0)
#define UNITYENGINE_TRAILRENDERER_GETVISIBLEPOSITIONSWITHNATIVECONTAINER_OFFSET UNITYSDK_OFFSET(0xA1F6C70)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITIONSWITHNATIVECONTAINER_OFFSET UNITYSDK_OFFSET(0xA1F6DF0)
#define UNITYENGINE_TRAILRENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F6EE0)
#define UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F5F20)
#define UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F5FA0)
#define UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F6030)
#define UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F60B0)
#define UNITYENGINE_TRAILRENDERER_SETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F6140)
#define UNITYENGINE_TRAILRENDERER_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F6200)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F6860)

namespace UnityEngine
{
	inline static constexpr unsigned int TrailRenderer_TypeDefinitionIndex = 31008;

	class TrailRenderer : public Il2CppObject
	{
	public:
		::System::Int32 get_numPositions()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_NUMPOSITIONS_OFFSET))(nullptr);
		}

		::System::Single get_time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_startWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_STARTWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_startWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_STARTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_endWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ENDWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_endWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ENDWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_widthMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_WIDTHMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_widthMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_WIDTHMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_autodestruct()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_AUTODESTRUCT_OFFSET))(nullptr);
		}

		::System::Void set_autodestruct(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_AUTODESTRUCT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_emitting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_EMITTING_OFFSET))(nullptr);
		}

		::System::Void set_emitting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_EMITTING_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_numCornerVertices()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_NUMCORNERVERTICES_OFFSET))(nullptr);
		}

		::System::Void set_numCornerVertices(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_NUMCORNERVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_numCapVertices()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_NUMCAPVERTICES_OFFSET))(nullptr);
		}

		::System::Void set_numCapVertices(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_NUMCAPVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Single get_minVertexDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_MINVERTEXDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_minVertexDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_MINVERTEXDISTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_startColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_startColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_endColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_endColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_positionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_POSITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetPosition(::System::Int32 arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetPosition(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_shadowBias()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_SHADOWBIAS_OFFSET))(nullptr);
		}

		::System::Void set_shadowBias(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_SHADOWBIAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_generateLightingData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_GENERATELIGHTINGDATA_OFFSET))(nullptr);
		}

		::System::Void set_generateLightingData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_GENERATELIGHTINGDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LineTextureMode* get_textureMode()
		{
			return (return (::UnityEngine::LineTextureMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_TEXTUREMODE_OFFSET))(nullptr);
		}

		::System::Void set_textureMode(::UnityEngine::LineTextureMode* arg)
		{
			((::System::Void(*)(::UnityEngine::LineTextureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_TEXTUREMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LineAlignment* get_alignment()
		{
			return (return (::UnityEngine::LineAlignment*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ALIGNMENT_OFFSET))(nullptr);
		}

		::System::Void set_alignment(::UnityEngine::LineAlignment* arg)
		{
			((::System::Void(*)(::UnityEngine::LineAlignment*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ALIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_BAKEMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* arg, ::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_BAKEMESH_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::AnimationCurve* get_widthCurve()
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_WIDTHCURVE_OFFSET))(nullptr);
		}

		::System::Void set_widthCurve(::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_WIDTHCURVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Gradient* get_colorGradient()
		{
			return (return (::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_COLORGRADIENT_OFFSET))(nullptr);
		}

		::System::Void set_colorGradient(::UnityEngine::Gradient* arg)
		{
			((::System::Void(*)(::UnityEngine::Gradient*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_COLORGRADIENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationCurve* GetWidthCurveCopy()
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETWIDTHCURVECOPY_OFFSET))(nullptr);
		}

		::System::Void SetWidthCurve(::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETWIDTHCURVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Gradient* GetColorGradientCopy()
		{
			return (return (::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETCOLORGRADIENTCOPY_OFFSET))(nullptr);
		}

		::System::Void SetColorGradient(::UnityEngine::Gradient* arg)
		{
			((::System::Void(*)(::UnityEngine::Gradient*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETCOLORGRADIENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPositions(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetVisiblePositions(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETVISIBLEPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void AddPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void AddPositions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPositions(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPositions(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetVisiblePositions(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETVISIBLEPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetVisiblePositions(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETVISIBLEPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void AddPositions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void AddPositions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositionsWithNativeContainer(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITIONSWITHNATIVECONTAINER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPositionsWithNativeContainer(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITIONSWITHNATIVECONTAINER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetVisiblePositionsWithNativeContainer(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETVISIBLEPOSITIONSWITHNATIVECONTAINER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositionsWithNativeContainer(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITIONSWITHNATIVECONTAINER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_startColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_endColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_endColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetPosition_Injected(::System::Int32 arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPosition_Injected(::System::Int32 arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPosition_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITION_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

