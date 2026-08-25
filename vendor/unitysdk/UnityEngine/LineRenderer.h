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

#define UNITYENGINE_LINERENDERER_SETWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F6F00)
#define UNITYENGINE_LINERENDERER_SETCOLORS_OFFSET UNITYSDK_OFFSET(0xA1F7020)
#define UNITYENGINE_LINERENDERER_SETVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA1F7120)
#define UNITYENGINE_LINERENDERER_GET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F71A0)
#define UNITYENGINE_LINERENDERER_SET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F7220)
#define UNITYENGINE_LINERENDERER_GET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F7260)
#define UNITYENGINE_LINERENDERER_SET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F6F80)
#define UNITYENGINE_LINERENDERER_GET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F72A0)
#define UNITYENGINE_LINERENDERER_SET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0xA1F6FD0)
#define UNITYENGINE_LINERENDERER_GET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA1F72E0)
#define UNITYENGINE_LINERENDERER_SET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA1F7320)
#define UNITYENGINE_LINERENDERER_GET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0xA1F7370)
#define UNITYENGINE_LINERENDERER_SET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0xA1F73B0)
#define UNITYENGINE_LINERENDERER_GET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0xA1F73F0)
#define UNITYENGINE_LINERENDERER_SET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0xA1F7430)
#define UNITYENGINE_LINERENDERER_GET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0xA1F7470)
#define UNITYENGINE_LINERENDERER_SET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0xA1F74B0)
#define UNITYENGINE_LINERENDERER_GET_LOOP_OFFSET UNITYSDK_OFFSET(0xA1F74F0)
#define UNITYENGINE_LINERENDERER_SET_LOOP_OFFSET UNITYSDK_OFFSET(0xA1F7530)
#define UNITYENGINE_LINERENDERER_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA1F7570)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA1F70A0)
#define UNITYENGINE_LINERENDERER_GET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0xA1F7640)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0xA1F70E0)
#define UNITYENGINE_LINERENDERER_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA1F71E0)
#define UNITYENGINE_LINERENDERER_SET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA1F7160)
#define UNITYENGINE_LINERENDERER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xA1F7710)
#define UNITYENGINE_LINERENDERER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA1F77B0)
#define UNITYENGINE_LINERENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0xA1F7870)
#define UNITYENGINE_LINERENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0xA1F78B0)
#define UNITYENGINE_LINERENDERER_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0xA1F7900)
#define UNITYENGINE_LINERENDERER_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0xA1F7940)
#define UNITYENGINE_LINERENDERER_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0xA1F7980)
#define UNITYENGINE_LINERENDERER_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0xA1F79C0)
#define UNITYENGINE_LINERENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA1F7A00)
#define UNITYENGINE_LINERENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA1F7A40)
#define UNITYENGINE_LINERENDERER_SIMPLIFY_OFFSET UNITYSDK_OFFSET(0xA1F7A80)
#define UNITYENGINE_LINERENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0xA1F7AD0)
#define UNITYENGINE_LINERENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0xA1F7B40)
#define UNITYENGINE_LINERENDERER_GET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0xA1F7B90)
#define UNITYENGINE_LINERENDERER_SET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0xA1F7C10)
#define UNITYENGINE_LINERENDERER_GET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0xA1F7C90)
#define UNITYENGINE_LINERENDERER_SET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0xA1F7D10)
#define UNITYENGINE_LINERENDERER_GETWIDTHCURVECOPY_OFFSET UNITYSDK_OFFSET(0xA1F7BD0)
#define UNITYENGINE_LINERENDERER_SETWIDTHCURVE_OFFSET UNITYSDK_OFFSET(0xA1F7C50)
#define UNITYENGINE_LINERENDERER_GETCOLORGRADIENTCOPY_OFFSET UNITYSDK_OFFSET(0xA1F7CD0)
#define UNITYENGINE_LINERENDERER_SETCOLORGRADIENT_OFFSET UNITYSDK_OFFSET(0xA1F7D50)
#define UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F7D90)
#define UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F7DD0)
#define UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F7E10)
#define UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F7EF0)
#define UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F7F90)
#define UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F8070)
#define UNITYENGINE_LINERENDERER_SETPOSITIONSWITHNATIVECONTAINER_OFFSET UNITYSDK_OFFSET(0xA1F7EA0)
#define UNITYENGINE_LINERENDERER_GETPOSITIONSWITHNATIVECONTAINER_OFFSET UNITYSDK_OFFSET(0xA1F8020)
#define UNITYENGINE_LINERENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F8110)
#define UNITYENGINE_LINERENDERER_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F75C0)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F7600)
#define UNITYENGINE_LINERENDERER_GET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F7690)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F76D0)
#define UNITYENGINE_LINERENDERER_SETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F7760)
#define UNITYENGINE_LINERENDERER_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F7820)

namespace UnityEngine
{
	inline static constexpr unsigned int LineRenderer_TypeDefinitionIndex = 31009;

	class LineRenderer : public Il2CppObject
	{
	public:
		::System::Void SetWidth(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColors(::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETCOLORS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVertexCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETVERTEXCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_numPositions()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_NUMPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void set_numPositions(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Single get_startWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_STARTWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_startWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_endWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ENDWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_endWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_widthMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_WIDTHMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_widthMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_WIDTHMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_numCornerVertices()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_NUMCORNERVERTICES_OFFSET))(nullptr);
		}

		::System::Void set_numCornerVertices(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMCORNERVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_numCapVertices()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_NUMCAPVERTICES_OFFSET))(nullptr);
		}

		::System::Void set_numCapVertices(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMCAPVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useWorldSpace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_USEWORLDSPACE_OFFSET))(nullptr);
		}

		::System::Void set_useWorldSpace(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_USEWORLDSPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_loop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_LOOP_OFFSET))(nullptr);
		}

		::System::Void set_loop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_LOOP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_startColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_STARTCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_startColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_endColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ENDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_endColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_positionCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_POSITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_positionCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_POSITIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPosition(::System::Int32 arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetPosition(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_shadowBias()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SHADOWBIAS_OFFSET))(nullptr);
		}

		::System::Void set_shadowBias(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SHADOWBIAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_generateLightingData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_GENERATELIGHTINGDATA_OFFSET))(nullptr);
		}

		::System::Void set_generateLightingData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_GENERATELIGHTINGDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LineTextureMode* get_textureMode()
		{
			return (return (::UnityEngine::LineTextureMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_TEXTUREMODE_OFFSET))(nullptr);
		}

		::System::Void set_textureMode(::UnityEngine::LineTextureMode* arg)
		{
			((::System::Void(*)(::UnityEngine::LineTextureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_TEXTUREMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LineAlignment* get_alignment()
		{
			return (return (::UnityEngine::LineAlignment*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ALIGNMENT_OFFSET))(nullptr);
		}

		::System::Void set_alignment(::UnityEngine::LineAlignment* arg)
		{
			((::System::Void(*)(::UnityEngine::LineAlignment*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ALIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Simplify(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SIMPLIFY_OFFSET))(arg, nullptr);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_BAKEMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* arg, ::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_BAKEMESH_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::AnimationCurve* get_widthCurve()
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_WIDTHCURVE_OFFSET))(nullptr);
		}

		::System::Void set_widthCurve(::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_WIDTHCURVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Gradient* get_colorGradient()
		{
			return (return (::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_COLORGRADIENT_OFFSET))(nullptr);
		}

		::System::Void set_colorGradient(::UnityEngine::Gradient* arg)
		{
			((::System::Void(*)(::UnityEngine::Gradient*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_COLORGRADIENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationCurve* GetWidthCurveCopy()
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETWIDTHCURVECOPY_OFFSET))(nullptr);
		}

		::System::Void SetWidthCurve(::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTHCURVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Gradient* GetColorGradientCopy()
		{
			return (return (::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETCOLORGRADIENTCOPY_OFFSET))(nullptr);
		}

		::System::Void SetColorGradient(::UnityEngine::Gradient* arg)
		{
			((::System::Void(*)(::UnityEngine::Gradient*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETCOLORGRADIENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPositions(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPositions(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPositions(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositionsWithNativeContainer(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITIONSWITHNATIVECONTAINER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPositionsWithNativeContainer(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITIONSWITHNATIVECONTAINER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_startColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_STARTCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_endColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ENDCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_endColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetPosition_Injected(::System::Int32 arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPosition_Injected(::System::Int32 arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

