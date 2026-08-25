#pragma once
#include "../../unitysdk.h"

#define NORDEUS_DATASTRUCTURES_VARYINGCOLORLIST_GETBUFFERPOINTER_OFFSET UNITYSDK_OFFSET(0x1EA4630)
#define NORDEUS_DATASTRUCTURES_VARYINGCOLORLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4650)

namespace Nordeus::DataStructures
{
	inline static constexpr unsigned int VaryingColorList_TypeDefinitionIndex = 21238;

	class VaryingColorList : public ::System::Net::NetworkInformation::IPGlobalProperties
	{
	public:
		::System::Object** GetBufferPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGCOLORLIST_GETBUFFERPOINTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORDEUS_DATASTRUCTURES_VARYINGCOLORLIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

