#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_IREADONLYCOLLECTION`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IReadOnlyCollection`1_TypeDefinitionIndex = 25143;

	class IReadOnlyCollection`1 : public Il2CppObject
	{
	public:
		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_IREADONLYCOLLECTION`1_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

