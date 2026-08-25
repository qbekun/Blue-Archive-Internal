#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class RuntimeInspectorButtonAttribute; }

#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x956FB70)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x956BDB0)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_GET_VISIBLEWHENUNINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9572400)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_CALL_OFFSET UNITYSDK_OFFSET(0x956C360)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_GET_ISINITIALIZER_OFFSET UNITYSDK_OFFSET(0x956C170)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_GET_VISIBLEWHENINITIALIZED_OFFSET UNITYSDK_OFFSET(0x95723E0)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_CALLANDRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x956C190)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ExposedMethod_TypeDefinitionIndex = 35691;

	class ExposedMethod : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* method; // 0x10
		::RuntimeInspectorNamespace::RuntimeInspectorButtonAttribute* properties; // 0x18
		::System::Boolean isExtensionMethod; // 0x20

		::System::Void .ctor(::System::Reflection::MethodInfo* arg, ::RuntimeInspectorNamespace::RuntimeInspectorButtonAttribute* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::RuntimeInspectorNamespace::RuntimeInspectorButtonAttribute*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_Label()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_GET_LABEL_OFFSET))(nullptr);
		}

		::System::Boolean get_VisibleWhenUninitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_GET_VISIBLEWHENUNINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Call(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_CALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInitializer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_GET_ISINITIALIZER_OFFSET))(nullptr);
		}

		::System::Boolean get_VisibleWhenInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_GET_VISIBLEWHENINITIALIZED_OFFSET))(nullptr);
		}

		::System::Object* CallAndReturnValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHOD_CALLANDRETURNVALUE_OFFSET))(arg, nullptr);
		}

	};
}

