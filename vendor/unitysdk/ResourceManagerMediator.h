#pragma once
#include "unitysdk.h"

#define RESOURCEMANAGERMEDIATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x92327E0)
#define RESOURCEMANAGERMEDIATOR_GET_MODULEDIR_OFFSET UNITYSDK_OFFSET(0x922ECD0)
#define RESOURCEMANAGERMEDIATOR_GET_LOCATIONINFO_OFFSET UNITYSDK_OFFSET(0x922E990)
#define RESOURCEMANAGERMEDIATOR_GET_USERRESOURCESET_OFFSET UNITYSDK_OFFSET(0x922ECF0)
#define RESOURCEMANAGERMEDIATOR_GET_BASENAMEFIELD_OFFSET UNITYSDK_OFFSET(0x922E970)
#define RESOURCEMANAGERMEDIATOR_GET_NEUTRALRESOURCESCULTURE_OFFSET UNITYSDK_OFFSET(0x9230B20)
#define RESOURCEMANAGERMEDIATOR_GETRESOURCEFILENAME_OFFSET UNITYSDK_OFFSET(0x922E890)
#define RESOURCEMANAGERMEDIATOR_GET_LOOKEDFORSATELLITECONTRACTVERSION_OFFSET UNITYSDK_OFFSET(0x9231770)
#define RESOURCEMANAGERMEDIATOR_SET_LOOKEDFORSATELLITECONTRACTVERSION_OFFSET UNITYSDK_OFFSET(0x9231810)
#define RESOURCEMANAGERMEDIATOR_GET_SATELLITECONTRACTVERSION_OFFSET UNITYSDK_OFFSET(0x9231900)
#define RESOURCEMANAGERMEDIATOR_SET_SATELLITECONTRACTVERSION_OFFSET UNITYSDK_OFFSET(0x92317E0)
#define RESOURCEMANAGERMEDIATOR_OBTAINSATELLITECONTRACTVERSION_OFFSET UNITYSDK_OFFSET(0x9231790)
#define RESOURCEMANAGERMEDIATOR_GET_FALLBACKLOC_OFFSET UNITYSDK_OFFSET(0x922F220)
#define RESOURCEMANAGERMEDIATOR_GET_CALLINGASSEMBLY_OFFSET UNITYSDK_OFFSET(0x9231100)
#define RESOURCEMANAGERMEDIATOR_GET_MAINASSEMBLY_OFFSET UNITYSDK_OFFSET(0x922F240)
#define RESOURCEMANAGERMEDIATOR_GET_BASENAME_OFFSET UNITYSDK_OFFSET(0x9232540)

	inline static constexpr unsigned int ResourceManagerMediator_TypeDefinitionIndex = 24821;

	class ResourceManagerMediator : public Il2CppObject
	{
	public:
		::System::Resources::ResourceManager* _rm; // 0x10

		::System::Void .ctor(::System::Resources::ResourceManager* arg)
		{
			((::System::Void(*)(::System::Resources::ResourceManager*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_ModuleDir()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_MODULEDIR_OFFSET))(nullptr);
		}

		::System::Type* get_LocationInfo()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_LOCATIONINFO_OFFSET))(nullptr);
		}

		::System::Type* get_UserResourceSet()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_USERRESOURCESET_OFFSET))(nullptr);
		}

		::System::String* get_BaseNameField()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_BASENAMEFIELD_OFFSET))(nullptr);
		}

		::System::Globalization::CultureInfo* get_NeutralResourcesCulture()
		{
			return (return (::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_NEUTRALRESOURCESCULTURE_OFFSET))(nullptr);
		}

		::System::String* GetResourceFileName(::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::String*(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GETRESOURCEFILENAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_LookedForSatelliteContractVersion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_LOOKEDFORSATELLITECONTRACTVERSION_OFFSET))(nullptr);
		}

		::System::Void set_LookedForSatelliteContractVersion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_SET_LOOKEDFORSATELLITECONTRACTVERSION_OFFSET))(arg, nullptr);
		}

		::System::Version* get_SatelliteContractVersion()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_SATELLITECONTRACTVERSION_OFFSET))(nullptr);
		}

		::System::Void set_SatelliteContractVersion(::System::Version* arg)
		{
			((::System::Void(*)(::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_SET_SATELLITECONTRACTVERSION_OFFSET))(arg, nullptr);
		}

		::System::Version* ObtainSatelliteContractVersion(::System::Reflection::Assembly* arg)
		{
			return (return (::System::Version*(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_OBTAINSATELLITECONTRACTVERSION_OFFSET))(arg, nullptr);
		}

		::System::Resources::UltimateResourceFallbackLocation* get_FallbackLoc()
		{
			return (return (::System::Resources::UltimateResourceFallbackLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_FALLBACKLOC_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeAssembly* get_CallingAssembly()
		{
			return (return (::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_CALLINGASSEMBLY_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeAssembly* get_MainAssembly()
		{
			return (return (::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_MAINASSEMBLY_OFFSET))(nullptr);
		}

		::System::String* get_BaseName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESOURCEMANAGERMEDIATOR_GET_BASENAME_OFFSET))(nullptr);
		}

	};

