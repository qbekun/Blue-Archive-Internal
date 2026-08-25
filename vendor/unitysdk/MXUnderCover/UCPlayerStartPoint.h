#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntityTypes; }

#define MXUNDERCOVER_UCPLAYERSTARTPOINT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDAD560)
#define MXUNDERCOVER_UCPLAYERSTARTPOINT_GET_ANY_OFFSET UNITYSDK_OFFSET(0xDAD570)
#define MXUNDERCOVER_UCPLAYERSTARTPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAD580)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPlayerStartPoint_TypeDefinitionIndex = 9912;

	class UCPlayerStartPoint : public Il2CppObject
	{
	public:
		::System::Int32 PlayerUniqueIndex; // 0x58

		::MXUnderCover::UCEntityTypes* get_Type()
		{
			return ((::MXUnderCover::UCEntityTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERSTARTPOINT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_Any()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERSTARTPOINT_GET_ANY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPLAYERSTARTPOINT_.CTOR_OFFSET))(nullptr);
		}

	};
}

