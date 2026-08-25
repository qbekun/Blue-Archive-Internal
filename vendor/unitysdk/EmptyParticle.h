#pragma once
#include "unitysdk.h"

#define EMPTYPARTICLE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x98E9A00)
#define EMPTYPARTICLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E9920)

	inline static constexpr unsigned int EmptyParticle_TypeDefinitionIndex = 28189;

	class EmptyParticle : public Il2CppObject
	{
	public:
		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPTYPARTICLE_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPTYPARTICLE_.CTOR_OFFSET))(nullptr);
		}

	};

