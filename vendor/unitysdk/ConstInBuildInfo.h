#pragma once
#include "unitysdk.h"

#define CONSTINBUILDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18AF8D0)

	inline static constexpr unsigned int ConstInBuildInfo_TypeDefinitionIndex = 16033;

	class ConstInBuildInfo : public Il2CppObject
	{
	public:
		::System::Int64 DownloadAlarmTimerInSeconds; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTINBUILDINFO_.CTOR_OFFSET))(nullptr);
		}

	};

