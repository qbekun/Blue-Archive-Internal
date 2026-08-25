#pragma once
#include "unitysdk.h"

#define DESIGNERWEBREQUESTCREATE_CREATE_OFFSET UNITYSDK_OFFSET(0x9A4D2B0)
#define DESIGNERWEBREQUESTCREATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4D0C0)

	inline static constexpr unsigned int DesignerWebRequestCreate_TypeDefinitionIndex = 29703;

	class DesignerWebRequestCreate : public Il2CppObject
	{
	public:
		::System::Net::WebRequest* Create(::System::Uri* arg)
		{
			return (return (::System::Net::WebRequest*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + DESIGNERWEBREQUESTCREATE_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESIGNERWEBREQUESTCREATE_.CTOR_OFFSET))(nullptr);
		}

	};

