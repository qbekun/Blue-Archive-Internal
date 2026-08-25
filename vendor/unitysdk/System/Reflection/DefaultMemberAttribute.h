#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_DEFAULTMEMBERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239D90)
#define SYSTEM_REFLECTION_DEFAULTMEMBERATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x9239DC0)

namespace System::Reflection
{
	inline static constexpr unsigned int DefaultMemberAttribute_TypeDefinitionIndex = 24849;

	class DefaultMemberAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _MemberName_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_DEFAULTMEMBERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_MemberName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_DEFAULTMEMBERATTRIBUTE_GET_MEMBERNAME_OFFSET))(nullptr);
		}

	};
}

