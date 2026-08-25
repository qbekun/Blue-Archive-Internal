#pragma once
#include "unitysdk.h"

#define UIVICTORYHANDLERSINGLERAID_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBAC210)
#define UIVICTORYHANDLERSINGLERAID_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAC390)

	inline static constexpr unsigned int UIVictoryHandlerSingleRaid_TypeDefinitionIndex = 8564;

	class UIVictoryHandlerSingleRaid : public Il2CppObject
	{
	public:
		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSINGLERAID_HANDLECLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERSINGLERAID_.CTOR_OFFSET))(nullptr);
		}

	};

