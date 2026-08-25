#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntityTypes; }

#define MXUNDERCOVER_UCPLAINENTITY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD92BA0)
#define MXUNDERCOVER_UCPLAINENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD92BB0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPlainEntity_TypeDefinitionIndex = 9719;

	class UCPlainEntity : public Il2CppObject
	{
	public:
		::MXUnderCover::UCEntityTypes* get_Type()
		{
			return ((::MXUnderCover::UCEntityTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAINENTITY_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAINENTITY_.CTOR_OFFSET))(nullptr);
		}

	};
}

