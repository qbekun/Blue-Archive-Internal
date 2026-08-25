#pragma once
#include "../unitysdk.h"

#define SYSTEM_APPCONTEXT_INITIALIZEDEFAULTSWITCHVALUES_OFFSET UNITYSDK_OFFSET(0x938F800)
#define SYSTEM_APPCONTEXT_TRYGETSWITCH_OFFSET UNITYSDK_OFFSET(0x938F9B0)
#define SYSTEM_APPCONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x938FE80)

namespace System
{
	inline static constexpr unsigned int AppContext_TypeDefinitionIndex = 23910;

	class AppContext : public Il2CppObject
	{
	public:
		Il2CppObject* s_switchMap; // 0x0
		::System::Boolean s_defaultsInitialized; // 0x8

		::System::Void InitializeDefaultSwitchValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXT_INITIALIZEDEFAULTSWITCHVALUES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSwitch(::System::String* str, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXT_TRYGETSWITCH_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

