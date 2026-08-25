#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class RuntimeInspectorButtonAttribute; }

#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDEXTENSIONMETHODHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95816E0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ExposedExtensionMethodHolder_TypeDefinitionIndex = 35692;

	class ExposedExtensionMethodHolder : public Il2CppObject
	{
	public:
		::System::Type* extendedType; // 0x10
		::System::Reflection::MethodInfo* method; // 0x18
		::RuntimeInspectorNamespace::RuntimeInspectorButtonAttribute* properties; // 0x20

		::System::Void .ctor(::System::Type* arg, ::System::Reflection::MethodInfo* arg, ::RuntimeInspectorNamespace::RuntimeInspectorButtonAttribute* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Reflection::MethodInfo*, ::RuntimeInspectorNamespace::RuntimeInspectorButtonAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDEXTENSIONMETHODHOLDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

