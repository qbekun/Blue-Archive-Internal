#pragma once
#include "unitysdk.h"

#define MULTIFLOORRAIDRETRYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x269E980)

	inline static constexpr unsigned int MultiFloorRaidRetryInfo_TypeDefinitionIndex = 6825;

	class MultiFloorRaidRetryInfo : public Il2CppObject
	{
	public:
		::System::Int32 FloorNumber; // 0x10
		::System::Int32 EchelonNumber; // 0x14
		Il2CppObject* AssistUseInfos; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIFLOORRAIDRETRYINFO_.CTOR_OFFSET))(nullptr);
		}

	};

