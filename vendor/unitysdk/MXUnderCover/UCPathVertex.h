#pragma once
#include "../unitysdk.h"

class RotateData;

#define MXUNDERCOVER_UCPATHVERTEX_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAD240)
#define MXUNDERCOVER_UCPATHVERTEX_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0xDAD250)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPathVertex_TypeDefinitionIndex = 9908;

	class UCPathVertex : public Il2CppObject
	{
	public:
		::System::Boolean IsStartPoint; // 0x10
		::System::Single InWaiting; // 0x14
		RotateData* InGuardMode; // 0x18
		::System::Single OutWaiting; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPATHVERTEX_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPATHVERTEX_ISMODIFIED_OFFSET))(nullptr);
		}

	};
}

