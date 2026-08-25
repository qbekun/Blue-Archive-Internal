#pragma once
#include "../../unitysdk.h"

#define NORDEUS_DATASTRUCTURES_VARYINGVECTOR4LIST_GETBUFFERPOINTER_OFFSET UNITYSDK_OFFSET(0x1EA4570)
#define NORDEUS_DATASTRUCTURES_VARYINGVECTOR4LIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4590)

namespace Nordeus::DataStructures
{
	inline static constexpr unsigned int VaryingVector4List_TypeDefinitionIndex = 21236;

	class VaryingVector4List : public ::System::Net::NetworkInformation::NetworkInterfaceComponent
	{
	public:
		::System::Object** GetBufferPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGVECTOR4LIST_GETBUFFERPOINTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGVECTOR4LIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

