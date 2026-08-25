#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_.CTOR_OFFSET UNITYSDK_OFFSET(0x922ED10)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET UNITYSDK_OFFSET(0x922ED40)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_ULTIMATEFALLBACKFIXUP_OFFSET UNITYSDK_OFFSET(0x922F110)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9230B40)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET UNITYSDK_OFFSET(0x922FCF0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETMANIFESTRESOURCESTREAM_OFFSET UNITYSDK_OFFSET(0x922FAF0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET UNITYSDK_OFFSET(0x92312B0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x922F2C0)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CANUSEDEFAULTRESOURCECLASSES_OFFSET UNITYSDK_OFFSET(0x9230F90)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x9231830)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLESATELLITEMISSING_OFFSET UNITYSDK_OFFSET(0x922F600)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLERESOURCESTREAMMISSING_OFFSET UNITYSDK_OFFSET(0x9230730)
#define SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9230EF0)

namespace System::Resources
{
	inline static constexpr unsigned int ManifestBasedResourceGroveler_TypeDefinitionIndex = 24819;

	class ManifestBasedResourceGroveler : public Il2CppObject
	{
	public:
		ResourceManagerMediator* _mediator; // 0x10

		::System::Void .ctor(ResourceManagerMediator* arg)
		{
			((::System::Void(*)(ResourceManagerMediator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Resources::ResourceSet*(*)(::System::Globalization::CultureInfo*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GROVELFORRESOURCESET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Globalization::CultureInfo* UltimateFallbackFixup(::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Globalization::CultureInfo*(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_ULTIMATEFALLBACKFIXUP_OFFSET))(arg, nullptr);
		}

		::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly* arg, ::System::Resources::UltimateResourceFallbackLocation&* arg)
		{
			return (return (::System::Globalization::CultureInfo*(*)(::System::Reflection::Assembly*, ::System::Resources::UltimateResourceFallbackLocation&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Resources::ResourceSet* CreateResourceSet(::System::IO::Stream* arg, ::System::Reflection::Assembly* arg)
		{
			return (return (::System::Resources::ResourceSet*(*)(::System::IO::Stream*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CREATERESOURCESET_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* GetManifestResourceStream(::System::Reflection::RuntimeAssembly* arg, ::System::String* str, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Reflection::RuntimeAssembly*, ::System::String*, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETMANIFESTRESOURCESTREAM_OFFSET))(arg, str, arg, nullptr);
		}

		::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::RuntimeAssembly* arg, ::System::String* str)
		{
			return (return (::System::IO::Stream*(*)(::System::Reflection::RuntimeAssembly*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET))(arg, str, nullptr);
		}

		::System::Reflection::RuntimeAssembly* GetSatelliteAssembly(::System::Globalization::CultureInfo* arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Reflection::RuntimeAssembly*(*)(::System::Globalization::CultureInfo*, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanUseDefaultResourceClasses(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_CANUSEDEFAULTRESOURCECLASSES_OFFSET))(str, str, nullptr);
		}

		::System::String* GetSatelliteAssemblyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETSATELLITEASSEMBLYNAME_OFFSET))(nullptr);
		}

		::System::Void HandleSatelliteMissing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLESATELLITEMISSING_OFFSET))(nullptr);
		}

		::System::Void HandleResourceStreamMissing(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_HANDLERESOURCESTREAMMISSING_OFFSET))(str, nullptr);
		}

		::System::Boolean GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* arg, ::System::String&* arg, int16_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::Assembly*, ::System::String&*, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MANIFESTBASEDRESOURCEGROVELER_GETNEUTRALRESOURCESLANGUAGEATTRIBUTE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

