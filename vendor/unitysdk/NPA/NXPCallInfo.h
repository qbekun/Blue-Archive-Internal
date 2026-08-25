#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPCallInfo; }

#define NPA_NXPCALLINFO_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x9BC6F30)

namespace NPA
{
	inline static constexpr unsigned int NXPCallInfo_TypeDefinitionIndex = 25603;

	class NXPCallInfo : public Il2CppObject
	{
	public:
		::System::String* className; // 0x10
		::System::String* methodName; // 0x18
		::System::String* lineNumber; // 0x20

		::NPA::NXPCallInfo* get_Default()
		{
			return (return (::NPA::NXPCallInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCALLINFO_GET_DEFAULT_OFFSET))(nullptr);
		}

	};
}

