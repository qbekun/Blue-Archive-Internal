#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class HashFNV1A32; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Vector4&; }

#define UNITYENGINE_RENDERING_HASHFNV1A32_CREATE_OFFSET UNITYSDK_OFFSET(0x9FDC4C0)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x9FDC4D0)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x9FDC4E0)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x9FDC4F0)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x9FDC530)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x9FDC570)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x9FDC600)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x9FDC650)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x9FDC6C0)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET UNITYSDK_OFFSET(0x9FDC740)
#define UNITYENGINE_RENDERING_HASHFNV1A32_GETFUNCHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FDC7A0)
#define UNITYENGINE_RENDERING_HASHFNV1A32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FDC7F0)
#define UNITYENGINE_RENDERING_HASHFNV1A32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FDC800)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HashFNV1A32_TypeDefinitionIndex = 34069;

	class HashFNV1A32 : public Il2CppObject
	{
	public:
		::System::UInt32 k_Prime; // 0x0
		::System::UInt32 k_OffsetBasis; // 0x0
		::System::UInt32 m_Hash; // 0x10

		::UnityEngine::Rendering::HashFNV1A32* Create()
		{
			return (return (::UnityEngine::Rendering::HashFNV1A32*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_CREATE_OFFSET))(nullptr);
		}

		::System::Void Append(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(uint32_t&* arg)
		{
			((::System::Void(*)(uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(float&* arg)
		{
			((::System::Void(*)(float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(double&* arg)
		{
			((::System::Void(*)(double&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void Append(::System::Delegate* arg)
		{
			((::System::Void(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetFuncHashCode(::System::Delegate* arg)
		{
			return (return (::System::Int32(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_GETFUNCHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HASHFNV1A32_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

