#pragma once
#include "unitysdk.h"

#define THREADCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A50880)

	inline static constexpr unsigned int ThreadContext_TypeDefinitionIndex = 29714;

	class ThreadContext : public Il2CppObject
	{
	public:
		::System::Int32 m_NestedIOCount; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + THREADCONTEXT_.CTOR_OFFSET))(nullptr);
		}

	};

