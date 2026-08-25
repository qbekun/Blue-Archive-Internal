#pragma once
#include "../../unitysdk.h"

namespace NPA::Service { class NXPToyAccountInfo; }

#define NPA_SERVICE_NXPTOYACCOUNTINFO_GETDEMO_OFFSET UNITYSDK_OFFSET(0x9CC56E0)
#define NPA_SERVICE_NXPTOYACCOUNTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC57A0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyAccountInfo_TypeDefinitionIndex = 27298;

	class NXPToyAccountInfo : public Il2CppObject
	{
	public:
		::System::String* title; // 0x10
		::System::Int32 loginType; // 0x18
		::System::String* displayName; // 0x20
		::System::String* npaCode; // 0x28

		::NPA::Service::NXPToyAccountInfo* GetDemo()
		{
			return (return (::NPA::Service::NXPToyAccountInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYACCOUNTINFO_GETDEMO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYACCOUNTINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

