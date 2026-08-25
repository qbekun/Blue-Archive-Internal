#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class Tess; }
namespace UnityEngine::Rendering::Universal::LibTessDotNet { class ElementType; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering::Universal { class Light2D; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_CHECKFORCHANGE_OFFSET UNITYSDK_OFFSET(0xA011470)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_CHECKFORCHANGE_OFFSET UNITYSDK_OFFSET(0xA011460)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_CHECKFORCHANGE_OFFSET UNITYSDK_OFFSET(0xA011440)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_CHECKFORCHANGE_OFFSET UNITYSDK_OFFSET(0xA015960)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_TESSELLATE_OFFSET UNITYSDK_OFFSET(0xA015970)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_TESTPIVOT_OFFSET UNITYSDK_OFFSET(0xA0161A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_DEGENERATEPIVOTS_OFFSET UNITYSDK_OFFSET(0xA016250)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_SORTPIVOTS_OFFSET UNITYSDK_OFFSET(0xA016690)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_FIXPIVOTS_OFFSET UNITYSDK_OFFSET(0xA0168A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GETOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0xA016C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_TRANSFERTOMESH_OFFSET UNITYSDK_OFFSET(0xA0170D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GENERATESHAPEMESH_OFFSET UNITYSDK_OFFSET(0xA011480)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GENERATEPARAMETRICMESH_OFFSET UNITYSDK_OFFSET(0xA012400)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GENERATESPRITEMESH_OFFSET UNITYSDK_OFFSET(0xA013690)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GETSHAPEPATHHASH_OFFSET UNITYSDK_OFFSET(0xA011380)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightUtility_TypeDefinitionIndex = 32477;

	class LightUtility : public Il2CppObject
	{
	public:
		::System::Boolean CheckForChange(LightType* arg, LightType&* arg)
		{
			return (return (::System::Boolean(*)(LightType*, LightType&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_CHECKFORCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckForChange(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_CHECKFORCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckForChange(::System::Single arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_CHECKFORCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckForChange(::System::Boolean arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_CHECKFORCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Tessellate(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess* arg, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType* arg, Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::Color* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Color*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_TESSELLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TestPivot(Il2CppObject* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_TESTPIVOT_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* DegeneratePivots(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_DEGENERATEPIVOTS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SortPivots(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_SORTPIVOTS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FixPivots(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_FIXPIVOTS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetOutlinePath(::Il2CppArray<::System::Object*>* arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GETOUTLINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TransferToMesh(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::Light2D* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::Int32, ::UnityEngine::Rendering::Universal::Light2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_TRANSFERTOMESH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Bounds* GenerateShapeMesh(::UnityEngine::Rendering::Universal::Light2D* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::UnityEngine::Rendering::Universal::Light2D*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GENERATESHAPEMESH_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Bounds* GenerateParametricMesh(::UnityEngine::Rendering::Universal::Light2D* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::UnityEngine::Rendering::Universal::Light2D*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GENERATEPARAMETRICMESH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Bounds* GenerateSpriteMesh(::UnityEngine::Rendering::Universal::Light2D* arg, ::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::UnityEngine::Rendering::Universal::Light2D*, ::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GENERATESPRITEMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetShapePathHash(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTUTILITY_GETSHAPEPATHHASH_OFFSET))(arg, nullptr);
		}

	};
}

