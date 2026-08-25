#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class Vec3; }
namespace UnityEngine::Rendering::Universal::LibTessDotNet { class Vec3&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA097300)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0973B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_DOT_OFFSET UNITYSDK_OFFSET(0xA097420)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA097450)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA097460)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_NEG_OFFSET UNITYSDK_OFFSET(0xA097520)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_LONGAXIS_OFFSET UNITYSDK_OFFSET(0xA097540)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_SUB_OFFSET UNITYSDK_OFFSET(0xA097630)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA097660)

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Vec3_TypeDefinitionIndex = 32824;

	class Vec3 : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* Zero; // 0x0
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18

		::System::Void Normalize(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Item(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Dot(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&* arg, ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&*, ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_DOT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Neg(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_NEG_OFFSET))(arg, nullptr);
		}

		::System::Int32 LongAxis(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_LONGAXIS_OFFSET))(arg, nullptr);
		}

		::System::Void Sub(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&* arg, ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&* arg, ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&*, ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&*, ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_SUB_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_VEC3_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

	};
}

