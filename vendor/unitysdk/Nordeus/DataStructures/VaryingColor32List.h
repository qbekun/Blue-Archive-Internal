#pragma once
#include "../../unitysdk.h"

#define NORDEUS_DATASTRUCTURES_VARYINGCOLOR32LIST_GETBUFFERPOINTER_OFFSET UNITYSDK_OFFSET(0x1EA45D0)
#define NORDEUS_DATASTRUCTURES_VARYINGCOLOR32LIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA45F0)

namespace Nordeus::DataStructures
{
	inline static constexpr unsigned int VaryingColor32List_TypeDefinitionIndex = 21237;

	class VaryingColor32List : public ::System::Net::NetworkInformation::IPInterfaceProperties
	{
	public:
		::System::Object** GetBufferPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGCOLOR32LIST_GETBUFFERPOINTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGCOLOR32LIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

