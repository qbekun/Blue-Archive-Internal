#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDPATHEDGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A58C0)
#define INTERACTIVEWORLDRAIDPATHEDGE_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x25A58D0)

	inline static constexpr unsigned int InteractiveWorldRaidPathEdge_TypeDefinitionIndex = 337;

	class InteractiveWorldRaidPathEdge : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPATHEDGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPATHEDGE_ISMODIFIED_OFFSET))(nullptr);
		}

	};

