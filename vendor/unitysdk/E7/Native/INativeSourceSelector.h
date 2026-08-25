#pragma once
#include "../../unitysdk.h"

#define E7_NATIVE_INATIVESOURCESELECTOR_NEXTNATIVESOURCEINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace E7::Native
{
	inline static constexpr unsigned int INativeSourceSelector_TypeDefinitionIndex = 37974;

	class INativeSourceSelector : public Il2CppObject
	{
	public:
		::System::Int32 NextNativeSourceIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_INATIVESOURCESELECTOR_NEXTNATIVESOURCEINDEX_OFFSET))(nullptr);
		}

	};
}

