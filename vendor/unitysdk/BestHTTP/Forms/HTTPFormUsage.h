#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Forms { class HTTPFormUsage; }

namespace BestHTTP::Forms
{
	inline static constexpr unsigned int HTTPFormUsage_TypeDefinitionIndex = 23331;

	class HTTPFormUsage : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Forms::HTTPFormUsage* Automatic; // 0x0
		::BestHTTP::Forms::HTTPFormUsage* UrlEncoded; // 0x0
		::BestHTTP::Forms::HTTPFormUsage* Multipart; // 0x0

	};
}

