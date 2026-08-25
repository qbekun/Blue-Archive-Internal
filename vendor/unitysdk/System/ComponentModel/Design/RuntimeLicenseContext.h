#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_GETLOCALPATH_OFFSET UNITYSDK_OFFSET(0x9B7CDB0)
#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x9B7CE30)
#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET UNITYSDK_OFFSET(0x9B7D3E0)
#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7D7F0)
#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B7D800)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int RuntimeLicenseContext_TypeDefinitionIndex = 29538;

	class RuntimeLicenseContext : public Il2CppObject
	{
	public:
		::System::Diagnostics::TraceSwitch* s_runtimeLicenseContextSwitch; // 0x0
		::System::Collections::Hashtable* savedLicenseKeys; // 0x10

		::System::String* GetLocalPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_GETLOCALPATH_OFFSET))(str, nullptr);
		}

		::System::String* GetSavedLicenseKey(::System::Type* arg, ::System::Reflection::Assembly* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::Assembly* arg, ::System::String* str)
		{
			return (return (::System::IO::Stream*(*)(::System::Reflection::Assembly*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

