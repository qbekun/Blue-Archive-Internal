#pragma once
#include "../../unitysdk.h"

#define MX_CONTROLLER_CURSORPOINTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF7EA0)

namespace MX::Controller
{
	inline static constexpr unsigned int CursorPointInfo_TypeDefinitionIndex = 11141;

	class CursorPointInfo : public Il2CppObject
	{
	public:
		::System::String* UIName; // 0x10
		Il2CppObject* Points; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONTROLLER_CURSORPOINTINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

