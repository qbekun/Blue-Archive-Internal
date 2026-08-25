#pragma once
#include "unitysdk.h"

namespace NPA::Social { class NXPKakaoOptions; }

#define NXPKAKAOOPTIONSSERIALIZABLEWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4130)
#define NXPKAKAOOPTIONSSERIALIZABLEWRAPPER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC4380)
#define NXPKAKAOOPTIONSSERIALIZABLEWRAPPER_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9CC4180)

	inline static constexpr unsigned int NXPKakaoOptionsSerializableWrapper_TypeDefinitionIndex = 27254;

	class NXPKakaoOptionsSerializableWrapper : public Il2CppObject
	{
	public:
		NXPKakaoPopupOption* connectPopup; // 0x10
		NXPKakaoPopupOption* disconnectPopup; // 0x18

		::System::Void .ctor(::NPA::Social::NXPKakaoOptions* arg)
		{
			((::System::Void(*)(::NPA::Social::NXPKakaoOptions*, ::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOOPTIONSSERIALIZABLEWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOOPTIONSSERIALIZABLEWRAPPER_TOSTRING_OFFSET))(nullptr);
		}

		::NPA::Social::NXPKakaoOptions* FromJson(::System::String* str)
		{
			return (return (::NPA::Social::NXPKakaoOptions*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NXPKAKAOOPTIONSSERIALIZABLEWRAPPER_FROMJSON_OFFSET))(str, nullptr);
		}

	};

