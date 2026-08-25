#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXTOYGETPROMOTIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C23C80)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXToyGetPromotionRequest_TypeDefinitionIndex = 26680;

	class NXToyGetPromotionRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXTOYGETPROMOTIONREQUEST_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

