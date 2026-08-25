#pragma once
#include "unitysdk.h"

#define THIRDPARTYLOGINRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C99B50)
#define THIRDPARTYLOGINRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C98090)

	inline static constexpr unsigned int ThirdPartyLoginResult_TypeDefinitionIndex = 27093;

	class ThirdPartyLoginResult : public Il2CppObject
	{
	public:
		::System::String* id; // 0x10
		::System::String* pw; // 0x18
		::System::Int32 errorCode; // 0x20
		::System::String* errorText; // 0x28
		::System::String* errorDetail; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + THIRDPARTYLOGINRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + THIRDPARTYLOGINRESULT_.CTOR_OFFSET))(str, str, arg, str, str, nullptr);
		}

	};

