#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_TYPEFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x923D770)
#define SYSTEM_REFLECTION_TYPEFILTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9242790)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeFilter_TypeDefinitionIndex = 24892;

	class TypeFilter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEFILTER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

