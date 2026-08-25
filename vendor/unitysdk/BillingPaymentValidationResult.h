#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int BillingPaymentValidationResult_TypeDefinitionIndex = 26297;

	class BillingPaymentValidationResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		BillingPaymentValidationResult* Valid; // 0x0
		BillingPaymentValidationResult* InvalidToken; // 0x0
		BillingPaymentValidationResult* InvalidNexonLinkRemotePlay; // 0x0
		BillingPaymentValidationResult* UnsupportedLocalSession; // 0x0

	};

