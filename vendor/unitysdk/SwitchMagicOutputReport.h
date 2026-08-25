#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int SwitchMagicOutputReport_TypeDefinitionIndex = 28644;

	class SwitchMagicOutputReport : public Il2CppObject
	{
	public:
		::System::Int32 kSize; // 0x0
		::System::Byte ExpectedReplyInputReportId; // 0x0
		::System::Byte reportType; // 0x10
		::System::Byte commandId; // 0x11

	};

