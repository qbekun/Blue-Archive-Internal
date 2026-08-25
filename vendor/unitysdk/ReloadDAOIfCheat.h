#pragma once
#include "unitysdk.h"

#define RELOADDAOIFCHEAT_TRYANYDAO_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ReloadDAOIfCheat_TypeDefinitionIndex = 3972;

	class ReloadDAOIfCheat : public Il2CppObject
	{
	public:
		::System::Void TryAnyDAO(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + RELOADDAOIFCHEAT_TRYANYDAO_OFFSET))(arg, nullptr);
		}

	};

