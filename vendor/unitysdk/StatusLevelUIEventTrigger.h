#pragma once
#include "unitysdk.h"

#define STATUSLEVELUIEVENTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EA890)

	inline static constexpr unsigned int StatusLevelUIEventTrigger_TypeDefinitionIndex = 6411;

	class StatusLevelUIEventTrigger : public Il2CppObject
	{
	public:
		::System::Int32 statusLevel; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSLEVELUIEVENTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};

