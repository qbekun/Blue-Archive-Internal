#pragma once
#include "../unitysdk.h"

#define NPA_NPFBAPPEVENTPARAMETERNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCC9F0)

namespace NPA
{
	inline static constexpr unsigned int NPFBAppEventParameterName_TypeDefinitionIndex = 25662;

	class NPFBAppEventParameterName : public Il2CppObject
	{
	public:
		::System::String* PaymentInfoAvailable; // 0x0
		::System::String* NumItems; // 0x0
		::System::String* RegistrationMethod; // 0x0
		::System::String* Success; // 0x0
		::System::String* SearchString; // 0x0
		::System::String* MaxRatingValue; // 0x0
		::System::String* ContentType; // 0x0
		::System::String* ContentID; // 0x0
		::System::String* Currency; // 0x0
		::System::String* Level; // 0x0
		::System::String* Description; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPFBAPPEVENTPARAMETERNAME_.CTOR_OFFSET))(nullptr);
		}

	};
}

