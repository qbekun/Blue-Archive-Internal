#pragma once
#include "../unitysdk.h"

#define NPA_NPCSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB1B0)

namespace NPA
{
	inline static constexpr unsigned int NPCSInfo_TypeDefinitionIndex = 25645;

	class NPCSInfo : public ::MX::NetworkProtocol::EventContentReceiveStageTotalRewardResponse
	{
	public:
		::Il2CppArray<::System::Object*>* questionInfos; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPCSINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

