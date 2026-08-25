#pragma once
#include "unitysdk.h"

#define REFINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E72670)

	inline static constexpr unsigned int RefInstance_TypeDefinitionIndex = 28868;

	class RefInstance : public Il2CppObject
	{
	public:
		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFINSTANCE_DISPOSE_OFFSET))(nullptr);
		}

	};

