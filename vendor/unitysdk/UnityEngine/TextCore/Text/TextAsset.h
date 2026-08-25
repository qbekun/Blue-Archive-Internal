#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA2D96B0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xA2D96C0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA2CF9F0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0xA2D61B0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_HASHCODE_OFFSET UNITYSDK_OFFSET(0xA2D96D0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA2D96E0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA2D96F0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_MATERIALHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2D61E0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_MATERIALHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2D9700)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D3D80)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextAsset_TypeDefinitionIndex = 35582;

	class TextAsset : public Il2CppObject
	{
	public:
		::System::String* m_Version; // 0x18
		::System::Int32 m_InstanceID; // 0x20
		::System::Int32 m_HashCode; // 0x24
		::UnityEngine::Material* m_Material; // 0x28
		::System::Int32 m_MaterialHashCode; // 0x30

		::System::String* get_version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_version(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_VERSION_OFFSET))(str, nullptr);
		}

		::System::Int32 get_instanceID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_INSTANCEID_OFFSET))(nullptr);
		}

		::System::Int32 get_hashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_HASHCODE_OFFSET))(nullptr);
		}

		::System::Void set_hashCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_HASHCODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_materialHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_GET_MATERIALHASHCODE_OFFSET))(nullptr);
		}

		::System::Void set_materialHashCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_SET_MATERIALHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

