#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class INumberHandler; }

#define RUNTIMEINSPECTORNAMESPACE_NUMBERHANDLERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9581C00)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERHANDLERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581CA0)
#define RUNTIMEINSPECTORNAMESPACE_NUMBERHANDLERS_GET_OFFSET UNITYSDK_OFFSET(0x9573160)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int NumberHandlers_TypeDefinitionIndex = 35709;

	class NumberHandlers : public Il2CppObject
	{
	public:
		Il2CppObject* handlers; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERHANDLERS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERHANDLERS_.CTOR_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::INumberHandler* Get(::System::Type* arg)
		{
			return (return (::RuntimeInspectorNamespace::INumberHandler*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_NUMBERHANDLERS_GET_OFFSET))(arg, nullptr);
		}

	};
}

