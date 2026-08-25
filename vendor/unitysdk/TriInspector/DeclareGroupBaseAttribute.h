#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DECLAREGROUPBASEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE410)
#define TRIINSPECTOR_DECLAREGROUPBASEATTRIBUTE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9DCE570)

namespace TriInspector
{
	inline static constexpr unsigned int DeclareGroupBaseAttribute_TypeDefinitionIndex = 37811;

	class DeclareGroupBaseAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Path_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREGROUPBASEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREGROUPBASEATTRIBUTE_GET_PATH_OFFSET))(nullptr);
		}

	};
}

