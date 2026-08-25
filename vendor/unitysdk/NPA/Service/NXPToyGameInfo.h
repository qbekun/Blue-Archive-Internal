#pragma once
#include "../../unitysdk.h"

namespace NPA::Service { class NXPToyGameInfo; }

#define NPA_SERVICE_NXPTOYGAMEINFO_GETDEMO_OFFSET UNITYSDK_OFFSET(0x9CC57E0)
#define NPA_SERVICE_NXPTOYGAMEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC5C20)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyGameInfo_TypeDefinitionIndex = 27302;

	class NXPToyGameInfo : public Il2CppObject
	{
	public:
		::System::String* company; // 0x10
		::System::String* companyNo; // 0x18
		::System::String* tel; // 0x20
		::System::String* title; // 0x28
		::System::Int32 grbRating; // 0x30
		Il2CppObject* grbField; // 0x38

		::NPA::Service::NXPToyGameInfo* GetDemo()
		{
			return (return (::NPA::Service::NXPToyGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYGAMEINFO_GETDEMO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYGAMEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

