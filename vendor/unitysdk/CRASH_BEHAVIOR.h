#pragma once
#include "unitysdk.h"

class CRASH_BEHAVIOR;

	inline static constexpr unsigned int CRASH_BEHAVIOR_TypeDefinitionIndex = 10123;

	class CRASH_BEHAVIOR : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		CRASH_BEHAVIOR* DO_NOTHING; // 0x0
		CRASH_BEHAVIOR* SAVELOCAL_MINIDUMP; // 0x0
		CRASH_BEHAVIOR* SAVELOCAL_FULLDUMP; // 0x0
		CRASH_BEHAVIOR* SENDSERVER_MINIDUMP; // 0x0
		CRASH_BEHAVIOR* SAVELOCAL_FULLDUMP_AND_SENDSERVER_MINIDUMP; // 0x0

	};

