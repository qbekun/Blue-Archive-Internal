#pragma once
#include "../../unitysdk.h"

#define NORDEUS_DATASTRUCTURES_VARYINGVECTOR3LIST_GETBUFFERPOINTER_OFFSET UNITYSDK_OFFSET(0x1EA4510)
#define NORDEUS_DATASTRUCTURES_VARYINGVECTOR3LIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4530)

namespace Nordeus::DataStructures
{
	inline static constexpr unsigned int VaryingVector3List_TypeDefinitionIndex = 21235;

	class VaryingVector3List : public ::System::Net::NetworkInformation::NetworkInterface
	{
	public:
		::System::Object** GetBufferPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGVECTOR3LIST_GETBUFFERPOINTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGVECTOR3LIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

