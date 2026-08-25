#pragma once
#include "unitysdk.h"

#define RESULTSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE260)

	inline static constexpr unsigned int ResultSet_TypeDefinitionIndex = 27596;

	class ResultSet : public Il2CppObject
	{
	public:
		::System::Boolean success; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESULTSET_.CTOR_OFFSET))(nullptr);
		}

	};

