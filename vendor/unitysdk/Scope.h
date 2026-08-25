#pragma once
#include "unitysdk.h"

#define SCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x972B210)
#define SCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x972B670)
#define SCOPE_ISALLOWEDTYPE_OFFSET UNITYSDK_OFFSET(0x972ADC0)
#define SCOPE_ISTYPEUNCONDITIONALLYALLOWED_OFFSET UNITYSDK_OFFSET(0x972B750)
#define SCOPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x972B950)

	inline static constexpr unsigned int Scope_TypeDefinitionIndex = 32186;

	class Scope : public Il2CppObject
	{
	public:
		Il2CppObject* s_allowedTypes; // 0x0
		Il2CppObject* m_allowedTypes; // 0x10
		Scope* m_previousScope; // 0x18

		::System::Void .ctor(Scope* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Scope*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCOPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCOPE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean IsAllowedType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SCOPE_ISALLOWEDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTypeUnconditionallyAllowed(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SCOPE_ISTYPEUNCONDITIONALLYALLOWED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCOPE_.CCTOR_OFFSET))(nullptr);
		}

	};

