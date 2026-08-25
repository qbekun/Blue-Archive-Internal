#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPInsignSSOUrlBuilder; }

#define NPA_NXPINSIGNSSOURLBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE56D0)
#define NPA_NXPINSIGNSSOURLBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE56E0)
#define NPA_NXPINSIGNSSOURLBUILDER_SETGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9BE57D0)
#define NPA_NXPINSIGNSSOURLBUILDER_SETLOCALE_OFFSET UNITYSDK_OFFSET(0x9BE5840)
#define NPA_NXPINSIGNSSOURLBUILDER_SETREDIRECTURL_OFFSET UNITYSDK_OFFSET(0x9BE58B0)
#define NPA_NXPINSIGNSSOURLBUILDER_SETGID_OFFSET UNITYSDK_OFFSET(0x9BE5930)
#define NPA_NXPINSIGNSSOURLBUILDER_PIN_OFFSET UNITYSDK_OFFSET(0x9BE59A0)

namespace NPA
{
	inline static constexpr unsigned int NXPInsignSSOUrlBuilder_TypeDefinitionIndex = 25752;

	class NXPInsignSSOUrlBuilder : public Il2CppObject
	{
	public:
		::System::Text::StringBuilder* urlBuilder; // 0x10
		Il2CppObject* queryParams; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSIGNSSOURLBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSIGNSSOURLBUILDER_.CTOR_OFFSET))(str, nullptr);
		}

		::NPA::NXPInsignSSOUrlBuilder* SetGameToken(::System::String* str)
		{
			return (return (::NPA::NXPInsignSSOUrlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSIGNSSOURLBUILDER_SETGAMETOKEN_OFFSET))(str, nullptr);
		}

		::NPA::NXPInsignSSOUrlBuilder* SetLocale(::System::String* str)
		{
			return (return (::NPA::NXPInsignSSOUrlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSIGNSSOURLBUILDER_SETLOCALE_OFFSET))(str, nullptr);
		}

		::NPA::NXPInsignSSOUrlBuilder* SetRedirectUrl(::System::String* str)
		{
			return (return (::NPA::NXPInsignSSOUrlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSIGNSSOURLBUILDER_SETREDIRECTURL_OFFSET))(str, nullptr);
		}

		::NPA::NXPInsignSSOUrlBuilder* SetGid(::System::String* str)
		{
			return (return (::NPA::NXPInsignSSOUrlBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSIGNSSOURLBUILDER_SETGID_OFFSET))(str, nullptr);
		}

		::System::String* Pin()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINSIGNSSOURLBUILDER_PIN_OFFSET))(nullptr);
		}

	};
}

