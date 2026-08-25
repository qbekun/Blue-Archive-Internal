#pragma once
#include "unitysdk.h"

#define ENABLEGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x211E350)

	inline static constexpr unsigned int EnableGroup_TypeDefinitionIndex = 3880;

	class EnableGroup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Objects; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENABLEGROUP_.CTOR_OFFSET))(nullptr);
		}

	};

