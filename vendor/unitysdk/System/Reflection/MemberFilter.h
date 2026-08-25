#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_MEMBERFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x923B720)
#define SYSTEM_REFLECTION_MEMBERFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x923B830)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberFilter_TypeDefinitionIndex = 24862;

	class MemberFilter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::Reflection::MemberInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERFILTER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

