#pragma once
#include "../../unitysdk.h"

#define MX_DATA_FLATARRAY_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int FlatArray_TypeDefinitionIndex = 16496;

	class FlatArray : public Il2CppObject
	{
	public:
		Il2CppObject* Create(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATARRAY_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

