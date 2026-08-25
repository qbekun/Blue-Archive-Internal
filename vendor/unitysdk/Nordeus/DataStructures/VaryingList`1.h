#pragma once
#include "../../unitysdk.h"

#define NORDEUS_DATASTRUCTURES_VARYINGLIST`1_ASARRAYOFLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define NORDEUS_DATASTRUCTURES_VARYINGLIST`1_ORIGINALLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define NORDEUS_DATASTRUCTURES_VARYINGLIST`1_ASARRAYOFLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define NORDEUS_DATASTRUCTURES_VARYINGLIST`1_GETBUFFERPOINTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NORDEUS_DATASTRUCTURES_VARYINGLIST`1_TRIMBUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NORDEUS_DATASTRUCTURES_VARYINGLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Nordeus::DataStructures
{
	inline static constexpr unsigned int VaryingList`1_TypeDefinitionIndex = 21232;

	class VaryingList`1 : public ::MXUnderCover::UIUCInvenItemElement
	{
	public:
		::System::Void AsArrayOfLength(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGLIST`1_ASARRAYOFLENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 OriginalLength()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGLIST`1_ORIGINALLENGTH_OFFSET))(nullptr);
		}

		::System::Void AsArrayOfLength(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGLIST`1_ASARRAYOFLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Object** GetBufferPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGLIST`1_GETBUFFERPOINTER_OFFSET))(nullptr);
		}

		::System::Void TrimBuffer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGLIST`1_TRIMBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGLIST`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

