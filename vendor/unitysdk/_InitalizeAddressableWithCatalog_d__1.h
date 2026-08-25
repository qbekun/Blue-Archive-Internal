#pragma once
#include "unitysdk.h"

namespace MX::AssetBundles { class ResourceLoader; }
namespace MX::AssetBundles { class PatchStatus; }

#define <INITALIZEADDRESSABLEWITHCATALOG>D__1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1445770)
#define <INITALIZEADDRESSABLEWITHCATALOG>D__1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x14459C0)
#define <INITALIZEADDRESSABLEWITHCATALOG>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14459D0)
#define <INITALIZEADDRESSABLEWITHCATALOG>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1445FD0)
#define <INITALIZEADDRESSABLEWITHCATALOG>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1445FE0)
#define <INITALIZEADDRESSABLEWITHCATALOG>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1446030)

	inline static constexpr unsigned int <InitalizeAddressableWithCatalog>d__1_TypeDefinitionIndex = 14951;

	class <InitalizeAddressableWithCatalog>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::AssetBundles::ResourceLoader* __4__this; // 0x20
		::MX::AssetBundles::PatchStatus* status; // 0x28
		::System::String* cachedCatalogPath; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <INITALIZEADDRESSABLEWITHCATALOG>D__1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITALIZEADDRESSABLEWITHCATALOG>D__1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITALIZEADDRESSABLEWITHCATALOG>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITALIZEADDRESSABLEWITHCATALOG>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITALIZEADDRESSABLEWITHCATALOG>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITALIZEADDRESSABLEWITHCATALOG>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

