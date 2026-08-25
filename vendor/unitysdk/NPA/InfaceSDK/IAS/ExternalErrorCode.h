#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::IAS { class ExternalErrorCode; }

namespace NPA::InfaceSDK::IAS
{
	inline static constexpr unsigned int ExternalErrorCode_TypeDefinitionIndex = 25836;

	class ExternalErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::InfaceSDK::IAS::ExternalErrorCode* OK; // 0x0
		::NPA::InfaceSDK::IAS::ExternalErrorCode* NOT_ALLOWED_AUTOLOGIN; // 0x0
		::NPA::InfaceSDK::IAS::ExternalErrorCode* EXTERNAL_API_ERROR; // 0x0

	};
}

