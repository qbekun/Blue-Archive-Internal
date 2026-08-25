#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define TMPRO_MESH_EXTENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11FC20)
#define TMPRO_MESH_EXTENTS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA11FC30)

namespace TMPro
{
	inline static constexpr unsigned int Mesh_Extents_TypeDefinitionIndex = 33625;

	class Mesh_Extents : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* min; // 0x10
		::UnityEngine::Vector2* max; // 0x18

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MESH_EXTENTS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MESH_EXTENTS_TOSTRING_OFFSET))(nullptr);
		}

	};
}

