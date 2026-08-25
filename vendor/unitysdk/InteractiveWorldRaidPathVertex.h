#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDPATHVERTEX_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x25A5890)
#define INTERACTIVEWORLDRAIDPATHVERTEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A58B0)

	inline static constexpr unsigned int InteractiveWorldRaidPathVertex_TypeDefinitionIndex = 336;

	class InteractiveWorldRaidPathVertex : public Il2CppObject
	{
	public:
		::System::Boolean IsStartPoint; // 0x10
		::System::Single WaitTime; // 0x14

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPATHVERTEX_ISMODIFIED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPATHVERTEX_.CTOR_OFFSET))(nullptr);
		}

	};

