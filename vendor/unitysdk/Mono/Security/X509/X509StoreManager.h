#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::X509 { class X509Stores; }
namespace Mono::Security::X509 { class X509CertificateCollection; }

#define MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSERPATH_OFFSET UNITYSDK_OFFSET(0x9106710)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINEPATH_OFFSET UNITYSDK_OFFSET(0x9106830)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSERPATH_OFFSET UNITYSDK_OFFSET(0x9106950)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINEPATH_OFFSET UNITYSDK_OFFSET(0x9106A70)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSER_OFFSET UNITYSDK_OFFSET(0x9106B90)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x9106CA0)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9103AA0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509StoreManager_TypeDefinitionIndex = 35757;

	class X509StoreManager : public Il2CppObject
	{
	public:
		::System::String* _userPath; // 0x0
		::System::String* _localMachinePath; // 0x8
		::System::String* _newUserPath; // 0x10
		::System::String* _newLocalMachinePath; // 0x18
		::Mono::Security::X509::X509Stores* _userStore; // 0x20
		::Mono::Security::X509::X509Stores* _machineStore; // 0x28

		::System::String* get_CurrentUserPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSERPATH_OFFSET))(nullptr);
		}

		::System::String* get_LocalMachinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINEPATH_OFFSET))(nullptr);
		}

		::System::String* get_NewCurrentUserPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSERPATH_OFFSET))(nullptr);
		}

		::System::String* get_NewLocalMachinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINEPATH_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Stores* get_CurrentUser()
		{
			return (return (::Mono::Security::X509::X509Stores*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSER_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Stores* get_LocalMachine()
		{
			return (return (::Mono::Security::X509::X509Stores*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINE_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509CertificateCollection* get_TrustedRootCertificates()
		{
			return (return (::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCERTIFICATES_OFFSET))(nullptr);
		}

	};
}

