#pragma once
#include "../unitysdk.h"

namespace Spine { class VertexAttachment; }
namespace Spine { class Slot; }

#define SPINE_VERTEXATTACHMENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x95A95D0)
#define SPINE_VERTEXATTACHMENT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x95A95E0)
#define SPINE_VERTEXATTACHMENT_SET_BONES_OFFSET UNITYSDK_OFFSET(0x95A95F0)
#define SPINE_VERTEXATTACHMENT_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x95A9600)
#define SPINE_VERTEXATTACHMENT_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x95A9610)
#define SPINE_VERTEXATTACHMENT_GET_WORLDVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x95A9620)
#define SPINE_VERTEXATTACHMENT_SET_WORLDVERTICESLENGTH_OFFSET UNITYSDK_OFFSET(0x95A9630)
#define SPINE_VERTEXATTACHMENT_GET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95A9640)
#define SPINE_VERTEXATTACHMENT_SET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95A9650)
#define SPINE_VERTEXATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A6400)
#define SPINE_VERTEXATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A65D0)
#define SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x95A9660)
#define SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x95A78F0)
#define SPINE_VERTEXATTACHMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95A96A0)

namespace Spine
{
	inline static constexpr unsigned int VertexAttachment_TypeDefinitionIndex = 35027;

	class VertexAttachment : public ::Antlr::Runtime::BitSet
	{
	public:
		::System::Int32 nextID; // 0x0
		::System::Object* nextIdLock; // 0x8
		::System::Int32 id; // 0x18
		::Spine::VertexAttachment* timelineAttachment; // 0x20
		::Il2CppArray<::System::Object*>* bones; // 0x28
		::Il2CppArray<::System::Object*>* vertices; // 0x30
		::System::Int32 worldVerticesLength; // 0x38

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_ID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Bones()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_BONES_OFFSET))(nullptr);
		}

		::System::Void set_Bones(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_BONES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Vertices()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_VERTICES_OFFSET))(nullptr);
		}

		::System::Void set_Vertices(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_VERTICES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WorldVerticesLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_WORLDVERTICESLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_WorldVerticesLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_WORLDVERTICESLENGTH_OFFSET))(arg, nullptr);
		}

		::Spine::VertexAttachment* get_TimelineAttachment()
		{
			return (return (::Spine::VertexAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_GET_TIMELINEATTACHMENT_OFFSET))(nullptr);
		}

		::System::Void set_TimelineAttachment(::Spine::VertexAttachment* arg)
		{
			((::System::Void(*)(::Spine::VertexAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_SET_TIMELINEATTACHMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Spine::VertexAttachment* arg)
		{
			((::System::Void(*)(::Spine::VertexAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ComputeWorldVertices(::Spine::Slot* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Spine::Slot*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ComputeWorldVertices(::Spine::Slot* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Spine::Slot*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_COMPUTEWORLDVERTICES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_VERTEXATTACHMENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

