#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_PLATFORMHELPER_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x93DA870)
#define SYSTEM_THREADING_PLATFORMHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93DA960)

namespace System::Threading
{
	inline static constexpr unsigned int PlatformHelper_TypeDefinitionIndex = 24056;

	class PlatformHelper : public Il2CppObject
	{
	public:
		::System::Int32 s_processorCount; // 0x0
		::System::Int32 s_lastProcessorCountRefreshTicks; // 0x4
		::System::Boolean IsSingleProcessor; // 0x8

		::System::Int32 get_ProcessorCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PLATFORMHELPER_GET_PROCESSORCOUNT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PLATFORMHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

