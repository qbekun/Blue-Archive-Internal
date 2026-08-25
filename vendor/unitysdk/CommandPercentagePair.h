#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCommand;

#define COMMANDPERCENTAGEPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x259CBC0)

	inline static constexpr unsigned int CommandPercentagePair_TypeDefinitionIndex = 295;

	class CommandPercentagePair : public Il2CppObject
	{
	public:
		InteractiveWorldRaidCommand* command; // 0x10
		::System::Int32 percentage; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMANDPERCENTAGEPAIR_.CTOR_OFFSET))(nullptr);
		}

	};

