#pragma once
#include "unitysdk.h"

#define MANAGED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E38750)

	inline static constexpr unsigned int Managed_TypeDefinitionIndex = 37014;

	class Managed : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* TryFunctionDelegates; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGED_.CCTOR_OFFSET))(nullptr);
		}

	};

