#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5FA0)
#define UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5FC0)
#define UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5FE0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int FreeFunctionAttribute_TypeDefinitionIndex = 37890;

	class FreeFunctionAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

