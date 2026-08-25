#pragma once
#include "../../unitysdk.h"

#define NORDEUS_DATASTRUCTURES_VARYINGVECTOR2LIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA44B0)
#define NORDEUS_DATASTRUCTURES_VARYINGVECTOR2LIST_GETBUFFERPOINTER_OFFSET UNITYSDK_OFFSET(0x1EA44F0)

namespace Nordeus::DataStructures
{
	inline static constexpr unsigned int VaryingVector2List_TypeDefinitionIndex = 21234;

	class VaryingVector2List : public ::System::Net::NetworkInformation::NetworkInformationException
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGVECTOR2LIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Object** GetBufferPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGVECTOR2LIST_GETBUFFERPOINTER_OFFSET))(nullptr);
		}

	};
}

