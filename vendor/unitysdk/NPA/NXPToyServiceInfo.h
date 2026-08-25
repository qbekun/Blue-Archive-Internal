#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYSERVICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBDEA0)

namespace NPA
{
	inline static constexpr unsigned int NXPToyServiceInfo_TypeDefinitionIndex = 25546;

	class NXPToyServiceInfo : public Il2CppObject
	{
	public:
		::System::String* title; // 0x10
		::System::Int32 nxkATL; // 0x18
		Il2CppObject* useMemberships; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYSERVICEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

