#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_EXCESSIVETOUCH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11DBA10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ExcessiveTouch_TypeDefinitionIndex = 13429;

	class ExcessiveTouch : public Il2CppObject
	{
	public:
		Il2CppObject* ExcessiveTouchFrameList; // 0x10
		::System::Int32 ExcessiveTouchCount; // 0x18
		::System::Int32 TotalExcessiveTouchFound; // 0x1C

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXCESSIVETOUCH_INITIALIZE_OFFSET))(nullptr);
		}

	};
}

