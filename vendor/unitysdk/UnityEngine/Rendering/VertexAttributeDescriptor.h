#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VertexAttribute; }
namespace UnityEngine::Rendering { class VertexAttributeFormat; }
namespace UnityEngine::Rendering { class VertexAttributeDescriptor; }

#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA250540)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA250550)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA250560)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA250570)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xA250580)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xA250590)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_STREAM_OFFSET UNITYSDK_OFFSET(0xA2505A0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_STREAM_OFFSET UNITYSDK_OFFSET(0xA2505B0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2505C0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2505E0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2507D0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA250810)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2508A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VertexAttributeDescriptor_TypeDefinitionIndex = 31507;

	class VertexAttributeDescriptor : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::VertexAttribute* _attribute_k__BackingField; // 0x10
		::UnityEngine::Rendering::VertexAttributeFormat* _format_k__BackingField; // 0x14
		::System::Int32 _dimension_k__BackingField; // 0x18
		::System::Int32 _stream_k__BackingField; // 0x1C

		::UnityEngine::Rendering::VertexAttribute* get_attribute()
		{
			return (return (::UnityEngine::Rendering::VertexAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_ATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_attribute(::UnityEngine::Rendering::VertexAttribute* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VertexAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_ATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::VertexAttributeFormat* get_format()
		{
			return (return (::UnityEngine::Rendering::VertexAttributeFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Void set_format(::UnityEngine::Rendering::VertexAttributeFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VertexAttributeFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_FORMAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_dimension()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_DIMENSION_OFFSET))(nullptr);
		}

		::System::Void set_dimension(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_DIMENSION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_stream()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_STREAM_OFFSET))(nullptr);
		}

		::System::Void set_stream(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_STREAM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::VertexAttribute* arg, ::UnityEngine::Rendering::VertexAttributeFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VertexAttribute*, ::UnityEngine::Rendering::VertexAttributeFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::VertexAttributeDescriptor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::VertexAttributeDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

