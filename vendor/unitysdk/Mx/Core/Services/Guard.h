#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_SERVICES_GUARD_AGAINSTNULL_OFFSET UNITYSDK_OFFSET(0x1015900)
#define MX_CORE_SERVICES_GUARD_AGAINSTNULL_OFFSET UNITYSDK_OFFSET(0x1015980)

namespace MX::Core::Services
{
	inline static constexpr unsigned int Guard_TypeDefinitionIndex = 12775;

	class Guard : public Il2CppObject
	{
	public:
		::System::Void AgainstNull(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_GUARD_AGAINSTNULL_OFFSET))(arg, nullptr);
		}

		::System::Void AgainstNull(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_GUARD_AGAINSTNULL_OFFSET))(arg, str, nullptr);
		}

	};
}

