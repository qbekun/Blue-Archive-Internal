#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class WindingRule; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTCCW_OFFSET UNITYSDK_OFFSET(0xA094E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTL1DIST_OFFSET UNITYSDK_OFFSET(0xA094E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTEQ_OFFSET UNITYSDK_OFFSET(0xA094F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSSIGN_OFFSET UNITYSDK_OFFSET(0xA094F60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_ADDWINDING_OFFSET UNITYSDK_OFFSET(0xA094FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0xA095010)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEGOESRIGHT_OFFSET UNITYSDK_OFFSET(0xA095070)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEGOESLEFT_OFFSET UNITYSDK_OFFSET(0xA095120)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_SWAP_OFFSET UNITYSDK_OFFSET(0xA095180)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGESIGN_OFFSET UNITYSDK_OFFSET(0xA0951B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_ISWINDINGINSIDE_OFFSET UNITYSDK_OFFSET(0xA095220)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEINTERSECT_OFFSET UNITYSDK_OFFSET(0xA0952C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSLEQ_OFFSET UNITYSDK_OFFSET(0xA095C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSEVAL_OFFSET UNITYSDK_OFFSET(0xA095C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEEVAL_OFFSET UNITYSDK_OFFSET(0xA095BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTLEQ_OFFSET UNITYSDK_OFFSET(0xA0950D0)

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Geom_TypeDefinitionIndex = 32822;

	class Geom : public Il2CppObject
	{
	public:
		::System::Boolean VertCCW(Vertex* arg, Vertex* arg, Vertex* arg)
		{
			return (return (::System::Boolean(*)(Vertex*, Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTCCW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single VertL1dist(Vertex* arg, Vertex* arg)
		{
			return (return (::System::Single(*)(Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTL1DIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean VertEq(Vertex* arg, Vertex* arg)
		{
			return (return (::System::Boolean(*)(Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTEQ_OFFSET))(arg, arg, nullptr);
		}

		::System::Single TransSign(Vertex* arg, Vertex* arg, Vertex* arg)
		{
			return (return (::System::Single(*)(Vertex*, Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSSIGN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddWinding(Edge* arg, Edge* arg)
		{
			((::System::Void(*)(Edge*, Edge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_ADDWINDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Interpolate(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_INTERPOLATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean EdgeGoesRight(Edge* arg)
		{
			return (return (::System::Boolean(*)(Edge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEGOESRIGHT_OFFSET))(arg, nullptr);
		}

		::System::Boolean EdgeGoesLeft(Edge* arg)
		{
			return (return (::System::Boolean(*)(Edge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEGOESLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void Swap(Vertex&* arg, Vertex&* arg)
		{
			((::System::Void(*)(Vertex&*, Vertex&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_SWAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Single EdgeSign(Vertex* arg, Vertex* arg, Vertex* arg)
		{
			return (return (::System::Single(*)(Vertex*, Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGESIGN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsWindingInside(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_ISWINDINGINSIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EdgeIntersect(Vertex* arg, Vertex* arg, Vertex* arg, Vertex* arg, Vertex* arg)
		{
			((::System::Void(*)(Vertex*, Vertex*, Vertex*, Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEINTERSECT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TransLeq(Vertex* arg, Vertex* arg)
		{
			return (return (::System::Boolean(*)(Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSLEQ_OFFSET))(arg, arg, nullptr);
		}

		::System::Single TransEval(Vertex* arg, Vertex* arg, Vertex* arg)
		{
			return (return (::System::Single(*)(Vertex*, Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_TRANSEVAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single EdgeEval(Vertex* arg, Vertex* arg, Vertex* arg)
		{
			return (return (::System::Single(*)(Vertex*, Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_EDGEEVAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VertLeq(Vertex* arg, Vertex* arg)
		{
			return (return (::System::Boolean(*)(Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_GEOM_VERTLEQ_OFFSET))(arg, arg, nullptr);
		}

	};
}

