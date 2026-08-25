#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class Button; }
namespace RuntimeInspectorNamespace { class ExposedMethod; }

#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_SETBOUNDMETHOD_OFFSET UNITYSDK_OFFSET(0x956BCF0)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_ONDEPTHCHANGED_OFFSET UNITYSDK_OFFSET(0x956BE60)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x956BEE0)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x956C060)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x956C0A0)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_INVOKEMETHOD_OFFSET UNITYSDK_OFFSET(0x956C110)
#define RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x956C460)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ExposedMethodField_TypeDefinitionIndex = 35652;

	class ExposedMethodField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Button* invokeButton; // 0x78
		::RuntimeInspectorNamespace::ExposedMethod* boundMethod; // 0x80

		::System::Void SetBoundMethod(::RuntimeInspectorNamespace::ExposedMethod* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::ExposedMethod*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_SETBOUNDMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void OnDepthChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_ONDEPTHCHANGED_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeMethod()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_INVOKEMETHOD_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPOSEDMETHODFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

	};
}

