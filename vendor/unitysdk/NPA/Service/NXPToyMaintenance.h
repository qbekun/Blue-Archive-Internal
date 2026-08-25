#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYMAINTENANCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC5CA0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyMaintenance_TypeDefinitionIndex = 27303;

	class NXPToyMaintenance : public Il2CppObject
	{
	public:
		::System::Int32 emrType; // 0x10
		::System::String* emrMessage; // 0x18
		::System::Int32 emrPass; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYMAINTENANCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

