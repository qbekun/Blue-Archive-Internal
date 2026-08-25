#pragma once
#include "../unitysdk.h"

namespace NPA { class NPPushAgreementType; }

namespace NPA
{
	inline static constexpr unsigned int NPPushAgreementType_TypeDefinitionIndex = 25640;

	class NPPushAgreementType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NPPushAgreementType* PushDisagree; // 0x0
		::NPA::NPPushAgreementType* PushAgree; // 0x0

	};
}

