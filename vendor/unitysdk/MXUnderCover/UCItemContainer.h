#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntityTypes; }

#define MXUNDERCOVER_UCITEMCONTAINER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD92AE0)
#define MXUNDERCOVER_UCITEMCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD92AF0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCItemContainer_TypeDefinitionIndex = 9717;

	class UCItemContainer : public Il2CppObject
	{
	public:
		::MXUnderCover::UCEntityTypes* get_Type()
		{
			return ((::MXUnderCover::UCEntityTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMCONTAINER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMCONTAINER_.CTOR_OFFSET))(nullptr);
		}

	};
}

