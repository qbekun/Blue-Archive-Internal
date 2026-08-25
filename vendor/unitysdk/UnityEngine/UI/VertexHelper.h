#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class UIVertex&; }
namespace UnityEngine { class UIVertex; }
namespace UnityEngine { class Color32; }

#define UNITYENGINE_UI_VERTEXHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA487DD0)
#define UNITYENGINE_UI_VERTEXHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA487DE0)
#define UNITYENGINE_UI_VERTEXHELPER_INITIALIZELISTIFREQUIRED_OFFSET UNITYSDK_OFFSET(0xA488020)
#define UNITYENGINE_UI_VERTEXHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA488210)
#define UNITYENGINE_UI_VERTEXHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA471BE0)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTVERTCOUNT_OFFSET UNITYSDK_OFFSET(0xA488480)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA4884C0)
#define UNITYENGINE_UI_VERTEXHELPER_POPULATEUIVERTEX_OFFSET UNITYSDK_OFFSET(0xA488500)
#define UNITYENGINE_UI_VERTEXHELPER_SETUIVERTEX_OFFSET UNITYSDK_OFFSET(0xA4886B0)
#define UNITYENGINE_UI_VERTEXHELPER_FILLMESH_OFFSET UNITYSDK_OFFSET(0xA488860)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET UNITYSDK_OFFSET(0xA4889C0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET UNITYSDK_OFFSET(0xA488E40)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET UNITYSDK_OFFSET(0xA471D00)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET UNITYSDK_OFFSET(0xA488F80)
#define UNITYENGINE_UI_VERTEXHELPER_ADDTRIANGLE_OFFSET UNITYSDK_OFFSET(0xA471E70)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXQUAD_OFFSET UNITYSDK_OFFSET(0xA484190)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0xA489040)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET UNITYSDK_OFFSET(0xA4890F0)
#define UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0xA489150)
#define UNITYENGINE_UI_VERTEXHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4891B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int VertexHelper_TypeDefinitionIndex = 34866;

	class VertexHelper : public Il2CppObject
	{
	public:
		Il2CppObject* m_Positions; // 0x10
		Il2CppObject* m_Colors; // 0x18
		Il2CppObject* m_Uv0S; // 0x20
		Il2CppObject* m_Uv1S; // 0x28
		Il2CppObject* m_Uv2S; // 0x30
		Il2CppObject* m_Uv3S; // 0x38
		Il2CppObject* m_Normals; // 0x40
		Il2CppObject* m_Tangents; // 0x48
		Il2CppObject* m_Indices; // 0x50
		::UnityEngine::Vector4* s_DefaultTangent; // 0x0
		::UnityEngine::Vector3* s_DefaultNormal; // 0x10
		::System::Boolean m_ListsInitalized; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeListIfRequired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_INITIALIZELISTIFREQUIRED_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_currentVertCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTVERTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_currentIndexCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTINDEXCOUNT_OFFSET))(nullptr);
		}

		::System::Void PopulateUIVertex(::UnityEngine::UIVertex&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIVertex&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_POPULATEUIVERTEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetUIVertex(::UnityEngine::UIVertex* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIVertex*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_SETUIVERTEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FillMesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_FILLMESH_OFFSET))(arg, nullptr);
		}

		::System::Void AddVert(::UnityEngine::Vector3* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Color32*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::UnityEngine::Vector3*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddVert(::UnityEngine::Vector3* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Color32*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::UnityEngine::Vector3*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddVert(::UnityEngine::Vector3* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Color32*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddVert(::UnityEngine::UIVertex* arg)
		{
			((::System::Void(*)(::UnityEngine::UIVertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET))(arg, nullptr);
		}

		::System::Void AddTriangle(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDTRIANGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddUIVertexQuad(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXQUAD_OFFSET))(arg, nullptr);
		}

		::System::Void AddUIVertexStream(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXSTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIVertexTriangleStream(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void GetUIVertexStream(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

