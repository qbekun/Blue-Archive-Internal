#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXError; }

#define NEXON_PUB_NXERROREXTENSIONS_INTVALUE_OFFSET UNITYSDK_OFFSET(0x954C3A0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXErrorExtensions_TypeDefinitionIndex = 37545;

	class NXErrorExtensions : public Il2CppObject
	{
	public:
		::System::Int32 IntValue(::Nexon::Pub::NXError* arg)
		{
			return (return (::System::Int32(*)(::Nexon::Pub::NXError*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXERROREXTENSIONS_INTVALUE_OFFSET))(arg, nullptr);
		}

	};
}

