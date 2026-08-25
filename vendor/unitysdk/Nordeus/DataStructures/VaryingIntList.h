#pragma once
#include "../../unitysdk.h"

#define NORDEUS_DATASTRUCTURES_VARYINGINTLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4450)
#define NORDEUS_DATASTRUCTURES_VARYINGINTLIST_GETBUFFERPOINTER_OFFSET UNITYSDK_OFFSET(0x1EA4490)

namespace Nordeus::DataStructures
{
	inline static constexpr unsigned int VaryingIntList_TypeDefinitionIndex = 21233;

	class VaryingIntList : public ::System::Net::NetworkInformation::IPv4InterfaceStatistics
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGINTLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Object** GetBufferPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGINTLIST_GETBUFFERPOINTER_OFFSET))(nullptr);
		}

	};
}

