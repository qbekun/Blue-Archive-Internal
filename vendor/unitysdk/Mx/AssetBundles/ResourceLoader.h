#pragma once
#include "../../unitysdk.h"

namespace MX::AssetBundles { class PatchStatus; }

#define MX_ASSETBUNDLES_RESOURCELOADER_INITIALIZEADDRESSABLES_OFFSET UNITYSDK_OFFSET(0x1445650)
#define MX_ASSETBUNDLES_RESOURCELOADER_INITALIZEADDRESSABLEWITHCATALOG_OFFSET UNITYSDK_OFFSET(0x14456E0)
#define MX_ASSETBUNDLES_RESOURCELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1445790)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int ResourceLoader_TypeDefinitionIndex = 14953;

	class ResourceLoader : public ::ToyWebViewShared::Messages::RequestExecuteJavaScript
	{
	public:
		::System::Boolean _addressableInitialized; // 0x20

		::System::Collections::IEnumerator* InitializeAddressables()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCELOADER_INITIALIZEADDRESSABLES_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitalizeAddressableWithCatalog(::MX::AssetBundles::PatchStatus* arg, ::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::AssetBundles::PatchStatus*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCELOADER_INITALIZEADDRESSABLEWITHCATALOG_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCELOADER_.CTOR_OFFSET))(nullptr);
		}

	};
}

