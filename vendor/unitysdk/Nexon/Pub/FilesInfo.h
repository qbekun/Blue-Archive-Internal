#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_FILESINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C390)

namespace Nexon::Pub
{
	inline static constexpr unsigned int FilesInfo_TypeDefinitionIndex = 37543;

	class FilesInfo : public Il2CppObject
	{
	public:
		::System::Int32 _Count_k__BackingField; // 0x10
		::System::Int64 _Size_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_FILESINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

