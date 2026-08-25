#pragma once
#include "unitysdk.h"

#define SWITCHCONQUESTMAPCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2355AE0)

	inline static constexpr unsigned int SwitchConquestMapContext_TypeDefinitionIndex = 5024;

	class SwitchConquestMapContext : public Il2CppObject
	{
	public:
		Il2CppObject* DisplayInfos; // 0x10
		::System::Action* OnRefreshState; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWITCHCONQUESTMAPCONTEXT_.CTOR_OFFSET))(nullptr);
		}

	};

