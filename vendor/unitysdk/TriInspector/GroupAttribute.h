#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_GROUPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEB00)
#define TRIINSPECTOR_GROUPATTRIBUTE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9DCEB30)

namespace TriInspector
{
	inline static constexpr unsigned int GroupAttribute_TypeDefinitionIndex = 37827;

	class GroupAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Path_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_GROUPATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_GROUPATTRIBUTE_GET_PATH_OFFSET))(nullptr);
		}

	};
}

