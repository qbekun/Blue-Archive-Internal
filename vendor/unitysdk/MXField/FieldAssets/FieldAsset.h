#pragma once
#include "../../unitysdk.h"

#define MXFIELD_FIELDASSETS_FIELDASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC4640)
#define MXFIELD_FIELDASSETS_FIELDASSET_GET_ID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::FieldAssets
{
	inline static constexpr unsigned int FieldAsset_TypeDefinitionIndex = 10864;

	class FieldAsset : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDASSET_GET_ID_OFFSET))(nullptr);
		}

	};
}

