#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_GROUPNEXTATTRIBUTE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9DCEB40)
#define TRIINSPECTOR_GROUPNEXTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEB50)

namespace TriInspector
{
	inline static constexpr unsigned int GroupNextAttribute_TypeDefinitionIndex = 37828;

	class GroupNextAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Path_k__BackingField; // 0x10

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_GROUPNEXTATTRIBUTE_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_GROUPNEXTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

