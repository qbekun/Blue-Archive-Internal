#pragma once
#include "../unitysdk.h"

namespace NPA { class NPOptions; }

#define NPA_NPOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBD360)
#define NPA_NPOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBD3A0)
#define NPA_NPOPTIONS_GET_DEFAULTLOGINTYPELIST_OFFSET UNITYSDK_OFFSET(0x9BBD3F0)
#define NPA_NPOPTIONS_SET_DEFAULTLOGINTYPELIST_OFFSET UNITYSDK_OFFSET(0x9BBD400)
#define NPA_NPOPTIONS_ISGOOGLESIGNININSTEADOFGCIDLOGIN_OFFSET UNITYSDK_OFFSET(0x9BBD410)
#define NPA_NPOPTIONS_SETGOOGLESIGNININSTEADOFGCIDLOGIN_OFFSET UNITYSDK_OFFSET(0x9BBD420)
#define NPA_NPOPTIONS_ISNGSMENABLED_OFFSET UNITYSDK_OFFSET(0x9BBD430)
#define NPA_NPOPTIONS_SETNGSMENABLED_OFFSET UNITYSDK_OFFSET(0x9BBD440)
#define NPA_NPOPTIONS_ISNGSXENABLED_OFFSET UNITYSDK_OFFSET(0x9BBD450)
#define NPA_NPOPTIONS_SETNGSXENABLED_OFFSET UNITYSDK_OFFSET(0x9BBD460)
#define NPA_NPOPTIONS_USENEXONCI_OFFSET UNITYSDK_OFFSET(0x9BBD470)
#define NPA_NPOPTIONS_SETUSENEXONCI_OFFSET UNITYSDK_OFFSET(0x9BBD480)
#define NPA_NPOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBD490)
#define NPA_NPOPTIONS_FROMJSON_OFFSET UNITYSDK_OFFSET(0x9BBD580)

namespace NPA
{
	inline static constexpr unsigned int NPOptions_TypeDefinitionIndex = 25537;

	class NPOptions : public Il2CppObject
	{
	public:
		Il2CppObject* defaultLoginTypeList; // 0x10
		GoogleSignInInsteadOfGcidLoginOption* googleSignInInsteadOfGcidLogin; // 0x18
		NexonGameSecurityOption* useNgsm; // 0x1C
		NexonGameSecurityOption* useNgsx; // 0x20
		NexonCIOption* useNexonCI; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::NPA::NPOptions* arg)
		{
			((::System::Void(*)(::NPA::NPOptions*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DefaultLoginTypeList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_GET_DEFAULTLOGINTYPELIST_OFFSET))(nullptr);
		}

		::System::Void set_DefaultLoginTypeList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_SET_DEFAULTLOGINTYPELIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean isGoogleSignInInsteadOfGcidLogin()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_ISGOOGLESIGNININSTEADOFGCIDLOGIN_OFFSET))(nullptr);
		}

		::System::Void setGoogleSignInInsteadOfGcidLogin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_SETGOOGLESIGNININSTEADOFGCIDLOGIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean isNgsmEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_ISNGSMENABLED_OFFSET))(nullptr);
		}

		::System::Void setNgsmEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_SETNGSMENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean isNgsxEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_ISNGSXENABLED_OFFSET))(nullptr);
		}

		::System::Void setNgsxEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_SETNGSXENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean UseNexonCI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_USENEXONCI_OFFSET))(nullptr);
		}

		::System::Void SetUseNexonCI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_SETUSENEXONCI_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_TOSTRING_OFFSET))(nullptr);
		}

		::NPA::NPOptions* FromJson(::System::String* str)
		{
			return (return (::NPA::NPOptions*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPOPTIONS_FROMJSON_OFFSET))(str, nullptr);
		}

	};
}

