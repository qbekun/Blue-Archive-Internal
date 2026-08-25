#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYMIGRATIONDATAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9C00)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyMigrationDataInfo_TypeDefinitionIndex = 27490;

	class NXPToyMigrationDataInfo : public Il2CppObject
	{
	public:
		::System::String* lastAccessedAt; // 0x10
		::System::String* device; // 0x18
		::System::String* name; // 0x20
		::System::Int64 npsn; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYMIGRATIONDATAINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

