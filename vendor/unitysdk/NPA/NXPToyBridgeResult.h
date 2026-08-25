#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYBRIDGERESULT_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x9BE6850)
#define NPA_NXPTOYBRIDGERESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BE6860)
#define NPA_NXPTOYBRIDGERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE5F50)

namespace NPA
{
	inline static constexpr unsigned int NXPToyBridgeResult_TypeDefinitionIndex = 25776;

	class NXPToyBridgeResult : public Il2CppObject
	{
	public:
		::System::Int32 Code; // 0x10
		::System::String* Message; // 0x18

		::System::Boolean IsSuccess()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYBRIDGERESULT_ISSUCCESS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYBRIDGERESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYBRIDGERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

