#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_UIELEMENTS_LOADRESOURCEFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA321140)
#define UNITYENGINE_UIELEMENTS_LOADRESOURCEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA321210)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int LoadResourceFunction_TypeDefinitionIndex = 30135;

	class LoadResourceFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LOADRESOURCEFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Object* Invoke(::System::String* str, ::System::Type* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LOADRESOURCEFUNCTION_INVOKE_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

