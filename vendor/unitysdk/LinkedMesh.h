#pragma once
#include "unitysdk.h"

namespace Spine { class MeshAttachment; }

#define LINKEDMESH_.CTOR_OFFSET UNITYSDK_OFFSET(0x95DDAE0)

	inline static constexpr unsigned int LinkedMesh_TypeDefinitionIndex = 35063;

	class LinkedMesh : public Il2CppObject
	{
	public:
		::System::String* parent; // 0x10
		::System::String* skin; // 0x18
		::System::Int32 slotIndex; // 0x20
		::Spine::MeshAttachment* mesh; // 0x28
		::System::Boolean inheritTimelines; // 0x30

		::System::Void .ctor(::Spine::MeshAttachment* arg, ::System::String* str, ::System::Int32 arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::MeshAttachment*, ::System::String*, ::System::Int32, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LINKEDMESH_.CTOR_OFFSET))(arg, str, arg, str, arg, nullptr);
		}

	};

