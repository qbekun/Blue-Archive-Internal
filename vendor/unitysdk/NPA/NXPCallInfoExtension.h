#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPCallInfo; }

#define NPA_NXPCALLINFOEXTENSION_GET_OFFSET UNITYSDK_OFFSET(0x9BC6FE0)

namespace NPA
{
	inline static constexpr unsigned int NXPCallInfoExtension_TypeDefinitionIndex = 25604;

	class NXPCallInfoExtension : public Il2CppObject
	{
	public:
		::NPA::NXPCallInfo* Get(::System::Int32 arg)
		{
			return (return (::NPA::NXPCallInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCALLINFOEXTENSION_GET_OFFSET))(arg, nullptr);
		}

	};
}

