#pragma once
#include "../../../unitysdk.h"

namespace Ngsm::Internal::Platform { class EUnityDataType; }

namespace Ngsm::Internal::Platform
{
	inline static constexpr unsigned int EUnityDataType_TypeDefinitionIndex = 21251;

	class EUnityDataType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Ngsm::Internal::Platform::EUnityDataType* U_NORMAL; // 0x0
		::Ngsm::Internal::Platform::EUnityDataType* U_FLOAT; // 0x0
		::Ngsm::Internal::Platform::EUnityDataType* U_DOUBLE; // 0x0

	};
}

