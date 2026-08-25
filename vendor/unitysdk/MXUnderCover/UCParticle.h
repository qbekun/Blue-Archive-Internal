#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntityTypes; }

#define MXUNDERCOVER_UCPARTICLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD92B40)
#define MXUNDERCOVER_UCPARTICLE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD92B90)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCParticle_TypeDefinitionIndex = 9718;

	class UCParticle : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPARTICLE_.CTOR_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntityTypes* get_Type()
		{
			return ((::MXUnderCover::UCEntityTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPARTICLE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

